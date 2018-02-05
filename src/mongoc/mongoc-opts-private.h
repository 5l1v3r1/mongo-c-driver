#ifndef MONGOC_OPTS_H
#define MONGOC_OPTS_H

#include <bson.h>

#include "mongoc-client-session.h"
#include "mongoc-bulk-operation-private.h"

/**************************************************
 *
 * Generated by build/generate-opts.py.
 *
 * DO NOT EDIT THIS FILE.
 *
 *************************************************/
/* clang-format off */

typedef struct _mongoc_find_one_opts_t {
   bson_t projection;
   bson_t sort;
   int64_t skip;
   int64_t limit;
   int64_t batchSize;
   bool exhaust;
   bson_value_t hint;
   bool allowPartialResults;
   bool awaitData;
   bson_t collation;
   const char *comment;
   bson_t max;
   int64_t maxScan;
   int64_t maxTimeMS;
   int64_t maxAwaitTimeMS;
   bson_t min;
   bool noCursorTimeout;
   bool oplogReplay;
   bool returnKey;
   bool showRecordId;
   bool singleBatch;
   bool snapshot;
   bool tailable;
   bson_t extra;
} mongoc_find_one_opts_t;

typedef struct _mongoc_crud_opts_t {
   mongoc_write_concern_t *writeConcern;
   bool write_concern_owned;
   mongoc_client_session_t *client_session;
   bson_validate_flags_t validate;
} mongoc_crud_opts_t;

typedef struct _mongoc_update_opts_t {
   mongoc_crud_opts_t crud;
   mongoc_write_bypass_document_validation_t bypass;
   bson_t collation;
   bool upsert;
} mongoc_update_opts_t;

typedef struct _mongoc_insert_one_opts_t {
   mongoc_crud_opts_t crud;
   mongoc_write_bypass_document_validation_t bypass;
   bson_t extra;
} mongoc_insert_one_opts_t;

typedef struct _mongoc_insert_many_opts_t {
   mongoc_crud_opts_t crud;
   bool ordered;
   mongoc_write_bypass_document_validation_t bypass;
   bson_t extra;
} mongoc_insert_many_opts_t;

typedef struct _mongoc_delete_one_opts_t {
   mongoc_crud_opts_t crud;
   mongoc_write_bypass_document_validation_t bypass;
   bson_t collation;
   bson_t extra;
} mongoc_delete_one_opts_t;

typedef struct _mongoc_delete_many_opts_t {
   mongoc_crud_opts_t crud;
   bson_t collation;
   bson_t extra;
} mongoc_delete_many_opts_t;

typedef struct _mongoc_update_one_opts_t {
   mongoc_update_opts_t update;
   bson_t arrayFilters;
   bson_t extra;
} mongoc_update_one_opts_t;

typedef struct _mongoc_update_many_opts_t {
   mongoc_update_opts_t update;
   bson_t arrayFilters;
   bson_t extra;
} mongoc_update_many_opts_t;

typedef struct _mongoc_replace_one_opts_t {
   mongoc_update_opts_t update;
   bson_t extra;
} mongoc_replace_one_opts_t;

typedef struct _mongoc_bulk_opts_t {
   mongoc_write_concern_t *writeConcern;
   bool write_concern_owned;
   bool ordered;
   mongoc_client_session_t *client_session;
   bson_t extra;
} mongoc_bulk_opts_t;

typedef struct _mongoc_bulk_insert_opts_t {
   bson_validate_flags_t validate;
   mongoc_write_bypass_document_validation_t bypass;
   bson_t extra;
} mongoc_bulk_insert_opts_t;

typedef struct _mongoc_bulk_update_opts_t {
   bson_validate_flags_t validate;
   mongoc_write_bypass_document_validation_t bypass;
   bson_t collation;
   bool upsert;
   bool multi;
} mongoc_bulk_update_opts_t;

typedef struct _mongoc_bulk_update_one_opts_t {
   mongoc_bulk_update_opts_t update;
   bson_t extra;
} mongoc_bulk_update_one_opts_t;

typedef struct _mongoc_bulk_update_many_opts_t {
   mongoc_bulk_update_opts_t update;
   bson_t extra;
} mongoc_bulk_update_many_opts_t;

typedef struct _mongoc_bulk_replace_one_opts_t {
   mongoc_bulk_update_opts_t update;
   bson_t extra;
} mongoc_bulk_replace_one_opts_t;

typedef struct _mongoc_bulk_remove_opts_t {
   bson_t collation;
   int32_t limit;
} mongoc_bulk_remove_opts_t;

typedef struct _mongoc_bulk_remove_one_opts_t {
   mongoc_bulk_remove_opts_t remove;
   bson_t extra;
} mongoc_bulk_remove_one_opts_t;

typedef struct _mongoc_bulk_remove_many_opts_t {
   mongoc_bulk_remove_opts_t remove;
   bson_t extra;
} mongoc_bulk_remove_many_opts_t;

typedef struct _mongoc_create_index_opts_t {
   mongoc_write_concern_t *writeConcern;
   bool write_concern_owned;
   mongoc_client_session_t *client_session;
   bson_t extra;
} mongoc_create_index_opts_t;

