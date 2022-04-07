/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/metadata.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_TYPE_MATCHER_V3_METADATA_PROTO_UPB_H_
#define ENVOY_TYPE_MATCHER_V3_METADATA_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_type_matcher_v3_MetadataMatcher;
struct envoy_type_matcher_v3_MetadataMatcher_PathSegment;
typedef struct envoy_type_matcher_v3_MetadataMatcher envoy_type_matcher_v3_MetadataMatcher;
typedef struct envoy_type_matcher_v3_MetadataMatcher_PathSegment envoy_type_matcher_v3_MetadataMatcher_PathSegment;
extern const upb_MiniTable envoy_type_matcher_v3_MetadataMatcher_msginit;
extern const upb_MiniTable envoy_type_matcher_v3_MetadataMatcher_PathSegment_msginit;
struct envoy_type_matcher_v3_ValueMatcher;
extern const upb_MiniTable envoy_type_matcher_v3_ValueMatcher_msginit;



/* envoy.type.matcher.v3.MetadataMatcher */

UPB_INLINE envoy_type_matcher_v3_MetadataMatcher* envoy_type_matcher_v3_MetadataMatcher_new(upb_Arena* arena) {
  return (envoy_type_matcher_v3_MetadataMatcher*)_upb_Message_New(&envoy_type_matcher_v3_MetadataMatcher_msginit, arena);
}
UPB_INLINE envoy_type_matcher_v3_MetadataMatcher* envoy_type_matcher_v3_MetadataMatcher_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_type_matcher_v3_MetadataMatcher* ret = envoy_type_matcher_v3_MetadataMatcher_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_type_matcher_v3_MetadataMatcher_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_type_matcher_v3_MetadataMatcher* envoy_type_matcher_v3_MetadataMatcher_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_type_matcher_v3_MetadataMatcher* ret = envoy_type_matcher_v3_MetadataMatcher_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_type_matcher_v3_MetadataMatcher_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_type_matcher_v3_MetadataMatcher_serialize(const envoy_type_matcher_v3_MetadataMatcher* msg, upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_type_matcher_v3_MetadataMatcher_msginit, 0, arena, len);
}
UPB_INLINE char* envoy_type_matcher_v3_MetadataMatcher_serialize_ex(const envoy_type_matcher_v3_MetadataMatcher* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_type_matcher_v3_MetadataMatcher_msginit, options, arena, len);
}
UPB_INLINE void envoy_type_matcher_v3_MetadataMatcher_clear_filter(const envoy_type_matcher_v3_MetadataMatcher* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_StringView) = upb_StringView_FromDataAndSize(NULL, 0);
}
UPB_INLINE upb_StringView envoy_type_matcher_v3_MetadataMatcher_filter(const envoy_type_matcher_v3_MetadataMatcher* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_StringView);
}
UPB_INLINE bool envoy_type_matcher_v3_MetadataMatcher_has_path(const envoy_type_matcher_v3_MetadataMatcher* msg) {
  return _upb_has_submsg_nohasbit(msg, UPB_SIZE(12, 24));
}
UPB_INLINE void envoy_type_matcher_v3_MetadataMatcher_clear_path(const envoy_type_matcher_v3_MetadataMatcher* msg) {
  _upb_array_detach(msg, UPB_SIZE(12, 24));
}
UPB_INLINE const envoy_type_matcher_v3_MetadataMatcher_PathSegment* const* envoy_type_matcher_v3_MetadataMatcher_path(const envoy_type_matcher_v3_MetadataMatcher* msg, size_t* len) {
  return (const envoy_type_matcher_v3_MetadataMatcher_PathSegment* const*)_upb_array_accessor(msg, UPB_SIZE(12, 24), len);
}
UPB_INLINE bool envoy_type_matcher_v3_MetadataMatcher_has_value(const envoy_type_matcher_v3_MetadataMatcher* msg) {
  return _upb_hasbit(msg, 1);
}
UPB_INLINE void envoy_type_matcher_v3_MetadataMatcher_clear_value(const envoy_type_matcher_v3_MetadataMatcher* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32), const upb_Message*) = NULL;
}
UPB_INLINE const struct envoy_type_matcher_v3_ValueMatcher* envoy_type_matcher_v3_MetadataMatcher_value(const envoy_type_matcher_v3_MetadataMatcher* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(16, 32), const struct envoy_type_matcher_v3_ValueMatcher*);
}
UPB_INLINE void envoy_type_matcher_v3_MetadataMatcher_clear_invert(const envoy_type_matcher_v3_MetadataMatcher* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(1, 1), bool) = 0;
}
UPB_INLINE bool envoy_type_matcher_v3_MetadataMatcher_invert(const envoy_type_matcher_v3_MetadataMatcher* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(1, 1), bool);
}

