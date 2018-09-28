/* Created by "go tool cgo" - DO NOT EDIT. */

/* package _/home/kblondel/Projects/sdk-python2/sdk-cpp/sdk-c/cgo/kuzzle */

/* Start of preamble from import "C" comments.  */


#line 17 "/home/kblondel/Projects/sdk-python2/sdk-cpp/sdk-c/cgo/kuzzle/auth.go"



  #include <stdlib.h>
  #include <errno.h>
  #include "kuzzlesdk.h"
  #include "sdk_wrappers_internal.h"

#line 1 "cgo-generated-wrapper"

#line 17 "/home/kblondel/Projects/sdk-python2/sdk-cpp/sdk-c/cgo/kuzzle/collection.go"


	#include "kuzzlesdk.h"
	#include "sdk_wrappers_internal.h"

#line 1 "cgo-generated-wrapper"

#line 17 "/home/kblondel/Projects/sdk-python2/sdk-cpp/sdk-c/cgo/kuzzle/destructors.go"



  #include <stdlib.h>
  #include "kuzzlesdk.h"

  static void free_char_array(char **arr, size_t length) {
    if (arr != NULL) {
      for(int i = 0; i < length; i++) {
        free(arr[i]);
      }

      free(arr);
    }
  }

#line 1 "cgo-generated-wrapper"

#line 17 "/home/kblondel/Projects/sdk-python2/sdk-cpp/sdk-c/cgo/kuzzle/document.go"


	#include "kuzzlesdk.h"
    #include "sdk_wrappers_internal.h"

#line 1 "cgo-generated-wrapper"

#line 17 "/home/kblondel/Projects/sdk-python2/sdk-cpp/sdk-c/cgo/kuzzle/index.go"


	#include <errno.h>
	#include <stdlib.h>
	#include "kuzzlesdk.h"
	#include "sdk_wrappers_internal.h"

#line 1 "cgo-generated-wrapper"

#line 17 "/home/kblondel/Projects/sdk-python2/sdk-cpp/sdk-c/cgo/kuzzle/kuzzle.go"


	#include <stdlib.h>
	#include <string.h>
	#include "kuzzlesdk.h"
	#include "sdk_wrappers_internal.h"

#line 1 "cgo-generated-wrapper"

#line 17 "/home/kblondel/Projects/sdk-python2/sdk-cpp/sdk-c/cgo/kuzzle/memory_storage.go"



  #include <stdlib.h>
  #include <string.h>
  #include "kuzzlesdk.h"
  #include "sdk_wrappers_internal.h"

  static void assign_geopos(double (*ptr)[2], int idx, double lon, double lat) {
    ptr[idx][0] = lon;
    ptr[idx][1] = lat;
  }

#line 1 "cgo-generated-wrapper"

#line 17 "/home/kblondel/Projects/sdk-python2/sdk-cpp/sdk-c/cgo/kuzzle/options.go"


	#include <stdlib.h>
	#include "kuzzlesdk.h"

#line 1 "cgo-generated-wrapper"

#line 17 "/home/kblondel/Projects/sdk-python2/sdk-cpp/sdk-c/cgo/kuzzle/query.go"


	#include <stdlib.h>
	#include "kuzzlesdk.h"

#line 1 "cgo-generated-wrapper"

#line 17 "/home/kblondel/Projects/sdk-python2/sdk-cpp/sdk-c/cgo/kuzzle/realtime.go"


	#include "kuzzlesdk.h"
    #include "sdk_wrappers_internal.h"

#line 1 "cgo-generated-wrapper"

#line 17 "/home/kblondel/Projects/sdk-python2/sdk-cpp/sdk-c/cgo/kuzzle/security.go"


	#include <errno.h>
	#include <stdlib.h>
	#include "kuzzlesdk.h"
	#include "sdk_wrappers_internal.h"

#line 1 "cgo-generated-wrapper"

#line 17 "/home/kblondel/Projects/sdk-python2/sdk-cpp/sdk-c/cgo/kuzzle/server.go"


	#include <errno.h>
	#include <stdlib.h>
	#include "kuzzlesdk.h"
	#include "sdk_wrappers_internal.h"

#line 1 "cgo-generated-wrapper"


/* End of preamble from import "C" comments.  */


/* Start of boilerplate cgo prologue.  */
#line 1 "cgo-gcc-export-header-prolog"

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef long long GoInt64;
typedef unsigned long long GoUint64;
typedef GoInt64 GoInt;
typedef GoUint64 GoUint;
typedef __SIZE_TYPE__ GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;
typedef float _Complex GoComplex64;
typedef double _Complex GoComplex128;

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
typedef char _check_for_64_bit_pointer_matching_GoInt[sizeof(void*)==64/8 ? 1:-1];

