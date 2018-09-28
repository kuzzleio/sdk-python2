// Copyright 2015-2018 Kuzzle
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// 		http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

package ms

import (
	"encoding/json"
	"github.com/kuzzleio/sdk-go/types"
)

// Geoadd deletes all keys from the database
func (ms *Ms) Geoadd(key string, points []*types.GeoPoint, options types.QueryOptions) (int, error) {
	result := make(chan *types.KuzzleResponse)

	type body struct {
		Points []*types.GeoPoint `json:"points"`
	}

	query := &types.KuzzleRequest{
		Controller: "ms",
		Action:     "geoadd",
		Id:         key,
		Body:       &body{Points: points},
	}
	go ms.Kuzzle.Query(query, options, result)

	res := <-result

	if res.Error.Error() != "" {
		return 0, res.Error
	}
	var returnedResult int
	json.Unmarshal(res.Result, &returnedResult)

	return returnedResult, nil
}