UPB_INLINE void envoy_type_matcher_v3_MetadataMatcher_set_filter(envoy_type_matcher_v3_MetadataMatcher *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_StringView) = value;
}
UPB_INLINE envoy_type_matcher_v3_MetadataMatcher_PathSegment** envoy_type_matcher_v3_MetadataMatcher_mutable_path(envoy_type_matcher_v3_MetadataMatcher* msg, size_t* len) {
  return (envoy_type_matcher_v3_MetadataMatcher_PathSegment**)_upb_array_mutable_accessor(msg, UPB_SIZE(12, 24), len);
}
UPB_INLINE envoy_type_matcher_v3_MetadataMatcher_PathSegment** envoy_type_matcher_v3_MetadataMatcher_resize_path(envoy_type_matcher_v3_MetadataMatcher* msg, size_t len, upb_Arena* arena) {
  return (envoy_type_matcher_v3_MetadataMatcher_PathSegment**)_upb_Array_Resize_accessor2(msg, UPB_SIZE(12, 24), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_type_matcher_v3_MetadataMatcher_PathSegment* envoy_type_matcher_v3_MetadataMatcher_add_path(envoy_type_matcher_v3_MetadataMatcher* msg, upb_Arena* arena) {
  struct envoy_type_matcher_v3_MetadataMatcher_PathSegment* sub = (struct envoy_type_matcher_v3_MetadataMatcher_PathSegment*)_upb_Message_New(&envoy_type_matcher_v3_MetadataMatcher_PathSegment_msginit, arena);
  bool ok = _upb_Array_Append_accessor2(msg, UPB_SIZE(12, 24), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_type_matcher_v3_MetadataMatcher_set_value(envoy_type_matcher_v3_MetadataMatcher *msg, struct envoy_type_matcher_v3_ValueMatcher* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32), struct envoy_type_matcher_v3_ValueMatcher*) = value;
}
UPB_INLINE struct envoy_type_matcher_v3_ValueMatcher* envoy_type_matcher_v3_MetadataMatcher_mutable_value(envoy_type_matcher_v3_MetadataMatcher* msg, upb_Arena* arena) {
  struct envoy_type_matcher_v3_ValueMatcher* sub = (struct envoy_type_matcher_v3_ValueMatcher*)envoy_type_matcher_v3_MetadataMatcher_value(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_matcher_v3_ValueMatcher*)_upb_Message_New(&envoy_type_matcher_v3_ValueMatcher_msginit, arena);
    if (!sub) return NULL;
    envoy_type_matcher_v3_MetadataMatcher_set_value(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_type_matcher_v3_MetadataMatcher_set_invert(envoy_type_matcher_v3_MetadataMatcher *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(1, 1), bool) = value;
}

/* envoy.type.matcher.v3.MetadataMatcher.PathSegment */

UPB_INLINE envoy_type_matcher_v3_MetadataMatcher_PathSegment* envoy_type_matcher_v3_MetadataMatcher_PathSegment_new(upb_Arena* arena) {
  return (envoy_type_matcher_v3_MetadataMatcher_PathSegment*)_upb_Message_New(&envoy_type_matcher_v3_MetadataMatcher_PathSegment_msginit, arena);
}
UPB_INLINE envoy_type_matcher_v3_MetadataMatcher_PathSegment* envoy_type_matcher_v3_MetadataMatcher_PathSegment_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_type_matcher_v3_MetadataMatcher_PathSegment* ret = envoy_type_matcher_v3_MetadataMatcher_PathSegment_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_type_matcher_v3_MetadataMatcher_PathSegment_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_type_matcher_v3_MetadataMatcher_PathSegment* envoy_type_matcher_v3_MetadataMatcher_PathSegment_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_type_matcher_v3_MetadataMatcher_PathSegment* ret = envoy_type_matcher_v3_MetadataMatcher_PathSegment_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_type_matcher_v3_MetadataMatcher_PathSegment_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_type_matcher_v3_MetadataMatcher_PathSegment_serialize(const envoy_type_matcher_v3_MetadataMatcher_PathSegment* msg, upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_type_matcher_v3_MetadataMatcher_PathSegment_msginit, 0, arena, len);
}
UPB_INLINE char* envoy_type_matcher_v3_MetadataMatcher_PathSegment_serialize_ex(const envoy_type_matcher_v3_MetadataMatcher_PathSegment* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_type_matcher_v3_MetadataMatcher_PathSegment_msginit, options, arena, len);
}
typedef enum {
  envoy_type_matcher_v3_MetadataMatcher_PathSegment_segment_key = 1,
  envoy_type_matcher_v3_MetadataMatcher_PathSegment_segment_NOT_SET = 0
} envoy_type_matcher_v3_MetadataMatcher_PathSegment_segment_oneofcases;
UPB_INLINE envoy_type_matcher_v3_MetadataMatcher_PathSegment_segment_oneofcases envoy_type_matcher_v3_MetadataMatcher_PathSegment_segment_case(const envoy_type_matcher_v3_MetadataMatcher_PathSegment* msg) {
  return (envoy_type_matcher_v3_MetadataMatcher_PathSegment_segment_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(0, 0), int32_t);
}
UPB_INLINE bool envoy_type_matcher_v3_MetadataMatcher_PathSegment_has_key(const envoy_type_matcher_v3_MetadataMatcher_PathSegment* msg) {
  return _upb_getoneofcase(msg, UPB_SIZE(0, 0)) == 1;
}
UPB_INLINE void envoy_type_matcher_v3_MetadataMatcher_PathSegment_clear_key(const envoy_type_matcher_v3_MetadataMatcher_PathSegment* msg) {
  UPB_WRITE_ONEOF(msg, upb_StringView, UPB_SIZE(4, 8), upb_StringView_FromDataAndSize(NULL, 0), UPB_SIZE(0, 0), envoy_type_matcher_v3_MetadataMatcher_PathSegment_segment_NOT_SET);
}
UPB_INLINE upb_StringView envoy_type_matcher_v3_MetadataMatcher_PathSegment_key(const envoy_type_matcher_v3_MetadataMatcher_PathSegment* msg) {
  return UPB_READ_ONEOF(msg, upb_StringView, UPB_SIZE(4, 8), UPB_SIZE(0, 0), 1, upb_StringView_FromString(""));
}

UPB_INLINE void envoy_type_matcher_v3_MetadataMatcher_PathSegment_set_key(envoy_type_matcher_v3_MetadataMatcher_PathSegment *msg, upb_StringView value) {
  UPB_WRITE_ONEOF(msg, upb_StringView, UPB_SIZE(4, 8), value, UPB_SIZE(0, 0), 1);
}

extern const upb_MiniTable_File envoy_type_matcher_v3_metadata_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_TYPE_MATCHER_V3_METADATA_PROTO_UPB_H_ */