typedef struct { const char *p; GoInt n; } GoString;
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;
typedef struct { void *data; GoInt len; GoInt cap; } GoSlice;

#endif

/* End of boilerplate cgo prologue.  */

#ifdef __cplusplus
extern "C" {
#endif


// unregister an instance from the instances map

extern void unregisterAuth(auth* p0);

// Allocates memory

extern void kuzzle_new_auth(auth* p0, kuzzle* p1);

extern token_validity* kuzzle_check_token(auth* p0, char* p1);

extern string_result* kuzzle_create_my_credentials(auth* p0, char* p1, char* p2, query_options* p3);

extern bool_result* kuzzle_credentials_exist(auth* p0, char* p1, query_options* p2);

extern error_result* kuzzle_delete_my_credentials(auth* p0, char* p1, query_options* p2);

extern user_result* kuzzle_get_current_user(auth* p0);

extern string_result* kuzzle_get_my_credentials(auth* p0, char* p1, query_options* p2);

extern user_rights_result* kuzzle_get_my_rights(auth* p0, query_options* p1);

extern string_array_result* kuzzle_get_strategies(auth* p0, query_options* p1);

extern string_result* kuzzle_login(auth* p0, char* p1, char* p2, int* p3);

extern char* kuzzle_logout(auth* p0);

extern string_result* kuzzle_update_my_credentials(auth* p0, char* p1, char* p2, query_options* p3);

extern user_result* kuzzle_update_self(auth* p0, char* p1, query_options* p2);

extern bool_result* kuzzle_validate_my_credentials(auth* p0, char* p1, char* p2, query_options* p3);

// unregister an instance from the instances map

extern void unregisterCollection(collection* p0);

// Allocates memory

extern void kuzzle_new_collection(collection* p0, kuzzle* p1);

extern error_result* kuzzle_collection_create(collection* p0, char* p1, char* p2, char* p3, query_options* p4);

extern error_result* kuzzle_collection_truncate(collection* p0, char* p1, char* p2, query_options* p3);

extern bool_result* kuzzle_collection_exists(collection* p0, char* p1, char* p2, query_options* p3);

extern string_result* kuzzle_collection_list(collection* p0, char* p1, query_options* p2);

extern string_result* kuzzle_collection_get_mapping(collection* p0, char* p1, char* p2, query_options* p3);

extern error_result* kuzzle_collection_update_mapping(collection* p0, char* p1, char* p2, char* p3, query_options* p4);

extern error_result* kuzzle_collection_delete_specifications(collection* p0, char* p1, char* p2, query_options* p3);

extern string_result* kuzzle_collection_get_specifications(collection* p0, char* p1, char* p2, query_options* p3);

extern search_result* kuzzle_collection_search_specifications(collection* p0, query_options* p1);

extern string_result* kuzzle_collection_update_specifications(collection* p0, char* p1, char* p2, char* p3, query_options* p4);

extern bool_result* kuzzle_collection_validate_specifications(collection* p0, char* p1, query_options* p2);

extern void kuzzle_free_kuzzle_request(kuzzle_request* p0);

extern void kuzzle_free_query_object(query_object* p0);

extern void kuzzle_free_offline_queue(offline_queue* p0);

extern void kuzzle_free_query_options(query_options* p0);

extern void kuzzle_free_room_options(room_options* p0);

extern void kuzzle_free_options(options* p0);

extern void kuzzle_free_meta(meta* p0);

extern void kuzzle_free_policy_restriction(policy_restriction* p0);

extern void kuzzle_free_policy(policy* p0);

extern void kuzzle_free_profile(profile* p0);

extern void kuzzle_free_role(role* p0);

extern void kuzzle_free_user(kuzzle_user* p0);

extern void kuzzle_free_user_data(user_data* p0);

extern void kuzzle_free_collection(collection* p0);

extern void kuzzle_free_document(document* p0);

extern void kuzzle_free_notification_content(notification_content* p0);

extern void kuzzle_free_notification_result(notification_result* p0);

extern void kuzzle_free_profile_result(profile_result* p0);

extern void kuzzle_free_profiles_result(profiles_result* p0);

extern void kuzzle_free_role_result(role_result* p0);

extern void kuzzle_free_subscribe_result(subscribe_result* p0);

extern void kuzzle_free_user_right(user_right* p0);

extern void kuzzle_free_user_rights_result(user_rights_result* p0);

extern void kuzzle_free_user_result(user_result* p0);

extern void kuzzle_free_statistics(statistics* p0);

extern void kuzzle_free_statistics_result(statistics_result* p0);

extern void kuzzle_free_all_statistics_result(all_statistics_result* p0);

extern void kuzzle_free_geopos_result(geopos_result* p0);

extern void kuzzle_free_token_validity(token_validity* p0);

extern void kuzzle_free_kuzzle_response(kuzzle_response* p0);

extern void kuzzle_free_json_result(json_result* p0);

extern void kuzzle_free_bool_result(bool_result* p0);

extern void kuzzle_free_int_result(int_result* p0);

extern void kuzzle_free_double_result(double_result* p0);

extern void kuzzle_free_int_array_result(int_array_result* p0);

extern void kuzzle_free_string_result(string_result* p0);

extern void kuzzle_free_string_array_result(string_array_result* p0);

extern void kuzzle_free_profile_search(profile_search* p0);

extern void kuzzle_free_role_search(role_search* p0);

extern void kuzzle_free_ack_result(ack_result* p0);

extern void kuzzle_free_shards_result(shards_result* p0);

extern void kuzzle_free_specification(specification* p0);

extern void kuzzle_free_specification_entry(specification_entry* p0);

extern void kuzzle_free_specification_result(specification_result* p0);

extern void kuzzle_free_search_result(search_result* p0);

extern void kuzzle_free_search_profiles_result(search_profiles_result* p0);

extern void kuzzle_free_search_roles_result(search_roles_result* p0);

extern void kuzzle_free_specification_search(specification_search* p0);

extern void kuzzle_free_specification_search_result(specification_search_result* p0);

extern void kuzzle_free_error_result(error_result* p0);

extern void kuzzle_free_collection_entry(collection_entry* p0);

extern void kuzzle_free_collection_entry_result(collection_entry_result* p0);

extern void kuzzle_free_user_search(user_search* p0);

extern void kuzzle_free_search_users_result(search_users_result* p0);

// unregister an instance from the instances map

extern void unregisterDocument(document* p0);

extern void kuzzle_new_document(document* p0, kuzzle* p1);

extern int_result* kuzzle_document_count(document* p0, char* p1, char* p2, char* p3, query_options* p4);

extern bool_result* kuzzle_document_exists(document* p0, char* p1, char* p2, char* p3, query_options* p4);

extern string_result* kuzzle_document_create(document* p0, char* p1, char* p2, char* p3, char* p4, query_options* p5);

extern string_result* kuzzle_document_create_or_replace(document* p0, char* p1, char* p2, char* p3, char* p4, query_options* p5);

extern string_result* kuzzle_document_delete(document* p0, char* p1, char* p2, char* p3, query_options* p4);

extern string_array_result* kuzzle_document_delete_by_query(document* p0, char* p1, char* p2, char* p3, query_options* p4);

extern string_result* kuzzle_document_get(document* p0, char* p1, char* p2, char* p3, query_options* p4);

extern string_result* kuzzle_document_replace(document* p0, char* p1, char* p2, char* p3, char* p4, query_options* p5);

extern string_result* kuzzle_document_update(document* p0, char* p1, char* p2, char* p3, char* p4, query_options* p5);

extern bool_result* kuzzle_document_validate(document* p0, char* p1, char* p2, char* p3, query_options* p4);

extern search_result* kuzzle_document_search(document* p0, char* p1, char* p2, char* p3, query_options* p4);

extern string_result* kuzzle_document_mcreate(document* p0, char* p1, char* p2, char* p3, query_options* p4);

extern string_result* kuzzle_document_mcreate_or_replace(document* p0, char* p1, char* p2, char* p3, query_options* p4);

extern string_array_result* kuzzle_document_mdelete(document* p0, char* p1, char* p2, char** p3, size_t p4, query_options* p5);

extern string_result* kuzzle_document_mget(document* p0, char* p1, char* p2, char** p3, size_t p4, _Bool p5, query_options* p6);

extern string_result* kuzzle_document_mreplace(document* p0, char* p1, char* p2, char* p3, query_options* p4);

extern string_result* kuzzle_document_mupdate(document* p0, char* p1, char* p2, char* p3, query_options* p4);

// unregister an instance from the instances map

extern void unregisterIndex(kuzzle_index* p0);

// Allocates memory

extern void kuzzle_new_index(kuzzle_index* p0, kuzzle* p1);

extern error_result* kuzzle_index_create(kuzzle_index* p0, char* p1, query_options* p2);

extern error_result* kuzzle_index_delete(kuzzle_index* p0, char* p1, query_options* p2);

extern string_array_result* kuzzle_index_mdelete(kuzzle_index* p0, char** p1, size_t p2, query_options* p3);

extern bool_result* kuzzle_index_exists(kuzzle_index* p0, char* p1, query_options* p2);

extern error_result* kuzzle_index_refresh(kuzzle_index* p0, char* p1, query_options* p2);

extern error_result* kuzzle_index_refresh_internal(kuzzle_index* p0, query_options* p1);

extern error_result* kuzzle_index_set_auto_refresh(kuzzle_index* p0, char* p1, _Bool p2, query_options* p3);

extern bool_result* kuzzle_index_get_auto_refresh(kuzzle_index* p0, char* p1, query_options* p2);

extern string_array_result* kuzzle_index_list(kuzzle_index* p0, query_options* p1);

// unregister an instance from the instances map

extern void unregisterKuzzle(kuzzle* p0);

extern void kuzzle_new_kuzzle(kuzzle* p0, char* p1, char* p2, options* p3);

extern document* kuzzle_get_document_controller(kuzzle* p0);

extern auth* kuzzle_get_auth_controller(kuzzle* p0);

extern kuzzle_index* kuzzle_get_index_controller(kuzzle* p0);

extern char* kuzzle_get_jwt(kuzzle* p0);

extern void kuzzle_set_jwt(kuzzle* p0, char* p1);

extern server* kuzzle_get_server_controller(kuzzle* p0);

extern collection* kuzzle_get_collection_controller(kuzzle* p0);

extern realtime* kuzzle_get_realtime_controller(kuzzle* p0);

// Allocates memory

extern char* kuzzle_connect(kuzzle* p0);

extern void kuzzle_disconnect(kuzzle* p0);

extern void kuzzle_emit_event(kuzzle* p0, int p1, char* p2);

extern offline_queue* kuzzle_get_offline_queue(kuzzle* p0);

extern void kuzzle_flush_queue(kuzzle* p0);

extern void kuzzle_play_queue(kuzzle* p0);

extern void kuzzle_start_queuing(kuzzle* p0);

extern void kuzzle_stop_queuing(kuzzle* p0);

// TODO loop and close on Unsubscribe

extern void kuzzle_add_listener(kuzzle* p0, int p1, kuzzle_event_listener p2, void* p3);

extern void kuzzle_once(kuzzle* p0, int p1, kuzzle_event_listener p2, void* p3);

extern GoInt kuzzle_listener_count(kuzzle* p0, int p1);

extern void kuzzle_remove_listener(kuzzle* p0, int p1, void* p2);

extern void kuzzle_remove_all_listeners(kuzzle* p0, int p1);

extern _Bool kuzzle_get_auto_queue(kuzzle* p0);

extern void kuzzle_set_auto_queue(kuzzle* p0, _Bool p1);

extern _Bool kuzzle_get_auto_reconnect(kuzzle* p0);

extern _Bool kuzzle_get_auto_resubscribe(kuzzle* p0);

extern _Bool kuzzle_get_auto_replay(kuzzle* p0);

extern void kuzzle_set_auto_replay(kuzzle* p0, _Bool p1);

extern char* kuzzle_get_host(kuzzle* p0);

extern kuzzle_offline_queue_loader kuzzle_get_offline_queue_loader(kuzzle* p0);

extern void kuzzle_set_offline_queue_loader(kuzzle* p0, kuzzle_offline_queue_loader p1);

extern int kuzzle_get_port(kuzzle* p0);

extern kuzzle_queue_filter kuzzle_get_queue_filter(kuzzle* p0);

extern void kuzzle_set_queue_filter(kuzzle* p0, kuzzle_queue_filter p1);

extern int kuzzle_get_queue_max_size(kuzzle* p0);

extern void kuzzle_set_queue_max_size(kuzzle* p0, int p1);

extern int kuzzle_get_queue_ttl(kuzzle* p0);

extern void kuzzle_set_queue_ttl(kuzzle* p0, int p1);

extern int kuzzle_get_replay_interval(kuzzle* p0);

extern void kuzzle_set_replay_interval(kuzzle* p0, int p1);

extern int kuzzle_get_reconnection_delay(kuzzle* p0);

extern _Bool kuzzle_get_ssl_connection(kuzzle* p0);

extern char* kuzzle_get_volatile(kuzzle* p0);

extern void kuzzle_set_volatile(kuzzle* p0, char* p1);

extern int_result* kuzzle_ms_append(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern int_result* kuzzle_ms_bitcount(kuzzle* p0, char* p1, query_options* p2);

extern int_result* kuzzle_ms_bitop(kuzzle* p0, char* p1, char* p2, char** p3, size_t p4, query_options* p5);

extern int_result* kuzzle_ms_bitpos(kuzzle* p0, char* p1, unsigned char p2, query_options* p3);

extern int_result* kuzzle_ms_dbsize(kuzzle* p0, query_options* p1);

extern int_result* kuzzle_ms_decr(kuzzle* p0, char* p1, query_options* p2);

extern int_result* kuzzle_ms_decrby(kuzzle* p0, char* p1, int p2, query_options* p3);

extern int_result* kuzzle_ms_del(kuzzle* p0, char** p1, size_t p2, query_options* p3);

extern int_result* kuzzle_ms_exists(kuzzle* p0, char** p1, size_t p2, query_options* p3);

extern bool_result* kuzzle_ms_expire(kuzzle* p0, char* p1, long unsigned int p2, query_options* p3);

extern bool_result* kuzzle_ms_expireat(kuzzle* p0, char* p1, long long unsigned int p2, query_options* p3);

extern error_result* kuzzle_ms_flushdb(kuzzle* p0, query_options* p1);

extern int_result* kuzzle_ms_geoadd(kuzzle* p0, char* p1, point** p2, size_t p3, query_options* p4);

extern double_result* kuzzle_ms_geodist(kuzzle* p0, char* p1, char* p2, char* p3, query_options* p4);

extern string_array_result* kuzzle_ms_geohash(kuzzle* p0, char* p1, char** p2, size_t p3, query_options* p4);

extern geopos_result* kuzzle_ms_geopos(kuzzle* p0, char* p1, char** p2, size_t p3, query_options* p4);

extern string_result* kuzzle_ms_georadius(kuzzle* p0, char* p1, double p2, double p3, double p4, char* p5, query_options* p6);

extern string_result* kuzzle_ms_georadiusbymember(kuzzle* p0, char* p1, char* p2, double p3, char* p4, query_options* p5);

extern string_result* kuzzle_ms_get(kuzzle* p0, char* p1, query_options* p2);

extern int_result* kuzzle_ms_getbit(kuzzle* p0, char* p1, int p2, query_options* p3);

extern string_result* kuzzle_ms_getrange(kuzzle* p0, char* p1, int p2, int p3, query_options* p4);

extern string_result* kuzzle_ms_getset(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern int_result* kuzzle_ms_hdel(kuzzle* p0, char* p1, char** p2, size_t p3, query_options* p4);

extern bool_result* kuzzle_ms_hexists(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern string_result* kuzzle_ms_hget(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern string_result* kuzzle_ms_hgetall(kuzzle* p0, char* p1, query_options* p2);

extern int_result* kuzzle_ms_hincrby(kuzzle* p0, char* p1, char* p2, long int p3, query_options* p4);

extern double_result* kuzzle_ms_hincrbyfloat(kuzzle* p0, char* p1, char* p2, double p3, query_options* p4);

extern string_array_result* kuzzle_ms_hkeys(kuzzle* p0, char* p1, query_options* p2);

extern int_result* kuzzle_ms_hlen(kuzzle* p0, char* p1, query_options* p2);

extern string_array_result* kuzzle_ms_hmget(kuzzle* p0, char* p1, char** p2, size_t p3, query_options* p4);

extern error_result* kuzzle_ms_hmset(kuzzle* p0, char* p1, ms_hash_field** p2, size_t p3, query_options* p4);

extern string_result* kuzzle_ms_hscan(kuzzle* p0, char* p1, int p2, query_options* p3);

extern bool_result* kuzzle_ms_hset(kuzzle* p0, char* p1, char* p2, char* p3, query_options* p4);

extern bool_result* kuzzle_ms_hsetnx(kuzzle* p0, char* p1, char* p2, char* p3, query_options* p4);

extern int_result* kuzzle_ms_hstrlen(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern string_array_result* kuzzle_ms_hvals(kuzzle* p0, char* p1, query_options* p2);

extern int_result* kuzzle_ms_incr(kuzzle* p0, char* p1, query_options* p2);

extern int_result* kuzzle_ms_incrby(kuzzle* p0, char* p1, long int p2, query_options* p3);

extern double_result* kuzzle_ms_incrbyfloat(kuzzle* p0, char* p1, double p2, query_options* p3);

extern string_array_result* kuzzle_ms_keys(kuzzle* p0, char* p1, query_options* p2);

extern string_result* kuzzle_ms_lindex(kuzzle* p0, char* p1, long int p2, query_options* p3);

extern int_result* kuzzle_ms_linsert(kuzzle* p0, char* p1, char* p2, char* p3, char* p4, query_options* p5);

extern int_result* kuzzle_ms_llen(kuzzle* p0, char* p1, query_options* p2);

extern string_result* kuzzle_ms_lpop(kuzzle* p0, char* p1, query_options* p2);

extern int_result* kuzzle_ms_lpush(kuzzle* p0, char* p1, char** p2, size_t p3, query_options* p4);

extern int_result* kuzzle_ms_lpushx(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern string_array_result* kuzzle_ms_lrange(kuzzle* p0, char* p1, long int p2, long int p3, query_options* p4);

extern int_result* kuzzle_ms_lrem(kuzzle* p0, char* p1, long int p2, char* p3, query_options* p4);

extern error_result* kuzzle_ms_lset(kuzzle* p0, char* p1, long int p2, char* p3, query_options* p4);

extern error_result* kuzzle_ms_ltrim(kuzzle* p0, char* p1, long int p2, long int p3, query_options* p4);

extern string_array_result* kuzzle_ms_mget(kuzzle* p0, char** p1, size_t p2, query_options* p3);

extern error_result* kuzzle_ms_mset(kuzzle* p0, ms_key_value** p1, size_t p2, query_options* p3);

extern bool_result* kuzzle_ms_msetnx(kuzzle* p0, ms_key_value** p1, size_t p2, query_options* p3);

extern string_result* kuzzle_ms_object(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern bool_result* kuzzle_ms_persist(kuzzle* p0, char* p1, query_options* p2);

extern bool_result* kuzzle_ms_pexpire(kuzzle* p0, char* p1, long unsigned int p2, query_options* p3);

extern bool_result* kuzzle_ms_pexpireat(kuzzle* p0, char* p1, long long unsigned int p2, query_options* p3);

extern bool_result* kuzzle_ms_pfadd(kuzzle* p0, char* p1, char** p2, size_t p3, query_options* p4);

extern int_result* kuzzle_ms_pfcount(kuzzle* p0, char** p1, size_t p2, query_options* p3);

extern error_result* kuzzle_ms_pfmerge(kuzzle* p0, char* p1, char** p2, size_t p3, query_options* p4);

extern string_result* kuzzle_ms_ping(kuzzle* p0, query_options* p1);

extern error_result* kuzzle_ms_psetex(kuzzle* p0, char* p1, char* p2, long unsigned int p3, query_options* p4);

extern int_result* kuzzle_ms_pttl(kuzzle* p0, char* p1, query_options* p2);

extern string_result* kuzzle_ms_randomkey(kuzzle* p0, query_options* p1);

extern error_result* kuzzle_ms_rename(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern bool_result* kuzzle_ms_renamenx(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern string_result* kuzzle_ms_rpop(kuzzle* p0, char* p1, query_options* p2);

extern string_result* kuzzle_ms_rpoplpush(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern int_result* kuzzle_ms_rpush(kuzzle* p0, char* p1, char** p2, size_t p3, query_options* p4);

extern int_result* kuzzle_ms_rpushx(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern int_result* kuzzle_ms_sadd(kuzzle* p0, char* p1, char** p2, size_t p3, query_options* p4);

extern string_result* kuzzle_ms_scan(kuzzle* p0, int p1, query_options* p2);

extern int_result* kuzzle_ms_scard(kuzzle* p0, char* p1, query_options* p2);

extern string_array_result* kuzzle_ms_sdiff(kuzzle* p0, char* p1, char** p2, size_t p3, query_options* p4);

extern int_result* kuzzle_ms_sdiffstore(kuzzle* p0, char* p1, char** p2, size_t p3, char* p4, query_options* p5);

extern error_result* kuzzle_ms_set(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern error_result* kuzzle_ms_setex(kuzzle* p0, char* p1, char* p2, long unsigned int p3, query_options* p4);

extern bool_result* kuzzle_ms_setnx(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern string_array_result* kuzzle_ms_sinter(kuzzle* p0, char** p1, size_t p2, query_options* p3);

extern int_result* kuzzle_ms_sinterstore(kuzzle* p0, char* p1, char** p2, size_t p3, query_options* p4);

extern bool_result* kuzzle_ms_sismember(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern string_array_result* kuzzle_ms_smembers(kuzzle* p0, char* p1, query_options* p2);

extern bool_result* kuzzle_ms_smove(kuzzle* p0, char* p1, char* p2, char* p3, query_options* p4);

extern string_array_result* kuzzle_ms_sort(kuzzle* p0, char* p1, query_options* p2);

extern string_array_result* kuzzle_ms_spop(kuzzle* p0, char* p1, query_options* p2);

extern string_array_result* kuzzle_ms_srandmember(kuzzle* p0, char* p1, query_options* p2);

extern int_result* kuzzle_ms_srem(kuzzle* p0, char* p1, char** p2, size_t p3, query_options* p4);

extern string_result* kuzzle_ms_sscan(kuzzle* p0, char* p1, int p2, query_options* p3);

extern int_result* kuzzle_ms_strlen(kuzzle* p0, char* p1, query_options* p2);

extern string_array_result* kuzzle_ms_sunion(kuzzle* p0, char** p1, size_t p2, query_options* p3);

extern int_result* kuzzle_ms_sunionstore(kuzzle* p0, char* p1, char** p2, size_t p3, query_options* p4);

extern int_array_result* kuzzle_ms_time(kuzzle* p0, query_options* p1);

extern int_result* kuzzle_ms_touch(kuzzle* p0, char** p1, size_t p2, query_options* p3);

extern int_result* kuzzle_ms_ttl(kuzzle* p0, char* p1, query_options* p2);

extern string_result* kuzzle_ms_type(kuzzle* p0, char* p1, query_options* p2);

extern int_result* kuzzle_ms_zadd(kuzzle* p0, char* p1, ms_sorted_set** p2, size_t p3, query_options* p4);

extern int_result* kuzzle_ms_zcard(kuzzle* p0, char* p1, query_options* p2);

extern int_result* kuzzle_ms_zcount(kuzzle* p0, char* p1, long int p2, long int p3, query_options* p4);

extern double_result* kuzzle_ms_zincrby(kuzzle* p0, char* p1, char* p2, double p3, query_options* p4);

extern int_result* kuzzle_ms_zinterstore(kuzzle* p0, char* p1, char** p2, size_t p3, query_options* p4);

extern int_result* kuzzle_ms_zlexcount(kuzzle* p0, char* p1, char* p2, char* p3, query_options* p4);

extern string_result* kuzzle_ms_zrange(kuzzle* p0, char* p1, long int p2, long int p3, query_options* p4);

extern string_array_result* kuzzle_ms_zrangebylex(kuzzle* p0, char* p1, char* p2, char* p3, query_options* p4);

extern string_result* kuzzle_ms_zrangebyscore(kuzzle* p0, char* p1, double p2, double p3, query_options* p4);

extern int_result* kuzzle_ms_zrank(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern int_result* kuzzle_ms_zrem(kuzzle* p0, char* p1, char** p2, size_t p3, query_options* p4);

extern int_result* kuzzle_ms_zremrangebylex(kuzzle* p0, char* p1, char* p2, char* p3, query_options* p4);

extern int_result* kuzzle_ms_zremrangebyrank(kuzzle* p0, char* p1, long int p2, long int p3, query_options* p4);

extern int_result* kuzzle_ms_zremrangebyscore(kuzzle* p0, char* p1, double p2, double p3, query_options* p4);

extern string_result* kuzzle_ms_zrevrange(kuzzle* p0, char* p1, long int p2, long int p3, query_options* p4);

extern string_result* kuzzle_ms_zrevrangebylex(kuzzle* p0, char* p1, char* p2, char* p3, query_options* p4);

extern string_result* kuzzle_ms_zrevrangebyscore(kuzzle* p0, char* p1, double p2, double p3, query_options* p4);

extern int_result* kuzzle_ms_zrevrank(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern string_result* kuzzle_ms_zscan(kuzzle* p0, char* p1, int p2, query_options* p3);

extern double_result* kuzzle_ms_zscore(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern options* kuzzle_new_options();

extern kuzzle_response* kuzzle_query(kuzzle* p0, kuzzle_request* p1, query_options* p2);

// unregister an instance from the instances map

extern void unregisterRealtime(realtime* p0);

// Allocates memory

extern void kuzzle_new_realtime(realtime* p0, kuzzle* p1);

extern int_result* kuzzle_realtime_count(realtime* p0, char* p1, char* p2, char* p3, query_options* p4);

extern string_result* kuzzle_realtime_list(realtime* p0, char* p1, char* p2, query_options* p3);

extern error_result* kuzzle_realtime_publish(realtime* p0, char* p1, char* p2, char* p3, query_options* p4);

extern error_result* kuzzle_realtime_unsubscribe(realtime* p0, char* p1, query_options* p2);

extern subscribe_result* kuzzle_realtime_subscribe(realtime* p0, char* p1, char* p2, char* p3, kuzzle_notification_listener p4, void* p5, room_options* p6);

extern bool_result* kuzzle_realtime_validate(realtime* p0, char* p1, char* p2, char* p3, query_options* p4);

extern profile* kuzzle_security_new_profile(kuzzle* p0, char* p1, policy* p2, size_t p3);

extern void kuzzle_security_destroy_profile(profile* p0);

extern kuzzle_user* kuzzle_security_new_user(kuzzle* p0, char* p1, user_data* p2);

extern void kuzzle_security_destroy_user(kuzzle_user* p0);

extern role* kuzzle_security_new_role(kuzzle* p0, char* p1, controllers p2);

extern void kuzzle_security_destroy_role(role* p0);

extern profile_result* kuzzle_security_get_profile(kuzzle* p0, char* p1, query_options* p2);

extern string_result* kuzzle_security_get_profile_rights(kuzzle* p0, char* p1, query_options* p2);

extern string_result* kuzzle_security_get_profile_mapping(kuzzle* p0, query_options* p1);

extern role_result* kuzzle_security_get_role(kuzzle* p0, char* p1, query_options* p2);

extern string_result* kuzzle_security_get_role_mapping(kuzzle* p0, query_options* p1);

extern user_result* kuzzle_security_get_user(kuzzle* p0, char* p1, query_options* p2);

extern string_result* kuzzle_security_get_user_rights(kuzzle* p0, char* p1, query_options* p2);

extern string_result* kuzzle_security_get_user_mapping(kuzzle* p0, query_options* p1);

extern string_result* kuzzle_security_get_credential_fields(kuzzle* p0, char* p1, query_options* p2);

extern string_result* kuzzle_security_get_all_credential_fields(kuzzle* p0, query_options* p1);

extern string_result* kuzzle_security_get_credential(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern string_result* kuzzle_security_get_credential_by_id(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern search_profiles_result* kuzzle_security_search_profiles(kuzzle* p0, char* p1, query_options* p2);

extern search_roles_result* kuzzle_security_search_roles(kuzzle* p0, char* p1, query_options* p2);

extern search_users_result* kuzzle_security_search_users(kuzzle* p0, char* p1, query_options* p2);

extern string_result* kuzzle_security_delete_role(kuzzle* p0, char* p1, query_options* p2);

extern string_result* kuzzle_security_delete_profile(kuzzle* p0, char* p1, query_options* p2);

extern string_result* kuzzle_security_delete_user(kuzzle* p0, char* p1, query_options* p2);

extern error_result* kuzzle_security_delete_credentials(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern profile_result* kuzzle_security_create_profile(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern role_result* kuzzle_security_create_role(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern string_result* kuzzle_security_create_user(kuzzle* p0, char* p1, query_options* p2);

extern string_result* kuzzle_security_create_credentials(kuzzle* p0, char* p1, char* p2, char* p3, query_options* p4);

extern string_result* kuzzle_security_create_restricted_user(kuzzle* p0, char* p1, query_options* p2);

extern string_result* kuzzle_security_create_first_admin(kuzzle* p0, char* p1, query_options* p2);

extern profile_result* kuzzle_security_create_or_replace_profile(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern role_result* kuzzle_security_create_or_replace_role(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern bool_result* kuzzle_security_has_credentials(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern user_result* kuzzle_security_replace_user(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern error_result* kuzzle_security_update_credentials(kuzzle* p0, char* p1, char* p2, char* p3, query_options* p4);

extern profile_result* kuzzle_security_update_profile(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern error_result* kuzzle_security_update_profile_mapping(kuzzle* p0, char* p1, query_options* p2);

extern role_result* kuzzle_security_update_role(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern error_result* kuzzle_security_update_role_mapping(kuzzle* p0, char* p1, query_options* p2);

extern user_result* kuzzle_security_update_user(kuzzle* p0, char* p1, char* p2, query_options* p3);

extern error_result* kuzzle_security_update_user_mapping(kuzzle* p0, char* p1, query_options* p2);

extern unsigned int kuzzle_security_is_action_allowed(user_right** p0, unsigned int p1, char* p2, char* p3, char* p4, char* p5);

extern string_array_result* kuzzle_security_mdelete_credentials(kuzzle* p0, char** p1, size_t p2, query_options* p3);

extern string_array_result* kuzzle_security_mdelete_roles(kuzzle* p0, char** p1, size_t p2, query_options* p3);

extern string_array_result* kuzzle_security_mdelete_users(kuzzle* p0, char** p1, size_t p2, query_options* p3);

extern profiles_result* kuzzle_security_mget_profiles(kuzzle* p0, char** p1, size_t p2, query_options* p3);

extern roles_result* kuzzle_security_mget_roles(kuzzle* p0, char** p1, size_t p2, query_options* p3);

// unregister an instance from the instances map

extern void unregisterServer(server* p0);

// Allocates memory

extern void kuzzle_new_server(server* p0, kuzzle* p1);

extern bool_result* kuzzle_admin_exists(server* p0, query_options* p1);

extern string_result* kuzzle_get_all_stats(server* p0, query_options* p1);

extern string_result* kuzzle_get_stats(server* p0, time_t p1, time_t p2, query_options* p3);

extern string_result* kuzzle_get_last_stats(server* p0, query_options* p1);

extern string_result* kuzzle_get_config(server* p0, query_options* p1);

extern string_result* kuzzle_info(server* p0, query_options* p1);

extern date_result* kuzzle_now(server* p0, query_options* p1);

#ifdef __cplusplus
}
#endif