typedef struct _mongoc_read_write_opts_t {
   bson_t readConcern;
   mongoc_write_concern_t *writeConcern;
   bool write_concern_owned;
   mongoc_client_session_t *client_session;
   bson_t collation;
   uint32_t serverId;
   bson_t extra;
} mongoc_read_write_opts_t;

bool
_mongoc_find_one_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_find_one_opts_t *mongoc_find_one_opts,
   bson_error_t *error);

void
_mongoc_find_one_opts_cleanup (mongoc_find_one_opts_t *mongoc_find_one_opts);

bool
_mongoc_insert_one_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_insert_one_opts_t *mongoc_insert_one_opts,
   bson_error_t *error);

void
_mongoc_insert_one_opts_cleanup (mongoc_insert_one_opts_t *mongoc_insert_one_opts);

bool
_mongoc_insert_many_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_insert_many_opts_t *mongoc_insert_many_opts,
   bson_error_t *error);

void
_mongoc_insert_many_opts_cleanup (mongoc_insert_many_opts_t *mongoc_insert_many_opts);

bool
_mongoc_delete_one_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_delete_one_opts_t *mongoc_delete_one_opts,
   bson_error_t *error);

void
_mongoc_delete_one_opts_cleanup (mongoc_delete_one_opts_t *mongoc_delete_one_opts);

bool
_mongoc_delete_many_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_delete_many_opts_t *mongoc_delete_many_opts,
   bson_error_t *error);

void
_mongoc_delete_many_opts_cleanup (mongoc_delete_many_opts_t *mongoc_delete_many_opts);

bool
_mongoc_update_one_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_update_one_opts_t *mongoc_update_one_opts,
   bson_error_t *error);

void
_mongoc_update_one_opts_cleanup (mongoc_update_one_opts_t *mongoc_update_one_opts);

bool
_mongoc_update_many_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_update_many_opts_t *mongoc_update_many_opts,
   bson_error_t *error);

void
_mongoc_update_many_opts_cleanup (mongoc_update_many_opts_t *mongoc_update_many_opts);

bool
_mongoc_replace_one_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_replace_one_opts_t *mongoc_replace_one_opts,
   bson_error_t *error);

void
_mongoc_replace_one_opts_cleanup (mongoc_replace_one_opts_t *mongoc_replace_one_opts);

bool
_mongoc_bulk_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_bulk_opts_t *mongoc_bulk_opts,
   bson_error_t *error);

void
_mongoc_bulk_opts_cleanup (mongoc_bulk_opts_t *mongoc_bulk_opts);

bool
_mongoc_bulk_insert_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_bulk_insert_opts_t *mongoc_bulk_insert_opts,
   bson_error_t *error);

void
_mongoc_bulk_insert_opts_cleanup (mongoc_bulk_insert_opts_t *mongoc_bulk_insert_opts);

bool
_mongoc_bulk_update_one_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_bulk_update_one_opts_t *mongoc_bulk_update_one_opts,
   bson_error_t *error);

void
_mongoc_bulk_update_one_opts_cleanup (mongoc_bulk_update_one_opts_t *mongoc_bulk_update_one_opts);

bool
_mongoc_bulk_update_many_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_bulk_update_many_opts_t *mongoc_bulk_update_many_opts,
   bson_error_t *error);

void
_mongoc_bulk_update_many_opts_cleanup (mongoc_bulk_update_many_opts_t *mongoc_bulk_update_many_opts);

bool
_mongoc_bulk_replace_one_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_bulk_replace_one_opts_t *mongoc_bulk_replace_one_opts,
   bson_error_t *error);

void
_mongoc_bulk_replace_one_opts_cleanup (mongoc_bulk_replace_one_opts_t *mongoc_bulk_replace_one_opts);

bool
_mongoc_bulk_remove_one_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_bulk_remove_one_opts_t *mongoc_bulk_remove_one_opts,
   bson_error_t *error);

void
_mongoc_bulk_remove_one_opts_cleanup (mongoc_bulk_remove_one_opts_t *mongoc_bulk_remove_one_opts);

bool
_mongoc_bulk_remove_many_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_bulk_remove_many_opts_t *mongoc_bulk_remove_many_opts,
   bson_error_t *error);

void
_mongoc_bulk_remove_many_opts_cleanup (mongoc_bulk_remove_many_opts_t *mongoc_bulk_remove_many_opts);

bool
_mongoc_create_index_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_create_index_opts_t *mongoc_create_index_opts,
   bson_error_t *error);

void
_mongoc_create_index_opts_cleanup (mongoc_create_index_opts_t *mongoc_create_index_opts);

bool
_mongoc_read_write_opts_parse (
   mongoc_client_t *client,
   const bson_t *opts,
   mongoc_read_write_opts_t *mongoc_read_write_opts,
   bson_error_t *error);

void
_mongoc_read_write_opts_cleanup (mongoc_read_write_opts_t *mongoc_read_write_opts);

#endif /* MONGOC_OPTS_H */
