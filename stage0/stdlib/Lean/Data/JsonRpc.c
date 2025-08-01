// Lean compiler output
// Module: Lean.Data.JsonRpc
// Imports: Init.System.IO Lean.Data.Json.Stream Lean.Data.Json.FromToJson.Basic
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
LEAN_EXPORT uint8_t l_Lean_JsonRpc_RequestID_lt(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_136_(lean_object*, lean_object*);
static lean_object* l_IO_FS_Stream_readResponseAs___redArg___closed__0;
LEAN_EXPORT lean_object* l_IO_FS_Stream_readRequestAs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_1252_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instInhabitedRequestID;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1474____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__22;
lean_object* l_Lean_Json_compress(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqRequest(lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1721____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_toString(lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeStringRequestID;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ErrorCode_noConfusion___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonMessage;
lean_object* l_Lean_Json_mkObj(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeResponseError(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__21;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instInhabitedResponse(lean_object*, lean_object*);
static lean_object* l_IO_FS_Stream_readMessage___closed__1;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instToJsonMessage___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instDecidableLtRequestID___boxed(lean_object*, lean_object*);
static lean_object* l_IO_FS_Stream_readRequestAs___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instOfNatRequestID(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_readRequestAs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeResponseErrorWithData___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_1010____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__36;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonErrorCode;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_RequestID_lt___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__15;
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__12;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_IO_FS_Stream_readResponseAs___redArg___closed__2;
LEAN_EXPORT uint8_t l_Lean_JsonRpc_instInhabitedErrorCode;
static lean_object* l_Lean_JsonRpc_instFromJsonMessage___closed__2;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ErrorCode_noConfusion___redArg(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ErrorCode_noConfusion___redArg___lam__0___boxed(lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__16;
LEAN_EXPORT lean_object* l_IO_FS_Stream_readResponseAs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqResponse___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqResponseError___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instInhabitedRequest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutNotificationMessageOfToJson___redArg(lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__23;
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqResponse___redArg____x40_Lean_Data_JsonRpc___hyg_1474_(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__23;
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__27;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instToJsonRequestID;
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_46_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqNotification(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_1010_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instToJsonRequestID___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_1252____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjVal_x3f(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
static lean_object* l_IO_FS_Stream_readRequestAs___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instToJsonErrorCode;
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1721_(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__14;
static lean_object* l_Lean_JsonRpc_instFromJsonMessage___lam__0___closed__1;
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutNotificationMessageOfToJson(lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instInhabitedMessage___closed__0;
static lean_object* l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__11;
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__4;
static lean_object* l_IO_FS_Stream_readResponseAs___redArg___closed__1;
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeNotification___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__10;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instLTRequestID;
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__12;
static lean_object* l_IO_FS_Stream_readResponseAs___redArg___closed__3;
lean_object* l_Lean_JsonNumber_fromInt(lean_object*);
lean_object* l_IO_FS_Stream_readJson(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__10;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_Request_ofMessage_x3f(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__0;
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__30;
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__6;
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__19;
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqRequest___redArg____x40_Lean_Data_JsonRpc___hyg_1010_(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__34;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqRequestID;
static lean_object* l_Lean_JsonRpc_instBEqRequestID___closed__0;
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__24;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__22;
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__3;
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_46____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeStringRequestID___lam__0(lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__33;
LEAN_EXPORT lean_object* l_IO_FS_Stream_readResponseAs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__0(lean_object*, lean_object*);
static lean_object* l_IO_FS_Stream_readRequestAs___redArg___closed__3;
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__18;
static lean_object* l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_RequestID_ltProp;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutRequestMessageOfToJson___redArg(lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__1;
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeRequest___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_readNotificationAs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__6;
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__8;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ErrorCode_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instInhabitedRequest___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instInhabitedMessage;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutNotificationMessageOfToJson___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqResponseError___redArg____x40_Lean_Data_JsonRpc___hyg_1721____boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_IO_FS_Stream_readMessage___closed__0;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutResponseErrorMessageOfToJson(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonNotification___redArg(lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__25;
static lean_object* l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__1;
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__21;
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__19;
static lean_object* l_IO_FS_Stream_readRequestAs___redArg___closed__6;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutResponseErrorMessageOfToJson___redArg___lam__0(lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instBEqErrorCode___closed__0;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__1;
static lean_object* l_IO_FS_Stream_readNotificationAs___redArg___closed__0;
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__26;
static lean_object* l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutResponseMessageOfToJson(lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__10;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instOrdRequestID;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instToStringRequestID___lam__0(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instToJsonMessage;
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__17;
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__2;
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__11;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ErrorCode_noConfusion___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutResponseErrorMessageOfToJson___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__3(lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__29;
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__20;
LEAN_EXPORT lean_object* l_IO_FS_Stream_readNotificationAs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonMessage___closed__0;
static lean_object* l_Lean_JsonRpc_instInhabitedRequestID___closed__0;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonRequestID___lam__0(lean_object*);
static lean_object* l_Lean_JsonRpc_instOrdRequestID___closed__0;
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeResponse___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutResponseMessageOfToJson___redArg(lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__0;
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__15;
lean_object* l_Lean_Json_Structured_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___IO_FS_Stream_writeMessage_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ResponseError_ofMessage_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqNotification___redArg____x40_Lean_Data_JsonRpc___hyg_1252____boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_decEqJsonNumber____x40_Lean_Data_Json_Basic___hyg_29_(lean_object*, lean_object*);
lean_object* l_Option_toJson___redArg(lean_object*, lean_object*);
static lean_object* l_IO_FS_Stream_readRequestAs___redArg___closed__2;
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__0;
LEAN_EXPORT lean_object* l_IO_FS_Stream_readMessage(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__17;
LEAN_EXPORT lean_object* l_IO_FS_Stream_readResponseAs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__18;
LEAN_EXPORT lean_object* l_IO_FS_Stream_readNotificationAs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instInhabitedResponseError(lean_object*);
static lean_object* l_IO_FS_Stream_readRequestAs___redArg___closed__5;
static lean_object* l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___IO_FS_Stream_writeMessage_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutRequestMessageOfToJson(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeJsonNumberRequestID___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeResponseErrorWithData(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_341____boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_JsonRpc_instDecidableLtRequestID(lean_object*, lean_object*);
lean_object* l_Lean_Json_opt___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonMessage___closed__3;
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instInhabitedNotification(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqRequest___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0(uint8_t);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__28;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqErrorCode;
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeRequest(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__13;
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__0;
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_341_(uint8_t, uint8_t);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__35;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutResponseErrorUnitMessage___lam__0(lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__9;
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__20;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqResponse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ErrorCode_noConfusion___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
static lean_object* l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__8;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqNotification___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instInhabitedResponse___redArg(lean_object*);
lean_object* l_Lean_Json_toStructured_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instInhabitedRequestID___closed__1;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonMessage___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqRequest___redArg____x40_Lean_Data_JsonRpc___hyg_1010____boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__11;
LEAN_EXPORT lean_object* l_IO_FS_Stream_readNotificationAs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_readRequestAs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__37;
static lean_object* l_Lean_JsonRpc_instToJsonMessage___closed__1;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutResponseMessageOfToJson___redArg___lam__0(lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__14;
lean_object* l_Lean_Json_Structured_fromJson_x3f(lean_object*);
static lean_object* l_IO_FS_Stream_readRequestAs___redArg___closed__0;
static lean_object* l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonNotification(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutResponseErrorUnitMessage;
lean_object* l_IO_FS_Stream_writeJson(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__9;
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__16;
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__31;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_136____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonRequestID;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutRequestMessageOfToJson___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__2___boxed(lean_object*, lean_object*);
uint8_t l_Option_beqOption___redArg____x40_Init_Data_Option_Basic___hyg_161_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_readRequestAs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___IO_FS_Stream_writeMessage_spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__8;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__2(lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__2;
uint8_t l_Lean_JsonNumber_lt(lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__13;
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1474_(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__9;
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeResponse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__0;
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_readResponseAs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonRequestID___lam__0___closed__1;
static lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__2;
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqResponseError___redArg____x40_Lean_Data_JsonRpc___hyg_1721_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqNotification___redArg____x40_Lean_Data_JsonRpc___hyg_1252_(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ErrorCode_noConfusion(lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* lean_int_neg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqResponse___redArg____x40_Lean_Data_JsonRpc___hyg_1474____boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__1;
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeNotification(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_Notification_ofMessage_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instInhabitedNotification___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_readMessage___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_Response_ofMessage_x3f(lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__32;
static lean_object* l_Lean_JsonRpc_instInhabitedResponseError___closed__0;
static lean_object* l_Lean_JsonRpc_instFromJsonMessage___lam__0___closed__0;
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeMessage(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instToStringRequestID;
static lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ErrorCode_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqResponseError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_toJson___at___Lean_JsonRpc_Request_ofMessage_x3f_spec__0(lean_object*);
static lean_object* l_Lean_JsonRpc_instFromJsonRequestID___lam__0___closed__0;
static lean_object* l_Lean_JsonRpc_instFromJsonMessage___closed__0;
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeJsonNumberRequestID;
static lean_object* l_Lean_JsonRpc_instFromJsonMessage___closed__1;
static lean_object* _init_l_Lean_JsonRpc_instInhabitedRequestID___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instInhabitedRequestID___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instInhabitedRequestID___closed__0;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instInhabitedRequestID() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_JsonRpc_instInhabitedRequestID___closed__1;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_46_(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_string_dec_eq(x_3, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
case 1:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_2, 0);
x_9 = l_Lean_decEqJsonNumber____x40_Lean_Data_Json_Basic___hyg_29_(x_7, x_8);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
default: 
{
if (lean_obj_tag(x_2) == 2)
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_46____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_46_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_JsonRpc_instBEqRequestID___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_46____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instBEqRequestID() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_JsonRpc_instBEqRequestID___closed__0;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_136_(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_3);
lean_dec_ref(x_1);
x_4 = lean_ctor_get(x_2, 0);
lean_inc_ref(x_4);
lean_dec_ref(x_2);
x_5 = lean_string_dec_lt(x_3, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = lean_string_dec_eq(x_3, x_4);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 2;
return x_7;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
else
{
uint8_t x_9; 
lean_dec_ref(x_4);
lean_dec_ref(x_3);
x_9 = 0;
return x_9;
}
}
else
{
uint8_t x_10; 
lean_dec(x_2);
lean_dec_ref(x_1);
x_10 = 0;
return x_10;
}
}
case 1:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
uint8_t x_11; 
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_11 = 2;
return x_11;
}
case 1:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_12);
lean_dec_ref(x_1);
x_13 = lean_ctor_get(x_2, 0);
lean_inc_ref(x_13);
lean_dec_ref(x_2);
lean_inc_ref(x_13);
lean_inc_ref(x_12);
x_14 = l_Lean_JsonNumber_lt(x_12, x_13);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = l_Lean_JsonNumber_lt(x_13, x_12);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = 1;
return x_16;
}
else
{
uint8_t x_17; 
x_17 = 2;
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec_ref(x_13);
lean_dec_ref(x_12);
x_18 = 0;
return x_18;
}
}
default: 
{
uint8_t x_19; 
lean_dec_ref(x_1);
x_19 = 0;
return x_19;
}
}
}
default: 
{
if (lean_obj_tag(x_2) == 2)
{
uint8_t x_20; 
x_20 = 1;
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_2);
x_21 = 2;
return x_21;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_136____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_136_(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_JsonRpc_instOrdRequestID___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_136____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instOrdRequestID() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_JsonRpc_instOrdRequestID___closed__0;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instOfNatRequestID(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_JsonNumber_fromNat(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\"", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instToStringRequestID___lam__0(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_2);
lean_dec_ref(x_1);
x_3 = l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__0;
x_4 = lean_string_append(x_3, x_2);
lean_dec_ref(x_2);
x_5 = lean_string_append(x_4, x_3);
return x_5;
}
case 1:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_6);
lean_dec_ref(x_1);
x_7 = l_Lean_JsonNumber_toString(x_6);
return x_7;
}
default: 
{
lean_object* x_8; 
x_8 = l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__1;
return x_8;
}
}
}
}
static lean_object* _init_l_Lean_JsonRpc_instToStringRequestID() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instToStringRequestID___lam__0), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ErrorCode_toCtorIdx(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(1u);
return x_3;
}
case 2:
{
lean_object* x_4; 
x_4 = lean_unsigned_to_nat(2u);
return x_4;
}
case 3:
{
lean_object* x_5; 
x_5 = lean_unsigned_to_nat(3u);
return x_5;
}
case 4:
{
lean_object* x_6; 
x_6 = lean_unsigned_to_nat(4u);
return x_6;
}
case 5:
{
lean_object* x_7; 
x_7 = lean_unsigned_to_nat(5u);
return x_7;
}
case 6:
{
lean_object* x_8; 
x_8 = lean_unsigned_to_nat(6u);
return x_8;
}
case 7:
{
lean_object* x_9; 
x_9 = lean_unsigned_to_nat(7u);
return x_9;
}
case 8:
{
lean_object* x_10; 
x_10 = lean_unsigned_to_nat(8u);
return x_10;
}
case 9:
{
lean_object* x_11; 
x_11 = lean_unsigned_to_nat(9u);
return x_11;
}
case 10:
{
lean_object* x_12; 
x_12 = lean_unsigned_to_nat(10u);
return x_12;
}
default: 
{
lean_object* x_13; 
x_13 = lean_unsigned_to_nat(11u);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ErrorCode_toCtorIdx___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
x_3 = l_Lean_JsonRpc_ErrorCode_toCtorIdx(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ErrorCode_noConfusion___redArg___lam__0(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ErrorCode_noConfusion___redArg(uint8_t x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_JsonRpc_ErrorCode_noConfusion___redArg___lam__0___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ErrorCode_noConfusion(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_JsonRpc_ErrorCode_noConfusion___redArg(x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ErrorCode_noConfusion___redArg___lam__0___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_JsonRpc_ErrorCode_noConfusion___redArg___lam__0(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ErrorCode_noConfusion___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
x_4 = lean_unbox(x_2);
x_5 = l_Lean_JsonRpc_ErrorCode_noConfusion___redArg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ErrorCode_noConfusion___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox(x_2);
x_6 = lean_unbox(x_3);
x_7 = l_Lean_JsonRpc_ErrorCode_noConfusion(x_1, x_5, x_6, x_4);
return x_7;
}
}
static uint8_t _init_l_Lean_JsonRpc_instInhabitedErrorCode() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_341_(uint8_t x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_JsonRpc_ErrorCode_toCtorIdx(x_1);
x_4 = l_Lean_JsonRpc_ErrorCode_toCtorIdx(x_2);
x_5 = lean_nat_dec_eq(x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_341____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
x_4 = lean_unbox(x_2);
x_5 = l_Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_341_(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_JsonRpc_instBEqErrorCode___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_341____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instBEqErrorCode() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_JsonRpc_instBEqErrorCode___closed__0;
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("expected error code", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__0;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32700u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__2;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32600u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__4;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32601u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__6;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32602u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__8;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32603u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__10;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32002u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__12;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32001u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__14;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32801u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__16;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32800u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__18;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32900u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__20;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32901u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__22;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32902u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__24;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__26() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 11;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__27() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 10;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__28() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 9;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__29() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 8;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__30() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 7;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__31() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 6;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__32() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 5;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__33() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 4;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__34() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 3;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__35() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 2;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__36() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__37() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 0;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_4, 1);
x_7 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__3;
x_8 = lean_int_dec_eq(x_5, x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__5;
x_10 = lean_int_dec_eq(x_5, x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__7;
x_12 = lean_int_dec_eq(x_5, x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__9;
x_14 = lean_int_dec_eq(x_5, x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__11;
x_16 = lean_int_dec_eq(x_5, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__13;
x_18 = lean_int_dec_eq(x_5, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__15;
x_20 = lean_int_dec_eq(x_5, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__17;
x_22 = lean_int_dec_eq(x_5, x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__19;
x_24 = lean_int_dec_eq(x_5, x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__21;
x_26 = lean_int_dec_eq(x_5, x_25);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__23;
x_28 = lean_int_dec_eq(x_5, x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__25;
x_30 = lean_int_dec_eq(x_5, x_29);
if (x_30 == 0)
{
goto block_3;
}
else
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_unsigned_to_nat(0u);
x_32 = lean_nat_dec_eq(x_6, x_31);
if (x_32 == 0)
{
goto block_3;
}
else
{
lean_object* x_33; 
x_33 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__26;
return x_33;
}
}
}
else
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_unsigned_to_nat(0u);
x_35 = lean_nat_dec_eq(x_6, x_34);
if (x_35 == 0)
{
goto block_3;
}
else
{
lean_object* x_36; 
x_36 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__27;
return x_36;
}
}
}
else
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_unsigned_to_nat(0u);
x_38 = lean_nat_dec_eq(x_6, x_37);
if (x_38 == 0)
{
goto block_3;
}
else
{
lean_object* x_39; 
x_39 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__28;
return x_39;
}
}
}
else
{
lean_object* x_40; uint8_t x_41; 
x_40 = lean_unsigned_to_nat(0u);
x_41 = lean_nat_dec_eq(x_6, x_40);
if (x_41 == 0)
{
goto block_3;
}
else
{
lean_object* x_42; 
x_42 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__29;
return x_42;
}
}
}
else
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_unsigned_to_nat(0u);
x_44 = lean_nat_dec_eq(x_6, x_43);
if (x_44 == 0)
{
goto block_3;
}
else
{
lean_object* x_45; 
x_45 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__30;
return x_45;
}
}
}
else
{
lean_object* x_46; uint8_t x_47; 
x_46 = lean_unsigned_to_nat(0u);
x_47 = lean_nat_dec_eq(x_6, x_46);
if (x_47 == 0)
{
goto block_3;
}
else
{
lean_object* x_48; 
x_48 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__31;
return x_48;
}
}
}
else
{
lean_object* x_49; uint8_t x_50; 
x_49 = lean_unsigned_to_nat(0u);
x_50 = lean_nat_dec_eq(x_6, x_49);
if (x_50 == 0)
{
goto block_3;
}
else
{
lean_object* x_51; 
x_51 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__32;
return x_51;
}
}
}
else
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_unsigned_to_nat(0u);
x_53 = lean_nat_dec_eq(x_6, x_52);
if (x_53 == 0)
{
goto block_3;
}
else
{
lean_object* x_54; 
x_54 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__33;
return x_54;
}
}
}
else
{
lean_object* x_55; uint8_t x_56; 
x_55 = lean_unsigned_to_nat(0u);
x_56 = lean_nat_dec_eq(x_6, x_55);
if (x_56 == 0)
{
goto block_3;
}
else
{
lean_object* x_57; 
x_57 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__34;
return x_57;
}
}
}
else
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_unsigned_to_nat(0u);
x_59 = lean_nat_dec_eq(x_6, x_58);
if (x_59 == 0)
{
goto block_3;
}
else
{
lean_object* x_60; 
x_60 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__35;
return x_60;
}
}
}
else
{
lean_object* x_61; uint8_t x_62; 
x_61 = lean_unsigned_to_nat(0u);
x_62 = lean_nat_dec_eq(x_6, x_61);
if (x_62 == 0)
{
goto block_3;
}
else
{
lean_object* x_63; 
x_63 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__36;
return x_63;
}
}
}
else
{
lean_object* x_64; uint8_t x_65; 
x_64 = lean_unsigned_to_nat(0u);
x_65 = lean_nat_dec_eq(x_6, x_64);
if (x_65 == 0)
{
goto block_3;
}
else
{
lean_object* x_66; 
x_66 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__37;
return x_66;
}
}
}
else
{
goto block_3;
}
block_3:
{
lean_object* x_2; 
x_2 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__1;
return x_2;
}
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonErrorCode() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__3;
x_2 = l_Lean_JsonNumber_fromInt(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__0;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__5;
x_2 = l_Lean_JsonNumber_fromInt(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__2;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__7;
x_2 = l_Lean_JsonNumber_fromInt(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__9;
x_2 = l_Lean_JsonNumber_fromInt(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__6;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__11;
x_2 = l_Lean_JsonNumber_fromInt(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__8;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__13;
x_2 = l_Lean_JsonNumber_fromInt(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__10;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__15;
x_2 = l_Lean_JsonNumber_fromInt(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__12;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__17;
x_2 = l_Lean_JsonNumber_fromInt(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__14;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__19;
x_2 = l_Lean_JsonNumber_fromInt(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__16;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__21;
x_2 = l_Lean_JsonNumber_fromInt(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__18;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__23;
x_2 = l_Lean_JsonNumber_fromInt(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__20;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__25;
x_2 = l_Lean_JsonNumber_fromInt(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__22;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; 
x_2 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__1;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__3;
return x_3;
}
case 2:
{
lean_object* x_4; 
x_4 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__5;
return x_4;
}
case 3:
{
lean_object* x_5; 
x_5 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__7;
return x_5;
}
case 4:
{
lean_object* x_6; 
x_6 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__9;
return x_6;
}
case 5:
{
lean_object* x_7; 
x_7 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__11;
return x_7;
}
case 6:
{
lean_object* x_8; 
x_8 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__13;
return x_8;
}
case 7:
{
lean_object* x_9; 
x_9 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__15;
return x_9;
}
case 8:
{
lean_object* x_10; 
x_10 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__17;
return x_10;
}
case 9:
{
lean_object* x_11; 
x_11 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__19;
return x_11;
}
case 10:
{
lean_object* x_12; 
x_12 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__21;
return x_12;
}
default: 
{
lean_object* x_13; 
x_13 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__23;
return x_13;
}
}
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonErrorCode() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instToJsonErrorCode___lam__0___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
x_3 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_JsonRpc_instInhabitedMessage___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_Lean_JsonRpc_instInhabitedRequestID___closed__0;
x_3 = l_Lean_JsonRpc_instInhabitedRequestID___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_JsonRpc_instInhabitedMessage() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_JsonRpc_instInhabitedMessage___closed__0;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instInhabitedRequest___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_JsonRpc_instInhabitedRequestID___closed__0;
x_3 = l_Lean_JsonRpc_instInhabitedRequestID___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instInhabitedRequest(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_JsonRpc_instInhabitedRequest___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqRequest___redArg____x40_Lean_Data_JsonRpc___hyg_1010_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc_ref(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_dec_ref(x_2);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 1);
lean_inc_ref(x_8);
x_9 = lean_ctor_get(x_3, 2);
lean_inc(x_9);
lean_dec_ref(x_3);
x_10 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_46_(x_4, x_7);
lean_dec(x_7);
lean_dec(x_4);
if (x_10 == 0)
{
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_1);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = lean_string_dec_eq(x_5, x_8);
lean_dec_ref(x_8);
lean_dec_ref(x_5);
if (x_11 == 0)
{
lean_dec(x_9);
lean_dec(x_6);
lean_dec_ref(x_1);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_apply_2(x_1, x_6, x_9);
x_13 = lean_unbox(x_12);
return x_13;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_1010_(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_JsonRpc_beqRequest___redArg____x40_Lean_Data_JsonRpc___hyg_1010_(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqRequest___redArg____x40_Lean_Data_JsonRpc___hyg_1010____boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Lean_JsonRpc_beqRequest___redArg____x40_Lean_Data_JsonRpc___hyg_1010_(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_1010____boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_1010_(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqRequest___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_1010____boxed), 4, 2);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqRequest(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_1010____boxed), 4, 2);
lean_closure_set(x_3, 0, lean_box(0));
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutRequestMessageOfToJson___redArg___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 2);
x_5 = l_Lean_Json_toStructured_x3f___redArg(x_1, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec_ref(x_5);
x_6 = lean_box(0);
lean_ctor_set(x_2, 2, x_6);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_ctor_set(x_2, 2, x_5);
return x_2;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_2, 2, x_9);
return x_2;
}
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_13 = l_Lean_Json_toStructured_x3f___redArg(x_1, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec_ref(x_13);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 x_17 = x_13;
} else {
 lean_dec_ref(x_13);
 x_17 = lean_box(0);
}
if (lean_is_scalar(x_17)) {
 x_18 = lean_alloc_ctor(1, 1, 0);
} else {
 x_18 = x_17;
}
lean_ctor_set(x_18, 0, x_16);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_10);
lean_ctor_set(x_19, 1, x_11);
lean_ctor_set(x_19, 2, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutRequestMessageOfToJson___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instCoeOutRequestMessageOfToJson___redArg___lam__0), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutRequestMessageOfToJson(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_JsonRpc_instCoeOutRequestMessageOfToJson___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Option_toJson___at___Lean_JsonRpc_Request_ofMessage_x3f_spec__0(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec_ref(x_1);
x_4 = l_Lean_Json_Structured_toJson(x_3);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_Request_ofMessage_x3f(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 2);
x_4 = l_Option_toJson___at___Lean_JsonRpc_Request_ofMessage_x3f_spec__0(x_3);
lean_ctor_set(x_1, 2, x_4);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_1);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_9 = l_Option_toJson___at___Lean_JsonRpc_Request_ofMessage_x3f_spec__0(x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set(x_10, 2, x_9);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
else
{
lean_object* x_12; 
lean_dec_ref(x_1);
x_12 = lean_box(0);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instInhabitedNotification___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_JsonRpc_instInhabitedRequestID___closed__0;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instInhabitedNotification(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_JsonRpc_instInhabitedNotification___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqNotification___redArg____x40_Lean_Data_JsonRpc___hyg_1252_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc_ref(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec_ref(x_2);
x_6 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec_ref(x_3);
x_8 = lean_string_dec_eq(x_4, x_6);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
if (x_8 == 0)
{
lean_dec(x_7);
lean_dec(x_5);
lean_dec_ref(x_1);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_apply_2(x_1, x_5, x_7);
x_10 = lean_unbox(x_9);
return x_10;
}
}
}
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_1252_(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_JsonRpc_beqNotification___redArg____x40_Lean_Data_JsonRpc___hyg_1252_(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqNotification___redArg____x40_Lean_Data_JsonRpc___hyg_1252____boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Lean_JsonRpc_beqNotification___redArg____x40_Lean_Data_JsonRpc___hyg_1252_(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_1252____boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_1252_(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqNotification___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_1252____boxed), 4, 2);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqNotification(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_1252____boxed), 4, 2);
lean_closure_set(x_3, 0, lean_box(0));
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutNotificationMessageOfToJson___redArg___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_Lean_Json_toStructured_x3f___redArg(x_1, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec_ref(x_5);
x_6 = lean_box(0);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_6);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_5);
return x_2;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_9);
return x_2;
}
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_12 = l_Lean_Json_toStructured_x3f___redArg(x_1, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec_ref(x_12);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 x_16 = x_12;
} else {
 lean_dec_ref(x_12);
 x_16 = lean_box(0);
}
if (lean_is_scalar(x_16)) {
 x_17 = lean_alloc_ctor(1, 1, 0);
} else {
 x_17 = x_16;
}
lean_ctor_set(x_17, 0, x_15);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_10);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutNotificationMessageOfToJson___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instCoeOutNotificationMessageOfToJson___redArg___lam__0), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutNotificationMessageOfToJson(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_JsonRpc_instCoeOutNotificationMessageOfToJson___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_Notification_ofMessage_x3f(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_Option_toJson___at___Lean_JsonRpc_Request_ofMessage_x3f_spec__0(x_3);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 1, x_4);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_1);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_8 = l_Option_toJson___at___Lean_JsonRpc_Request_ofMessage_x3f_spec__0(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
else
{
lean_object* x_11; 
lean_dec_ref(x_1);
x_11 = lean_box(0);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instInhabitedResponse___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_JsonRpc_instInhabitedRequestID___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instInhabitedResponse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_JsonRpc_instInhabitedResponse___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqResponse___redArg____x40_Lean_Data_JsonRpc___hyg_1474_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec_ref(x_2);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec_ref(x_3);
x_8 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_46_(x_4, x_6);
lean_dec(x_6);
lean_dec(x_4);
if (x_8 == 0)
{
lean_dec(x_7);
lean_dec(x_5);
lean_dec_ref(x_1);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_apply_2(x_1, x_5, x_7);
x_10 = lean_unbox(x_9);
return x_10;
}
}
}
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1474_(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_JsonRpc_beqResponse___redArg____x40_Lean_Data_JsonRpc___hyg_1474_(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqResponse___redArg____x40_Lean_Data_JsonRpc___hyg_1474____boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Lean_JsonRpc_beqResponse___redArg____x40_Lean_Data_JsonRpc___hyg_1474_(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1474____boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1474_(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqResponse___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1474____boxed), 4, 2);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqResponse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1474____boxed), 4, 2);
lean_closure_set(x_3, 0, lean_box(0));
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutResponseMessageOfToJson___redArg___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_apply_1(x_1, x_4);
lean_ctor_set_tag(x_2, 2);
lean_ctor_set(x_2, 1, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_2);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutResponseMessageOfToJson___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instCoeOutResponseMessageOfToJson___redArg___lam__0), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutResponseMessageOfToJson(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_JsonRpc_instCoeOutResponseMessageOfToJson___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_Response_ofMessage_x3f(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; 
lean_ctor_set_tag(x_1, 0);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_4);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
else
{
lean_object* x_8; 
lean_dec_ref(x_1);
x_8 = lean_box(0);
return x_8;
}
}
}
static lean_object* _init_l_Lean_JsonRpc_instInhabitedResponseError___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = l_Lean_JsonRpc_instInhabitedRequestID___closed__0;
x_3 = 0;
x_4 = l_Lean_JsonRpc_instInhabitedRequestID___closed__1;
x_5 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_1);
lean_ctor_set_uint8(x_5, sizeof(void*)*3, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instInhabitedResponseError(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_JsonRpc_instInhabitedResponseError___closed__0;
return x_2;
}
}
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqResponseError___redArg____x40_Lean_Data_JsonRpc___hyg_1721_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_6 = lean_ctor_get(x_2, 1);
lean_inc_ref(x_6);
x_7 = lean_ctor_get(x_2, 2);
lean_inc(x_7);
lean_dec_ref(x_2);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_10 = lean_ctor_get(x_3, 1);
lean_inc_ref(x_10);
x_11 = lean_ctor_get(x_3, 2);
lean_inc(x_11);
lean_dec_ref(x_3);
x_12 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_46_(x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
if (x_12 == 0)
{
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_1);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = l_Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_341_(x_5, x_9);
if (x_13 == 0)
{
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_1);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_string_dec_eq(x_6, x_10);
lean_dec_ref(x_10);
lean_dec_ref(x_6);
if (x_14 == 0)
{
lean_dec(x_11);
lean_dec(x_7);
lean_dec_ref(x_1);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = l_Option_beqOption___redArg____x40_Init_Data_Option_Basic___hyg_161_(x_1, x_7, x_11);
return x_15;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1721_(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_JsonRpc_beqResponseError___redArg____x40_Lean_Data_JsonRpc___hyg_1721_(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqResponseError___redArg____x40_Lean_Data_JsonRpc___hyg_1721____boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Lean_JsonRpc_beqResponseError___redArg____x40_Lean_Data_JsonRpc___hyg_1721_(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1721____boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1721_(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqResponseError___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1721____boxed), 4, 2);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instBEqResponseError(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1721____boxed), 4, 2);
lean_closure_set(x_3, 0, lean_box(0));
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutResponseErrorMessageOfToJson___redArg___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 2);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
lean_dec_ref(x_1);
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 2);
lean_dec(x_5);
x_6 = lean_box(0);
lean_ctor_set_tag(x_2, 3);
lean_ctor_set(x_2, 2, x_6);
return x_2;
}
else
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_7);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_11, 2, x_10);
lean_ctor_set_uint8(x_11, sizeof(void*)*3, x_8);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_2, 2);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_3, 0);
x_16 = lean_apply_1(x_1, x_15);
lean_ctor_set(x_3, 0, x_16);
lean_ctor_set_tag(x_2, 3);
return x_2;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_3, 0);
lean_inc(x_17);
lean_dec(x_3);
x_18 = lean_apply_1(x_1, x_17);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set_tag(x_2, 3);
lean_ctor_set(x_2, 2, x_19);
return x_2;
}
}
else
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_20 = lean_ctor_get(x_2, 0);
x_21 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_inc(x_20);
lean_dec(x_2);
x_23 = lean_ctor_get(x_3, 0);
lean_inc(x_23);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 x_24 = x_3;
} else {
 lean_dec_ref(x_3);
 x_24 = lean_box(0);
}
x_25 = lean_apply_1(x_1, x_23);
if (lean_is_scalar(x_24)) {
 x_26 = lean_alloc_ctor(1, 1, 0);
} else {
 x_26 = x_24;
}
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_27, 1, x_22);
lean_ctor_set(x_27, 2, x_26);
lean_ctor_set_uint8(x_27, sizeof(void*)*3, x_21);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutResponseErrorMessageOfToJson___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instCoeOutResponseErrorMessageOfToJson___redArg___lam__0), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutResponseErrorMessageOfToJson(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_JsonRpc_instCoeOutResponseErrorMessageOfToJson___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeOutResponseErrorUnitMessage___lam__0(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 2);
lean_dec(x_3);
x_4 = lean_box(0);
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 2, x_4);
return x_1;
}
else
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_5);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
lean_ctor_set(x_9, 2, x_8);
lean_ctor_set_uint8(x_9, sizeof(void*)*3, x_6);
return x_9;
}
}
}
static lean_object* _init_l_Lean_JsonRpc_instCoeOutResponseErrorUnitMessage() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instCoeOutResponseErrorUnitMessage___lam__0), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_ResponseError_ofMessage_x3f(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; 
lean_ctor_set_tag(x_1, 0);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
else
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_8, 2, x_7);
lean_ctor_set_uint8(x_8, sizeof(void*)*3, x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
else
{
lean_object* x_10; 
lean_dec_ref(x_1);
x_10 = lean_box(0);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeStringRequestID___lam__0(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instCoeStringRequestID() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instCoeStringRequestID___lam__0), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instCoeJsonNumberRequestID___lam__0(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instCoeJsonNumberRequestID() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instCoeJsonNumberRequestID___lam__0), 1, 0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_JsonRpc_RequestID_lt(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_3);
lean_dec_ref(x_1);
x_4 = lean_ctor_get(x_2, 0);
lean_inc_ref(x_4);
lean_dec_ref(x_2);
x_5 = lean_string_dec_lt(x_3, x_4);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_2);
lean_dec_ref(x_1);
x_6 = 0;
return x_6;
}
}
case 1:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
uint8_t x_7; 
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_7 = 1;
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_8);
lean_dec_ref(x_1);
x_9 = lean_ctor_get(x_2, 0);
lean_inc_ref(x_9);
lean_dec_ref(x_2);
x_10 = l_Lean_JsonNumber_lt(x_8, x_9);
return x_10;
}
default: 
{
uint8_t x_11; 
lean_dec_ref(x_1);
x_11 = 0;
return x_11;
}
}
}
default: 
{
if (lean_obj_tag(x_2) == 2)
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_2);
x_13 = 1;
return x_13;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_RequestID_lt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_JsonRpc_RequestID_lt(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_JsonRpc_RequestID_ltProp() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instLTRequestID() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_JsonRpc_instDecidableLtRequestID(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_JsonRpc_RequestID_lt(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instDecidableLtRequestID___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_JsonRpc_instDecidableLtRequestID(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonRequestID___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("a request id needs to be a number or a string", 45, 45);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonRequestID___lam__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonRequestID___lam__0___closed__0;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonRequestID___lam__0(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; 
lean_ctor_set_tag(x_1, 1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
case 3:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; 
lean_ctor_set_tag(x_1, 0);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_1);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
default: 
{
lean_object* x_12; 
lean_dec(x_1);
x_12 = l_Lean_JsonRpc_instFromJsonRequestID___lam__0___closed__1;
return x_12;
}
}
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonRequestID() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instFromJsonRequestID___lam__0), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instToJsonRequestID___lam__0(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_ctor_set_tag(x_1, 3);
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
case 1:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_ctor_set_tag(x_1, 2);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
default: 
{
lean_object* x_8; 
x_8 = lean_box(0);
return x_8;
}
}
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonRequestID() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instToJsonRequestID___lam__0), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("jsonrpc", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("2.0", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__2;
x_2 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__0;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("id", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("method", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("params", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("result", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("message", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("data", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("error", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("code", 4, 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instToJsonMessage___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__3;
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec_ref(x_2);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 1);
lean_inc_ref(x_10);
x_11 = lean_ctor_get(x_3, 2);
lean_inc(x_11);
lean_dec_ref(x_3);
x_12 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
switch (lean_obj_tag(x_9)) {
case 0:
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_9);
if (x_25 == 0)
{
lean_ctor_set_tag(x_9, 3);
x_13 = x_9;
goto block_24;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_9, 0);
lean_inc(x_26);
lean_dec(x_9);
x_27 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_13 = x_27;
goto block_24;
}
}
case 1:
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_9);
if (x_28 == 0)
{
lean_ctor_set_tag(x_9, 2);
x_13 = x_9;
goto block_24;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_9, 0);
lean_inc(x_29);
lean_dec(x_9);
x_30 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_13 = x_30;
goto block_24;
}
}
default: 
{
lean_object* x_31; 
x_31 = lean_box(0);
x_13 = x_31;
goto block_24;
}
}
block_24:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
x_16 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_16, 0, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_22 = l_Lean_Json_opt___redArg(x_1, x_21, x_11);
x_23 = l_List_appendTR___redArg(x_20, x_22);
x_5 = x_23;
goto block_8;
}
}
case 1:
{
uint8_t x_32; 
lean_dec_ref(x_2);
x_32 = !lean_is_exclusive(x_3);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_33 = lean_ctor_get(x_3, 0);
x_34 = lean_ctor_get(x_3, 1);
x_35 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
x_36 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 1, x_36);
lean_ctor_set(x_3, 0, x_35);
x_37 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_38 = l_Lean_Json_opt___redArg(x_1, x_37, x_34);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_3);
lean_ctor_set(x_39, 1, x_38);
x_5 = x_39;
goto block_8;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_40 = lean_ctor_get(x_3, 0);
x_41 = lean_ctor_get(x_3, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_3);
x_42 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
x_43 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_43, 0, x_40);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_46 = l_Lean_Json_opt___redArg(x_1, x_45, x_41);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_46);
x_5 = x_47;
goto block_8;
}
}
case 2:
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_48 = lean_ctor_get(x_3, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_3, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_50 = x_3;
} else {
 lean_dec_ref(x_3);
 x_50 = lean_box(0);
}
x_51 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
switch (lean_obj_tag(x_48)) {
case 0:
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_48);
if (x_60 == 0)
{
lean_ctor_set_tag(x_48, 3);
x_52 = x_48;
goto block_59;
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_48, 0);
lean_inc(x_61);
lean_dec(x_48);
x_62 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_62, 0, x_61);
x_52 = x_62;
goto block_59;
}
}
case 1:
{
uint8_t x_63; 
x_63 = !lean_is_exclusive(x_48);
if (x_63 == 0)
{
lean_ctor_set_tag(x_48, 2);
x_52 = x_48;
goto block_59;
}
else
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_48, 0);
lean_inc(x_64);
lean_dec(x_48);
x_65 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_52 = x_65;
goto block_59;
}
}
default: 
{
lean_object* x_66; 
x_66 = lean_box(0);
x_52 = x_66;
goto block_59;
}
}
block_59:
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
if (lean_is_scalar(x_50)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_50;
 lean_ctor_set_tag(x_53, 0);
}
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__7;
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_49);
x_56 = lean_box(0);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_57);
x_5 = x_58;
goto block_8;
}
}
default: 
{
lean_object* x_67; uint8_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_90; lean_object* x_91; 
lean_dec_ref(x_1);
x_67 = lean_ctor_get(x_3, 0);
lean_inc(x_67);
x_68 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_69 = lean_ctor_get(x_3, 1);
lean_inc_ref(x_69);
x_70 = lean_ctor_get(x_3, 2);
lean_inc(x_70);
lean_dec_ref(x_3);
x_90 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
switch (lean_obj_tag(x_67)) {
case 0:
{
uint8_t x_108; 
x_108 = !lean_is_exclusive(x_67);
if (x_108 == 0)
{
lean_ctor_set_tag(x_67, 3);
x_91 = x_67;
goto block_107;
}
else
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_67, 0);
lean_inc(x_109);
lean_dec(x_67);
x_110 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_110, 0, x_109);
x_91 = x_110;
goto block_107;
}
}
case 1:
{
uint8_t x_111; 
x_111 = !lean_is_exclusive(x_67);
if (x_111 == 0)
{
lean_ctor_set_tag(x_67, 2);
x_91 = x_67;
goto block_107;
}
else
{
lean_object* x_112; lean_object* x_113; 
x_112 = lean_ctor_get(x_67, 0);
lean_inc(x_112);
lean_dec(x_67);
x_113 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_113, 0, x_112);
x_91 = x_113;
goto block_107;
}
}
default: 
{
lean_object* x_114; 
x_114 = lean_box(0);
x_91 = x_114;
goto block_107;
}
}
block_89:
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_74);
x_76 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__8;
x_77 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_77, 0, x_69);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
x_79 = lean_box(0);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_75);
lean_ctor_set(x_81, 1, x_80);
x_82 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__9;
x_83 = l_Lean_Json_opt___redArg(x_2, x_82, x_70);
x_84 = l_List_appendTR___redArg(x_81, x_83);
x_85 = l_Lean_Json_mkObj(x_84);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_71);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_79);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_73);
lean_ctor_set(x_88, 1, x_87);
x_5 = x_88;
goto block_8;
}
block_107:
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
x_93 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__10;
x_94 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__11;
switch (x_68) {
case 0:
{
lean_object* x_95; 
x_95 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__1;
x_71 = x_93;
x_72 = x_94;
x_73 = x_92;
x_74 = x_95;
goto block_89;
}
case 1:
{
lean_object* x_96; 
x_96 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__3;
x_71 = x_93;
x_72 = x_94;
x_73 = x_92;
x_74 = x_96;
goto block_89;
}
case 2:
{
lean_object* x_97; 
x_97 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__5;
x_71 = x_93;
x_72 = x_94;
x_73 = x_92;
x_74 = x_97;
goto block_89;
}
case 3:
{
lean_object* x_98; 
x_98 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__7;
x_71 = x_93;
x_72 = x_94;
x_73 = x_92;
x_74 = x_98;
goto block_89;
}
case 4:
{
lean_object* x_99; 
x_99 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__9;
x_71 = x_93;
x_72 = x_94;
x_73 = x_92;
x_74 = x_99;
goto block_89;
}
case 5:
{
lean_object* x_100; 
x_100 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__11;
x_71 = x_93;
x_72 = x_94;
x_73 = x_92;
x_74 = x_100;
goto block_89;
}
case 6:
{
lean_object* x_101; 
x_101 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__13;
x_71 = x_93;
x_72 = x_94;
x_73 = x_92;
x_74 = x_101;
goto block_89;
}
case 7:
{
lean_object* x_102; 
x_102 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__15;
x_71 = x_93;
x_72 = x_94;
x_73 = x_92;
x_74 = x_102;
goto block_89;
}
case 8:
{
lean_object* x_103; 
x_103 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__17;
x_71 = x_93;
x_72 = x_94;
x_73 = x_92;
x_74 = x_103;
goto block_89;
}
case 9:
{
lean_object* x_104; 
x_104 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__19;
x_71 = x_93;
x_72 = x_94;
x_73 = x_92;
x_74 = x_104;
goto block_89;
}
case 10:
{
lean_object* x_105; 
x_105 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__21;
x_71 = x_93;
x_72 = x_94;
x_73 = x_92;
x_74 = x_105;
goto block_89;
}
default: 
{
lean_object* x_106; 
x_106 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__23;
x_71 = x_93;
x_72 = x_94;
x_73 = x_92;
x_74 = x_106;
goto block_89;
}
}
}
}
}
block_8:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = l_Lean_Json_mkObj(x_6);
return x_7;
}
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonMessage___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Json_Structured_toJson), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonMessage___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___boxed), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instToJsonMessage() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_JsonRpc_instToJsonMessage___closed__0;
x_2 = l_Lean_JsonRpc_instToJsonMessage___closed__1;
x_3 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instToJsonMessage___lam__0), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonMessage___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("only version 2.0 of JSON RPC is supported", 41, 41);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonMessage___lam__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonMessage___lam__0___closed__0;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonMessage___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_15; lean_object* x_16; lean_object* x_20; lean_object* x_21; 
x_20 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__0;
lean_inc(x_5);
x_21 = l_Lean_Json_getObjVal_x3f(x_5, x_20);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
return x_24;
}
}
else
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_21, 0);
lean_inc(x_25);
lean_dec_ref(x_21);
if (lean_obj_tag(x_25) == 3)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc_ref(x_26);
lean_dec_ref(x_25);
x_27 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__1;
x_28 = lean_string_dec_eq(x_26, x_27);
lean_dec_ref(x_26);
if (x_28 == 0)
{
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
goto block_7;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
lean_inc(x_5);
x_30 = l_Lean_Json_getObjValAs_x3f___redArg(x_5, x_1, x_29);
if (lean_obj_tag(x_30) == 0)
{
goto block_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_30, 0);
lean_inc(x_82);
x_83 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
lean_inc_ref(x_3);
lean_inc(x_5);
x_84 = l_Lean_Json_getObjValAs_x3f___redArg(x_5, x_3, x_83);
if (lean_obj_tag(x_84) == 0)
{
lean_dec_ref(x_84);
lean_dec(x_82);
goto block_81;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_91; lean_object* x_92; 
lean_dec_ref(x_30);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 x_86 = x_84;
} else {
 lean_dec_ref(x_84);
 x_86 = lean_box(0);
}
x_91 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_92 = l_Lean_Json_getObjValAs_x3f___redArg(x_5, x_4, x_91);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; 
lean_dec_ref(x_92);
x_93 = lean_box(0);
x_87 = x_93;
goto block_90;
}
else
{
uint8_t x_94; 
x_94 = !lean_is_exclusive(x_92);
if (x_94 == 0)
{
x_87 = x_92;
goto block_90;
}
else
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_92, 0);
lean_inc(x_95);
lean_dec(x_92);
x_96 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_96, 0, x_95);
x_87 = x_96;
goto block_90;
}
}
block_90:
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_88, 0, x_82);
lean_ctor_set(x_88, 1, x_85);
lean_ctor_set(x_88, 2, x_87);
if (lean_is_scalar(x_86)) {
 x_89 = lean_alloc_ctor(1, 1, 0);
} else {
 x_89 = x_86;
}
lean_ctor_set(x_89, 0, x_88);
return x_89;
}
}
}
block_62:
{
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
lean_dec(x_5);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
return x_30;
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_33, 0, x_32);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_30, 0);
lean_inc(x_34);
lean_dec_ref(x_30);
x_35 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__10;
x_36 = l_Lean_Json_getObjVal_x3f(x_5, x_35);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
lean_dec(x_34);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
return x_36;
}
else
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_39, 0, x_38);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_36, 0);
lean_inc(x_40);
lean_dec_ref(x_36);
x_41 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__11;
lean_inc(x_40);
x_42 = l_Lean_Json_getObjValAs_x3f___redArg(x_40, x_2, x_41);
if (lean_obj_tag(x_42) == 0)
{
uint8_t x_43; 
lean_dec(x_40);
lean_dec(x_34);
lean_dec_ref(x_3);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
return x_42;
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_42, 0);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_45, 0, x_44);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_42, 0);
lean_inc(x_46);
lean_dec_ref(x_42);
x_47 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__8;
lean_inc(x_40);
x_48 = l_Lean_Json_getObjValAs_x3f___redArg(x_40, x_3, x_47);
if (lean_obj_tag(x_48) == 0)
{
uint8_t x_49; 
lean_dec(x_46);
lean_dec(x_40);
lean_dec(x_34);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
return x_48;
}
else
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_48, 0);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_51, 0, x_50);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_48, 0);
lean_inc(x_52);
lean_dec_ref(x_48);
x_53 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__9;
x_54 = l_Lean_Json_getObjVal_x3f(x_40, x_53);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; uint8_t x_56; 
lean_dec_ref(x_54);
x_55 = lean_box(0);
x_56 = lean_unbox(x_46);
lean_dec(x_46);
x_8 = x_56;
x_9 = x_52;
x_10 = x_34;
x_11 = x_55;
goto block_14;
}
else
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_54);
if (x_57 == 0)
{
uint8_t x_58; 
x_58 = lean_unbox(x_46);
lean_dec(x_46);
x_8 = x_58;
x_9 = x_52;
x_10 = x_34;
x_11 = x_54;
goto block_14;
}
else
{
lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_59 = lean_ctor_get(x_54, 0);
lean_inc(x_59);
lean_dec(x_54);
x_60 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_60, 0, x_59);
x_61 = lean_unbox(x_46);
lean_dec(x_46);
x_8 = x_61;
x_9 = x_52;
x_10 = x_34;
x_11 = x_60;
goto block_14;
}
}
}
}
}
}
}
block_81:
{
lean_object* x_63; lean_object* x_64; 
x_63 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
lean_inc_ref(x_3);
lean_inc(x_5);
x_64 = l_Lean_Json_getObjValAs_x3f___redArg(x_5, x_3, x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_dec_ref(x_64);
lean_dec_ref(x_4);
if (lean_obj_tag(x_30) == 0)
{
goto block_62;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_30, 0);
lean_inc(x_65);
x_66 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__7;
lean_inc(x_5);
x_67 = l_Lean_Json_getObjVal_x3f(x_5, x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_dec_ref(x_67);
lean_dec(x_65);
goto block_62;
}
else
{
uint8_t x_68; 
lean_dec_ref(x_30);
lean_dec(x_5);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_68 = !lean_is_exclusive(x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_67, 0);
x_70 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_70, 0, x_65);
lean_ctor_set(x_70, 1, x_69);
lean_ctor_set(x_67, 0, x_70);
return x_67;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_67, 0);
lean_inc(x_71);
lean_dec(x_67);
x_72 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_72, 0, x_65);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_73, 0, x_72);
return x_73;
}
}
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec_ref(x_30);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_74 = lean_ctor_get(x_64, 0);
lean_inc(x_74);
lean_dec_ref(x_64);
x_75 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_76 = l_Lean_Json_getObjValAs_x3f___redArg(x_5, x_4, x_75);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; 
lean_dec_ref(x_76);
x_77 = lean_box(0);
x_15 = x_74;
x_16 = x_77;
goto block_19;
}
else
{
uint8_t x_78; 
x_78 = !lean_is_exclusive(x_76);
if (x_78 == 0)
{
x_15 = x_74;
x_16 = x_76;
goto block_19;
}
else
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_ctor_get(x_76, 0);
lean_inc(x_79);
lean_dec(x_76);
x_80 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_80, 0, x_79);
x_15 = x_74;
x_16 = x_80;
goto block_19;
}
}
}
}
}
}
else
{
lean_dec(x_25);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
goto block_7;
}
}
block_7:
{
lean_object* x_6; 
x_6 = l_Lean_JsonRpc_instFromJsonMessage___lam__0___closed__1;
return x_6;
}
block_14:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_9);
lean_ctor_set(x_12, 2, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*3, x_8);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
block_19:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonMessage___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instFromJsonRequestID___lam__0), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonMessage___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Json_getStr_x3f), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonMessage___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Json_Structured_fromJson_x3f), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonMessage___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonMessage() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_JsonRpc_instFromJsonMessage___closed__0;
x_2 = l_Lean_JsonRpc_instFromJsonMessage___closed__1;
x_3 = l_Lean_JsonRpc_instFromJsonMessage___closed__2;
x_4 = l_Lean_JsonRpc_instFromJsonMessage___closed__3;
x_5 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instFromJsonMessage___lam__0), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_2);
lean_closure_set(x_5, 3, x_3);
return x_5;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("not a notification", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__0;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_JsonRpc_instFromJsonMessage___lam__0___closed__0;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_22; lean_object* x_23; 
x_22 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__0;
lean_inc(x_3);
x_23 = l_Lean_Json_getObjVal_x3f(x_3, x_22);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
lean_dec(x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
return x_23;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
}
else
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_23, 0);
lean_inc(x_27);
lean_dec_ref(x_23);
if (lean_obj_tag(x_27) == 3)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc_ref(x_28);
lean_dec_ref(x_27);
x_29 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__1;
x_30 = lean_string_dec_eq(x_28, x_29);
lean_dec_ref(x_28);
if (x_30 == 0)
{
lean_dec(x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
goto block_21;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = l_Lean_JsonRpc_instFromJsonMessage___closed__0;
x_32 = l_Lean_JsonRpc_instFromJsonMessage___closed__1;
x_33 = l_Lean_JsonRpc_instFromJsonMessage___closed__2;
x_34 = l_Lean_JsonRpc_instFromJsonMessage___closed__3;
x_35 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
lean_inc(x_3);
x_36 = l_Lean_Json_getObjValAs_x3f___redArg(x_3, x_31, x_35);
if (lean_obj_tag(x_36) == 0)
{
goto block_68;
}
else
{
lean_object* x_69; lean_object* x_70; 
x_69 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
lean_inc(x_3);
x_70 = l_Lean_Json_getObjValAs_x3f___redArg(x_3, x_32, x_69);
if (lean_obj_tag(x_70) == 0)
{
lean_dec_ref(x_70);
goto block_68;
}
else
{
lean_dec_ref(x_70);
lean_dec_ref(x_36);
lean_dec(x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
goto block_5;
}
}
block_56:
{
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
lean_dec(x_3);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
return x_36;
}
else
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_39, 0, x_38);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; 
lean_dec_ref(x_36);
x_40 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__10;
x_41 = l_Lean_Json_getObjVal_x3f(x_3, x_40);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
return x_41;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_44, 0, x_43);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_41, 0);
lean_inc(x_45);
lean_dec_ref(x_41);
x_46 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__11;
lean_inc(x_45);
x_47 = l_Lean_Json_getObjValAs_x3f___redArg(x_45, x_34, x_46);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
lean_dec(x_45);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
return x_47;
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_47, 0);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_50, 0, x_49);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; 
lean_dec_ref(x_47);
x_51 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__8;
x_52 = l_Lean_Json_getObjValAs_x3f___redArg(x_45, x_32, x_51);
if (lean_obj_tag(x_52) == 0)
{
uint8_t x_53; 
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
return x_52;
}
else
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_52, 0);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_55, 0, x_54);
return x_55;
}
}
else
{
lean_dec_ref(x_52);
goto block_5;
}
}
}
}
}
block_68:
{
lean_object* x_57; lean_object* x_58; 
x_57 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
lean_inc(x_3);
x_58 = l_Lean_Json_getObjValAs_x3f___redArg(x_3, x_32, x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_dec_ref(x_58);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
if (lean_obj_tag(x_36) == 0)
{
goto block_56;
}
else
{
lean_object* x_59; lean_object* x_60; 
x_59 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__7;
lean_inc(x_3);
x_60 = l_Lean_Json_getObjVal_x3f(x_3, x_59);
if (lean_obj_tag(x_60) == 0)
{
lean_dec_ref(x_60);
goto block_56;
}
else
{
lean_dec_ref(x_60);
lean_dec_ref(x_36);
lean_dec(x_3);
goto block_5;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec_ref(x_36);
x_61 = lean_ctor_get(x_58, 0);
lean_inc(x_61);
lean_dec_ref(x_58);
x_62 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_63 = l_Lean_Json_getObjValAs_x3f___redArg(x_3, x_33, x_62);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; 
lean_dec_ref(x_63);
x_64 = lean_box(0);
x_6 = x_61;
x_7 = x_64;
goto block_19;
}
else
{
uint8_t x_65; 
x_65 = !lean_is_exclusive(x_63);
if (x_65 == 0)
{
x_6 = x_61;
x_7 = x_63;
goto block_19;
}
else
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_63, 0);
lean_inc(x_66);
lean_dec(x_63);
x_67 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_6 = x_61;
x_7 = x_67;
goto block_19;
}
}
}
}
}
}
else
{
lean_dec(x_27);
lean_dec(x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
goto block_21;
}
}
block_5:
{
lean_object* x_4; 
x_4 = l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__1;
return x_4;
}
block_19:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Option_toJson___redArg(x_1, x_7);
x_9 = lean_apply_1(x_2, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec_ref(x_6);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_6);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
block_21:
{
lean_object* x_20; 
x_20 = l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__2;
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonNotification___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_JsonRpc_instToJsonMessage___closed__0;
x_3 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonRpc_instFromJsonNotification(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_JsonRpc_instFromJsonNotification___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
switch (lean_obj_tag(x_3)) {
case 2:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_ctor_set_tag(x_3, 1);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
case 3:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_3);
if (x_9 == 0)
{
lean_object* x_10; 
lean_ctor_set_tag(x_3, 0);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
default: 
{
lean_object* x_14; 
lean_dec(x_3);
x_14 = l_Lean_JsonRpc_instFromJsonRequestID___lam__0___closed__1;
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Json_getObjValD(x_1, x_2);
if (lean_obj_tag(x_5) == 2)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_6);
lean_dec_ref(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec_ref(x_6);
x_9 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__3;
x_10 = lean_int_dec_eq(x_7, x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__5;
x_12 = lean_int_dec_eq(x_7, x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__7;
x_14 = lean_int_dec_eq(x_7, x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__9;
x_16 = lean_int_dec_eq(x_7, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__11;
x_18 = lean_int_dec_eq(x_7, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__13;
x_20 = lean_int_dec_eq(x_7, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__15;
x_22 = lean_int_dec_eq(x_7, x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__17;
x_24 = lean_int_dec_eq(x_7, x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__19;
x_26 = lean_int_dec_eq(x_7, x_25);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__21;
x_28 = lean_int_dec_eq(x_7, x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__23;
x_30 = lean_int_dec_eq(x_7, x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__25;
x_32 = lean_int_dec_eq(x_7, x_31);
lean_dec(x_7);
if (x_32 == 0)
{
lean_dec(x_8);
goto block_4;
}
else
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_unsigned_to_nat(0u);
x_34 = lean_nat_dec_eq(x_8, x_33);
lean_dec(x_8);
if (x_34 == 0)
{
goto block_4;
}
else
{
lean_object* x_35; 
x_35 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__26;
return x_35;
}
}
}
else
{
lean_object* x_36; uint8_t x_37; 
lean_dec(x_7);
x_36 = lean_unsigned_to_nat(0u);
x_37 = lean_nat_dec_eq(x_8, x_36);
lean_dec(x_8);
if (x_37 == 0)
{
goto block_4;
}
else
{
lean_object* x_38; 
x_38 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__27;
return x_38;
}
}
}
else
{
lean_object* x_39; uint8_t x_40; 
lean_dec(x_7);
x_39 = lean_unsigned_to_nat(0u);
x_40 = lean_nat_dec_eq(x_8, x_39);
lean_dec(x_8);
if (x_40 == 0)
{
goto block_4;
}
else
{
lean_object* x_41; 
x_41 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__28;
return x_41;
}
}
}
else
{
lean_object* x_42; uint8_t x_43; 
lean_dec(x_7);
x_42 = lean_unsigned_to_nat(0u);
x_43 = lean_nat_dec_eq(x_8, x_42);
lean_dec(x_8);
if (x_43 == 0)
{
goto block_4;
}
else
{
lean_object* x_44; 
x_44 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__29;
return x_44;
}
}
}
else
{
lean_object* x_45; uint8_t x_46; 
lean_dec(x_7);
x_45 = lean_unsigned_to_nat(0u);
x_46 = lean_nat_dec_eq(x_8, x_45);
lean_dec(x_8);
if (x_46 == 0)
{
goto block_4;
}
else
{
lean_object* x_47; 
x_47 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__30;
return x_47;
}
}
}
else
{
lean_object* x_48; uint8_t x_49; 
lean_dec(x_7);
x_48 = lean_unsigned_to_nat(0u);
x_49 = lean_nat_dec_eq(x_8, x_48);
lean_dec(x_8);
if (x_49 == 0)
{
goto block_4;
}
else
{
lean_object* x_50; 
x_50 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__31;
return x_50;
}
}
}
else
{
lean_object* x_51; uint8_t x_52; 
lean_dec(x_7);
x_51 = lean_unsigned_to_nat(0u);
x_52 = lean_nat_dec_eq(x_8, x_51);
lean_dec(x_8);
if (x_52 == 0)
{
goto block_4;
}
else
{
lean_object* x_53; 
x_53 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__32;
return x_53;
}
}
}
else
{
lean_object* x_54; uint8_t x_55; 
lean_dec(x_7);
x_54 = lean_unsigned_to_nat(0u);
x_55 = lean_nat_dec_eq(x_8, x_54);
lean_dec(x_8);
if (x_55 == 0)
{
goto block_4;
}
else
{
lean_object* x_56; 
x_56 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__33;
return x_56;
}
}
}
else
{
lean_object* x_57; uint8_t x_58; 
lean_dec(x_7);
x_57 = lean_unsigned_to_nat(0u);
x_58 = lean_nat_dec_eq(x_8, x_57);
lean_dec(x_8);
if (x_58 == 0)
{
goto block_4;
}
else
{
lean_object* x_59; 
x_59 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__34;
return x_59;
}
}
}
else
{
lean_object* x_60; uint8_t x_61; 
lean_dec(x_7);
x_60 = lean_unsigned_to_nat(0u);
x_61 = lean_nat_dec_eq(x_8, x_60);
lean_dec(x_8);
if (x_61 == 0)
{
goto block_4;
}
else
{
lean_object* x_62; 
x_62 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__35;
return x_62;
}
}
}
else
{
lean_object* x_63; uint8_t x_64; 
lean_dec(x_7);
x_63 = lean_unsigned_to_nat(0u);
x_64 = lean_nat_dec_eq(x_8, x_63);
lean_dec(x_8);
if (x_64 == 0)
{
goto block_4;
}
else
{
lean_object* x_65; 
x_65 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__36;
return x_65;
}
}
}
else
{
lean_object* x_66; uint8_t x_67; 
lean_dec(x_7);
x_66 = lean_unsigned_to_nat(0u);
x_67 = lean_nat_dec_eq(x_8, x_66);
lean_dec(x_8);
if (x_67 == 0)
{
goto block_4;
}
else
{
lean_object* x_68; 
x_68 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__37;
return x_68;
}
}
}
else
{
lean_dec(x_5);
goto block_4;
}
block_4:
{
lean_object* x_3; 
x_3 = l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__1;
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
x_4 = l_Lean_Json_getStr_x3f(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
x_4 = l_Lean_Json_Structured_fromJson_x3f(x_3);
return x_4;
}
}
static lean_object* _init_l_IO_FS_Stream_readMessage___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("JSON '", 6, 6);
return x_1;
}
}
static lean_object* _init_l_IO_FS_Stream_readMessage___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("' did not have the format of a JSON-RPC message.\n", 49, 49);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readMessage(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Stream_readJson(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_15; lean_object* x_16; lean_object* x_20; lean_object* x_32; lean_object* x_33; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_7 = x_4;
} else {
 lean_dec_ref(x_4);
 x_7 = lean_box(0);
}
x_32 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__0;
lean_inc(x_5);
x_33 = l_Lean_Json_getObjVal_x3f(x_5, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; 
lean_dec(x_7);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
lean_dec_ref(x_33);
x_20 = x_34;
goto block_29;
}
else
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
lean_dec_ref(x_33);
if (lean_obj_tag(x_35) == 3)
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc_ref(x_36);
lean_dec_ref(x_35);
x_37 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__1;
x_38 = lean_string_dec_eq(x_36, x_37);
lean_dec_ref(x_36);
if (x_38 == 0)
{
lean_dec(x_7);
goto block_31;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
lean_inc(x_5);
x_40 = l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__0(x_5, x_39);
if (lean_obj_tag(x_40) == 0)
{
goto block_80;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_40, 0);
lean_inc(x_81);
x_82 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
lean_inc(x_5);
x_83 = l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__2(x_5, x_82);
if (lean_obj_tag(x_83) == 0)
{
lean_dec_ref(x_83);
lean_dec(x_81);
goto block_80;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_89; lean_object* x_90; 
lean_dec_ref(x_40);
lean_dec(x_7);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
lean_dec_ref(x_83);
x_89 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_90 = l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__3(x_5, x_89);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; 
lean_dec_ref(x_90);
x_91 = lean_box(0);
x_85 = x_91;
goto block_88;
}
else
{
uint8_t x_92; 
x_92 = !lean_is_exclusive(x_90);
if (x_92 == 0)
{
x_85 = x_90;
goto block_88;
}
else
{
lean_object* x_93; lean_object* x_94; 
x_93 = lean_ctor_get(x_90, 0);
lean_inc(x_93);
lean_dec(x_90);
x_94 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_94, 0, x_93);
x_85 = x_94;
goto block_88;
}
}
block_88:
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_86, 0, x_81);
lean_ctor_set(x_86, 1, x_84);
lean_ctor_set(x_86, 2, x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_6);
return x_87;
}
}
}
block_64:
{
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; 
lean_dec(x_7);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
lean_dec_ref(x_40);
x_20 = x_41;
goto block_29;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_40, 0);
lean_inc(x_42);
lean_dec_ref(x_40);
x_43 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__10;
lean_inc(x_5);
x_44 = l_Lean_Json_getObjVal_x3f(x_5, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; 
lean_dec(x_42);
lean_dec(x_7);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
lean_dec_ref(x_44);
x_20 = x_45;
goto block_29;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_44, 0);
lean_inc(x_46);
lean_dec_ref(x_44);
x_47 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__11;
lean_inc(x_46);
x_48 = l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__1(x_46, x_47);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; 
lean_dec(x_46);
lean_dec(x_42);
lean_dec(x_7);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
lean_dec_ref(x_48);
x_20 = x_49;
goto block_29;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_48, 0);
lean_inc(x_50);
lean_dec_ref(x_48);
x_51 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__8;
lean_inc(x_46);
x_52 = l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__2(x_46, x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; 
lean_dec(x_50);
lean_dec(x_46);
lean_dec(x_42);
lean_dec(x_7);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
lean_dec_ref(x_52);
x_20 = x_53;
goto block_29;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_5);
x_54 = lean_ctor_get(x_52, 0);
lean_inc(x_54);
lean_dec_ref(x_52);
x_55 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__9;
x_56 = l_Lean_Json_getObjVal_x3f(x_46, x_55);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; uint8_t x_58; 
lean_dec_ref(x_56);
x_57 = lean_box(0);
x_58 = lean_unbox(x_50);
lean_dec(x_50);
x_8 = x_54;
x_9 = x_58;
x_10 = x_42;
x_11 = x_57;
goto block_14;
}
else
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_56);
if (x_59 == 0)
{
uint8_t x_60; 
x_60 = lean_unbox(x_50);
lean_dec(x_50);
x_8 = x_54;
x_9 = x_60;
x_10 = x_42;
x_11 = x_56;
goto block_14;
}
else
{
lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_61 = lean_ctor_get(x_56, 0);
lean_inc(x_61);
lean_dec(x_56);
x_62 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_62, 0, x_61);
x_63 = lean_unbox(x_50);
lean_dec(x_50);
x_8 = x_54;
x_9 = x_63;
x_10 = x_42;
x_11 = x_62;
goto block_14;
}
}
}
}
}
}
}
block_80:
{
lean_object* x_65; lean_object* x_66; 
x_65 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
lean_inc(x_5);
x_66 = l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__2(x_5, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_dec_ref(x_66);
if (lean_obj_tag(x_40) == 0)
{
goto block_64;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_40, 0);
lean_inc(x_67);
x_68 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__7;
lean_inc(x_5);
x_69 = l_Lean_Json_getObjVal_x3f(x_5, x_68);
if (lean_obj_tag(x_69) == 0)
{
lean_dec_ref(x_69);
lean_dec(x_67);
goto block_64;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec_ref(x_40);
lean_dec(x_7);
lean_dec(x_5);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
lean_dec_ref(x_69);
x_71 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_71, 0, x_67);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_6);
return x_72;
}
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec_ref(x_40);
lean_dec(x_7);
x_73 = lean_ctor_get(x_66, 0);
lean_inc(x_73);
lean_dec_ref(x_66);
x_74 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_75 = l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__3(x_5, x_74);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; 
lean_dec_ref(x_75);
x_76 = lean_box(0);
x_15 = x_73;
x_16 = x_76;
goto block_19;
}
else
{
uint8_t x_77; 
x_77 = !lean_is_exclusive(x_75);
if (x_77 == 0)
{
x_15 = x_73;
x_16 = x_75;
goto block_19;
}
else
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_ctor_get(x_75, 0);
lean_inc(x_78);
lean_dec(x_75);
x_79 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_79, 0, x_78);
x_15 = x_73;
x_16 = x_79;
goto block_19;
}
}
}
}
}
}
else
{
lean_dec(x_35);
lean_dec(x_7);
goto block_31;
}
}
block_14:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_8);
lean_ctor_set(x_12, 2, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*3, x_9);
if (lean_is_scalar(x_7)) {
 x_13 = lean_alloc_ctor(0, 2, 0);
} else {
 x_13 = x_7;
}
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
return x_13;
}
block_19:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_6);
return x_18;
}
block_29:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_21 = l_IO_FS_Stream_readMessage___closed__0;
x_22 = l_Lean_Json_compress(x_5);
x_23 = lean_string_append(x_21, x_22);
lean_dec_ref(x_22);
x_24 = l_IO_FS_Stream_readMessage___closed__1;
x_25 = lean_string_append(x_23, x_24);
x_26 = lean_string_append(x_25, x_20);
lean_dec_ref(x_20);
x_27 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_6);
return x_28;
}
block_31:
{
lean_object* x_30; 
x_30 = l_Lean_JsonRpc_instFromJsonMessage___lam__0___closed__0;
x_20 = x_30;
goto block_29;
}
}
else
{
uint8_t x_95; 
x_95 = !lean_is_exclusive(x_4);
if (x_95 == 0)
{
return x_4;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_4, 0);
x_97 = lean_ctor_get(x_4, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_4);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__0(x_1, x_2);
lean_dec_ref(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__1(x_1, x_2);
lean_dec_ref(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__2(x_1, x_2);
lean_dec_ref(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___IO_FS_Stream_readMessage_spec__3(x_1, x_2);
lean_dec_ref(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readMessage___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Stream_readMessage(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_IO_FS_Stream_readRequestAs___redArg___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Expected method '", 17, 17);
return x_1;
}
}
static lean_object* _init_l_IO_FS_Stream_readRequestAs___redArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("', got method '", 15, 15);
return x_1;
}
}
static lean_object* _init_l_IO_FS_Stream_readRequestAs___redArg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'", 1, 1);
return x_1;
}
}
static lean_object* _init_l_IO_FS_Stream_readRequestAs___redArg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Unexpected param '", 18, 18);
return x_1;
}
}
static lean_object* _init_l_IO_FS_Stream_readRequestAs___redArg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("' for method '", 14, 14);
return x_1;
}
}
static lean_object* _init_l_IO_FS_Stream_readRequestAs___redArg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'\n", 2, 2);
return x_1;
}
}
static lean_object* _init_l_IO_FS_Stream_readRequestAs___redArg___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Expected JSON-RPC request, got: '", 33, 33);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readRequestAs___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IO_FS_Stream_readMessage(x_1, x_2, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_6, 0);
lean_dec(x_9);
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
x_13 = lean_ctor_get(x_7, 2);
x_14 = lean_string_dec_eq(x_12, x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_free_object(x_7);
lean_dec(x_13);
lean_dec(x_11);
lean_dec_ref(x_4);
x_15 = l_IO_FS_Stream_readRequestAs___redArg___closed__0;
x_16 = lean_string_append(x_15, x_3);
lean_dec_ref(x_3);
x_17 = l_IO_FS_Stream_readRequestAs___redArg___closed__1;
x_18 = lean_string_append(x_16, x_17);
x_19 = lean_string_append(x_18, x_12);
lean_dec_ref(x_12);
x_20 = l_IO_FS_Stream_readRequestAs___redArg___closed__2;
x_21 = lean_string_append(x_19, x_20);
x_22 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_22);
return x_6;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec_ref(x_12);
x_23 = l_Lean_JsonRpc_instToJsonMessage___closed__0;
x_24 = l_Option_toJson___redArg(x_23, x_13);
lean_inc(x_24);
x_25 = lean_apply_1(x_4, x_24);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_free_object(x_7);
lean_dec(x_11);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = l_IO_FS_Stream_readRequestAs___redArg___closed__3;
x_29 = l_Lean_Json_compress(x_24);
x_30 = lean_string_append(x_28, x_29);
lean_dec_ref(x_29);
x_31 = l_IO_FS_Stream_readRequestAs___redArg___closed__4;
x_32 = lean_string_append(x_30, x_31);
x_33 = lean_string_append(x_32, x_3);
lean_dec_ref(x_3);
x_34 = l_IO_FS_Stream_readRequestAs___redArg___closed__5;
x_35 = lean_string_append(x_33, x_34);
x_36 = lean_string_append(x_35, x_27);
lean_dec(x_27);
lean_ctor_set_tag(x_25, 18);
lean_ctor_set(x_25, 0, x_36);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_25);
return x_6;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_37 = lean_ctor_get(x_25, 0);
lean_inc(x_37);
lean_dec(x_25);
x_38 = l_IO_FS_Stream_readRequestAs___redArg___closed__3;
x_39 = l_Lean_Json_compress(x_24);
x_40 = lean_string_append(x_38, x_39);
lean_dec_ref(x_39);
x_41 = l_IO_FS_Stream_readRequestAs___redArg___closed__4;
x_42 = lean_string_append(x_40, x_41);
x_43 = lean_string_append(x_42, x_3);
lean_dec_ref(x_3);
x_44 = l_IO_FS_Stream_readRequestAs___redArg___closed__5;
x_45 = lean_string_append(x_43, x_44);
x_46 = lean_string_append(x_45, x_37);
lean_dec(x_37);
x_47 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_47);
return x_6;
}
}
else
{
lean_object* x_48; 
lean_dec(x_24);
x_48 = lean_ctor_get(x_25, 0);
lean_inc(x_48);
lean_dec_ref(x_25);
lean_ctor_set(x_7, 2, x_48);
lean_ctor_set(x_7, 1, x_3);
return x_6;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_49 = lean_ctor_get(x_7, 0);
x_50 = lean_ctor_get(x_7, 1);
x_51 = lean_ctor_get(x_7, 2);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_7);
x_52 = lean_string_dec_eq(x_50, x_3);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_51);
lean_dec(x_49);
lean_dec_ref(x_4);
x_53 = l_IO_FS_Stream_readRequestAs___redArg___closed__0;
x_54 = lean_string_append(x_53, x_3);
lean_dec_ref(x_3);
x_55 = l_IO_FS_Stream_readRequestAs___redArg___closed__1;
x_56 = lean_string_append(x_54, x_55);
x_57 = lean_string_append(x_56, x_50);
lean_dec_ref(x_50);
x_58 = l_IO_FS_Stream_readRequestAs___redArg___closed__2;
x_59 = lean_string_append(x_57, x_58);
x_60 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_60);
return x_6;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec_ref(x_50);
x_61 = l_Lean_JsonRpc_instToJsonMessage___closed__0;
x_62 = l_Option_toJson___redArg(x_61, x_51);
lean_inc(x_62);
x_63 = lean_apply_1(x_4, x_62);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_49);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 x_65 = x_63;
} else {
 lean_dec_ref(x_63);
 x_65 = lean_box(0);
}
x_66 = l_IO_FS_Stream_readRequestAs___redArg___closed__3;
x_67 = l_Lean_Json_compress(x_62);
x_68 = lean_string_append(x_66, x_67);
lean_dec_ref(x_67);
x_69 = l_IO_FS_Stream_readRequestAs___redArg___closed__4;
x_70 = lean_string_append(x_68, x_69);
x_71 = lean_string_append(x_70, x_3);
lean_dec_ref(x_3);
x_72 = l_IO_FS_Stream_readRequestAs___redArg___closed__5;
x_73 = lean_string_append(x_71, x_72);
x_74 = lean_string_append(x_73, x_64);
lean_dec(x_64);
if (lean_is_scalar(x_65)) {
 x_75 = lean_alloc_ctor(18, 1, 0);
} else {
 x_75 = x_65;
 lean_ctor_set_tag(x_75, 18);
}
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_75);
return x_6;
}
else
{
lean_object* x_76; lean_object* x_77; 
lean_dec(x_62);
x_76 = lean_ctor_get(x_63, 0);
lean_inc(x_76);
lean_dec_ref(x_63);
x_77 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_77, 0, x_49);
lean_ctor_set(x_77, 1, x_3);
lean_ctor_set(x_77, 2, x_76);
lean_ctor_set(x_6, 0, x_77);
return x_6;
}
}
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_78 = lean_ctor_get(x_6, 1);
lean_inc(x_78);
lean_dec(x_6);
x_79 = lean_ctor_get(x_7, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_7, 1);
lean_inc_ref(x_80);
x_81 = lean_ctor_get(x_7, 2);
lean_inc(x_81);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 x_82 = x_7;
} else {
 lean_dec_ref(x_7);
 x_82 = lean_box(0);
}
x_83 = lean_string_dec_eq(x_80, x_3);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_79);
lean_dec_ref(x_4);
x_84 = l_IO_FS_Stream_readRequestAs___redArg___closed__0;
x_85 = lean_string_append(x_84, x_3);
lean_dec_ref(x_3);
x_86 = l_IO_FS_Stream_readRequestAs___redArg___closed__1;
x_87 = lean_string_append(x_85, x_86);
x_88 = lean_string_append(x_87, x_80);
lean_dec_ref(x_80);
x_89 = l_IO_FS_Stream_readRequestAs___redArg___closed__2;
x_90 = lean_string_append(x_88, x_89);
x_91 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_91, 0, x_90);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_78);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec_ref(x_80);
x_93 = l_Lean_JsonRpc_instToJsonMessage___closed__0;
x_94 = l_Option_toJson___redArg(x_93, x_81);
lean_inc(x_94);
x_95 = lean_apply_1(x_4, x_94);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_82);
lean_dec(x_79);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 x_97 = x_95;
} else {
 lean_dec_ref(x_95);
 x_97 = lean_box(0);
}
x_98 = l_IO_FS_Stream_readRequestAs___redArg___closed__3;
x_99 = l_Lean_Json_compress(x_94);
x_100 = lean_string_append(x_98, x_99);
lean_dec_ref(x_99);
x_101 = l_IO_FS_Stream_readRequestAs___redArg___closed__4;
x_102 = lean_string_append(x_100, x_101);
x_103 = lean_string_append(x_102, x_3);
lean_dec_ref(x_3);
x_104 = l_IO_FS_Stream_readRequestAs___redArg___closed__5;
x_105 = lean_string_append(x_103, x_104);
x_106 = lean_string_append(x_105, x_96);
lean_dec(x_96);
if (lean_is_scalar(x_97)) {
 x_107 = lean_alloc_ctor(18, 1, 0);
} else {
 x_107 = x_97;
 lean_ctor_set_tag(x_107, 18);
}
lean_ctor_set(x_107, 0, x_106);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_78);
return x_108;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_94);
x_109 = lean_ctor_get(x_95, 0);
lean_inc(x_109);
lean_dec_ref(x_95);
if (lean_is_scalar(x_82)) {
 x_110 = lean_alloc_ctor(0, 3, 0);
} else {
 x_110 = x_82;
}
lean_ctor_set(x_110, 0, x_79);
lean_ctor_set(x_110, 1, x_3);
lean_ctor_set(x_110, 2, x_109);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_78);
return x_111;
}
}
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec_ref(x_4);
lean_dec_ref(x_3);
x_112 = lean_ctor_get(x_6, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_113 = x_6;
} else {
 lean_dec_ref(x_6);
 x_113 = lean_box(0);
}
x_114 = l_IO_FS_Stream_readRequestAs___redArg___closed__6;
x_115 = l_Lean_JsonRpc_instToJsonMessage___closed__0;
x_116 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__3;
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_127 = lean_ctor_get(x_7, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_7, 1);
lean_inc_ref(x_128);
x_129 = lean_ctor_get(x_7, 2);
lean_inc(x_129);
lean_dec_ref(x_7);
x_130 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
if (lean_obj_tag(x_127) == 0)
{
uint8_t x_143; 
x_143 = !lean_is_exclusive(x_127);
if (x_143 == 0)
{
lean_ctor_set_tag(x_127, 3);
x_131 = x_127;
goto block_142;
}
else
{
lean_object* x_144; lean_object* x_145; 
x_144 = lean_ctor_get(x_127, 0);
lean_inc(x_144);
lean_dec(x_127);
x_145 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_145, 0, x_144);
x_131 = x_145;
goto block_142;
}
}
else
{
uint8_t x_146; 
x_146 = !lean_is_exclusive(x_127);
if (x_146 == 0)
{
lean_ctor_set_tag(x_127, 2);
x_131 = x_127;
goto block_142;
}
else
{
lean_object* x_147; lean_object* x_148; 
x_147 = lean_ctor_get(x_127, 0);
lean_inc(x_147);
lean_dec(x_127);
x_148 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_148, 0, x_147);
x_131 = x_148;
goto block_142;
}
}
block_142:
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_131);
x_133 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
x_134 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_134, 0, x_128);
x_135 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_box(0);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_132);
lean_ctor_set(x_138, 1, x_137);
x_139 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_140 = l_Lean_Json_opt___redArg(x_115, x_139, x_129);
x_141 = l_List_appendTR___redArg(x_138, x_140);
x_117 = x_141;
goto block_126;
}
}
case 1:
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_149 = lean_ctor_get(x_7, 0);
lean_inc_ref(x_149);
x_150 = lean_ctor_get(x_7, 1);
lean_inc(x_150);
lean_dec_ref(x_7);
x_151 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
x_152 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_152, 0, x_149);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_152);
x_154 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_155 = l_Lean_Json_opt___redArg(x_115, x_154, x_150);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_155);
x_117 = x_156;
goto block_126;
}
case 2:
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_157 = lean_ctor_get(x_7, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_7, 1);
lean_inc(x_158);
lean_dec_ref(x_7);
x_159 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
if (lean_obj_tag(x_157) == 0)
{
uint8_t x_168; 
x_168 = !lean_is_exclusive(x_157);
if (x_168 == 0)
{
lean_ctor_set_tag(x_157, 3);
x_160 = x_157;
goto block_167;
}
else
{
lean_object* x_169; lean_object* x_170; 
x_169 = lean_ctor_get(x_157, 0);
lean_inc(x_169);
lean_dec(x_157);
x_170 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_170, 0, x_169);
x_160 = x_170;
goto block_167;
}
}
else
{
uint8_t x_171; 
x_171 = !lean_is_exclusive(x_157);
if (x_171 == 0)
{
lean_ctor_set_tag(x_157, 2);
x_160 = x_157;
goto block_167;
}
else
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_ctor_get(x_157, 0);
lean_inc(x_172);
lean_dec(x_157);
x_173 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_173, 0, x_172);
x_160 = x_173;
goto block_167;
}
}
block_167:
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_161 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
x_162 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__7;
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_158);
x_164 = lean_box(0);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_161);
lean_ctor_set(x_166, 1, x_165);
x_117 = x_166;
goto block_126;
}
}
default: 
{
lean_object* x_174; uint8_t x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_198; lean_object* x_199; 
x_174 = lean_ctor_get(x_7, 0);
lean_inc(x_174);
x_175 = lean_ctor_get_uint8(x_7, sizeof(void*)*3);
x_176 = lean_ctor_get(x_7, 1);
lean_inc_ref(x_176);
x_177 = lean_ctor_get(x_7, 2);
lean_inc(x_177);
lean_dec_ref(x_7);
x_178 = l_Lean_JsonRpc_instToJsonMessage___closed__1;
x_198 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
if (lean_obj_tag(x_174) == 0)
{
uint8_t x_216; 
x_216 = !lean_is_exclusive(x_174);
if (x_216 == 0)
{
lean_ctor_set_tag(x_174, 3);
x_199 = x_174;
goto block_215;
}
else
{
lean_object* x_217; lean_object* x_218; 
x_217 = lean_ctor_get(x_174, 0);
lean_inc(x_217);
lean_dec(x_174);
x_218 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_218, 0, x_217);
x_199 = x_218;
goto block_215;
}
}
else
{
uint8_t x_219; 
x_219 = !lean_is_exclusive(x_174);
if (x_219 == 0)
{
lean_ctor_set_tag(x_174, 2);
x_199 = x_174;
goto block_215;
}
else
{
lean_object* x_220; lean_object* x_221; 
x_220 = lean_ctor_get(x_174, 0);
lean_inc(x_220);
lean_dec(x_174);
x_221 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_221, 0, x_220);
x_199 = x_221;
goto block_215;
}
}
block_197:
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_183 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_183, 0, x_181);
lean_ctor_set(x_183, 1, x_182);
x_184 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__8;
x_185 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_185, 0, x_176);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_184);
lean_ctor_set(x_186, 1, x_185);
x_187 = lean_box(0);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_186);
lean_ctor_set(x_188, 1, x_187);
x_189 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_189, 0, x_183);
lean_ctor_set(x_189, 1, x_188);
x_190 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__9;
x_191 = l_Lean_Json_opt___redArg(x_178, x_190, x_177);
x_192 = l_List_appendTR___redArg(x_189, x_191);
x_193 = l_Lean_Json_mkObj(x_192);
x_194 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_194, 0, x_179);
lean_ctor_set(x_194, 1, x_193);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_195, 1, x_187);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_180);
lean_ctor_set(x_196, 1, x_195);
x_117 = x_196;
goto block_126;
}
block_215:
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_200 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_200, 0, x_198);
lean_ctor_set(x_200, 1, x_199);
x_201 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__10;
x_202 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__11;
switch (x_175) {
case 0:
{
lean_object* x_203; 
x_203 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__1;
x_179 = x_201;
x_180 = x_200;
x_181 = x_202;
x_182 = x_203;
goto block_197;
}
case 1:
{
lean_object* x_204; 
x_204 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__3;
x_179 = x_201;
x_180 = x_200;
x_181 = x_202;
x_182 = x_204;
goto block_197;
}
case 2:
{
lean_object* x_205; 
x_205 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__5;
x_179 = x_201;
x_180 = x_200;
x_181 = x_202;
x_182 = x_205;
goto block_197;
}
case 3:
{
lean_object* x_206; 
x_206 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__7;
x_179 = x_201;
x_180 = x_200;
x_181 = x_202;
x_182 = x_206;
goto block_197;
}
case 4:
{
lean_object* x_207; 
x_207 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__9;
x_179 = x_201;
x_180 = x_200;
x_181 = x_202;
x_182 = x_207;
goto block_197;
}
case 5:
{
lean_object* x_208; 
x_208 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__11;
x_179 = x_201;
x_180 = x_200;
x_181 = x_202;
x_182 = x_208;
goto block_197;
}
case 6:
{
lean_object* x_209; 
x_209 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__13;
x_179 = x_201;
x_180 = x_200;
x_181 = x_202;
x_182 = x_209;
goto block_197;
}
case 7:
{
lean_object* x_210; 
x_210 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__15;
x_179 = x_201;
x_180 = x_200;
x_181 = x_202;
x_182 = x_210;
goto block_197;
}
case 8:
{
lean_object* x_211; 
x_211 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__17;
x_179 = x_201;
x_180 = x_200;
x_181 = x_202;
x_182 = x_211;
goto block_197;
}
case 9:
{
lean_object* x_212; 
x_212 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__19;
x_179 = x_201;
x_180 = x_200;
x_181 = x_202;
x_182 = x_212;
goto block_197;
}
case 10:
{
lean_object* x_213; 
x_213 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__21;
x_179 = x_201;
x_180 = x_200;
x_181 = x_202;
x_182 = x_213;
goto block_197;
}
default: 
{
lean_object* x_214; 
x_214 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__23;
x_179 = x_201;
x_180 = x_200;
x_181 = x_202;
x_182 = x_214;
goto block_197;
}
}
}
}
}
block_126:
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
x_119 = l_Lean_Json_mkObj(x_118);
x_120 = l_Lean_Json_compress(x_119);
x_121 = lean_string_append(x_114, x_120);
lean_dec_ref(x_120);
x_122 = l_IO_FS_Stream_readRequestAs___redArg___closed__2;
x_123 = lean_string_append(x_121, x_122);
x_124 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_124, 0, x_123);
if (lean_is_scalar(x_113)) {
 x_125 = lean_alloc_ctor(1, 2, 0);
} else {
 x_125 = x_113;
 lean_ctor_set_tag(x_125, 1);
}
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_112);
return x_125;
}
}
}
else
{
uint8_t x_222; 
lean_dec_ref(x_4);
lean_dec_ref(x_3);
x_222 = !lean_is_exclusive(x_6);
if (x_222 == 0)
{
return x_6;
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_223 = lean_ctor_get(x_6, 0);
x_224 = lean_ctor_get(x_6, 1);
lean_inc(x_224);
lean_inc(x_223);
lean_dec(x_6);
x_225 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_225, 0, x_223);
lean_ctor_set(x_225, 1, x_224);
return x_225;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readRequestAs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IO_FS_Stream_readRequestAs___redArg(x_1, x_2, x_3, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readRequestAs___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IO_FS_Stream_readRequestAs___redArg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readRequestAs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IO_FS_Stream_readRequestAs(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
static lean_object* _init_l_IO_FS_Stream_readNotificationAs___redArg___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Expected JSON-RPC notification, got: '", 38, 38);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readNotificationAs___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IO_FS_Stream_readMessage(x_1, x_2, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_6, 0);
lean_dec(x_9);
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
x_13 = lean_string_dec_eq(x_11, x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_free_object(x_7);
lean_dec(x_12);
lean_dec_ref(x_4);
x_14 = l_IO_FS_Stream_readRequestAs___redArg___closed__0;
x_15 = lean_string_append(x_14, x_3);
lean_dec_ref(x_3);
x_16 = l_IO_FS_Stream_readRequestAs___redArg___closed__1;
x_17 = lean_string_append(x_15, x_16);
x_18 = lean_string_append(x_17, x_11);
lean_dec_ref(x_11);
x_19 = l_IO_FS_Stream_readRequestAs___redArg___closed__2;
x_20 = lean_string_append(x_18, x_19);
x_21 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_21);
return x_6;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec_ref(x_11);
x_22 = l_Lean_JsonRpc_instToJsonMessage___closed__0;
x_23 = l_Option_toJson___redArg(x_22, x_12);
lean_inc(x_23);
x_24 = lean_apply_1(x_4, x_23);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
lean_free_object(x_7);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = l_IO_FS_Stream_readRequestAs___redArg___closed__3;
x_28 = l_Lean_Json_compress(x_23);
x_29 = lean_string_append(x_27, x_28);
lean_dec_ref(x_28);
x_30 = l_IO_FS_Stream_readRequestAs___redArg___closed__4;
x_31 = lean_string_append(x_29, x_30);
x_32 = lean_string_append(x_31, x_3);
lean_dec_ref(x_3);
x_33 = l_IO_FS_Stream_readRequestAs___redArg___closed__5;
x_34 = lean_string_append(x_32, x_33);
x_35 = lean_string_append(x_34, x_26);
lean_dec(x_26);
lean_ctor_set_tag(x_24, 18);
lean_ctor_set(x_24, 0, x_35);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_24);
return x_6;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_36 = lean_ctor_get(x_24, 0);
lean_inc(x_36);
lean_dec(x_24);
x_37 = l_IO_FS_Stream_readRequestAs___redArg___closed__3;
x_38 = l_Lean_Json_compress(x_23);
x_39 = lean_string_append(x_37, x_38);
lean_dec_ref(x_38);
x_40 = l_IO_FS_Stream_readRequestAs___redArg___closed__4;
x_41 = lean_string_append(x_39, x_40);
x_42 = lean_string_append(x_41, x_3);
lean_dec_ref(x_3);
x_43 = l_IO_FS_Stream_readRequestAs___redArg___closed__5;
x_44 = lean_string_append(x_42, x_43);
x_45 = lean_string_append(x_44, x_36);
lean_dec(x_36);
x_46 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_46);
return x_6;
}
}
else
{
lean_object* x_47; 
lean_dec(x_23);
x_47 = lean_ctor_get(x_24, 0);
lean_inc(x_47);
lean_dec_ref(x_24);
lean_ctor_set_tag(x_7, 0);
lean_ctor_set(x_7, 1, x_47);
lean_ctor_set(x_7, 0, x_3);
return x_6;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_48 = lean_ctor_get(x_7, 0);
x_49 = lean_ctor_get(x_7, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_7);
x_50 = lean_string_dec_eq(x_48, x_3);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_49);
lean_dec_ref(x_4);
x_51 = l_IO_FS_Stream_readRequestAs___redArg___closed__0;
x_52 = lean_string_append(x_51, x_3);
lean_dec_ref(x_3);
x_53 = l_IO_FS_Stream_readRequestAs___redArg___closed__1;
x_54 = lean_string_append(x_52, x_53);
x_55 = lean_string_append(x_54, x_48);
lean_dec_ref(x_48);
x_56 = l_IO_FS_Stream_readRequestAs___redArg___closed__2;
x_57 = lean_string_append(x_55, x_56);
x_58 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_58);
return x_6;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec_ref(x_48);
x_59 = l_Lean_JsonRpc_instToJsonMessage___closed__0;
x_60 = l_Option_toJson___redArg(x_59, x_49);
lean_inc(x_60);
x_61 = lean_apply_1(x_4, x_60);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 x_63 = x_61;
} else {
 lean_dec_ref(x_61);
 x_63 = lean_box(0);
}
x_64 = l_IO_FS_Stream_readRequestAs___redArg___closed__3;
x_65 = l_Lean_Json_compress(x_60);
x_66 = lean_string_append(x_64, x_65);
lean_dec_ref(x_65);
x_67 = l_IO_FS_Stream_readRequestAs___redArg___closed__4;
x_68 = lean_string_append(x_66, x_67);
x_69 = lean_string_append(x_68, x_3);
lean_dec_ref(x_3);
x_70 = l_IO_FS_Stream_readRequestAs___redArg___closed__5;
x_71 = lean_string_append(x_69, x_70);
x_72 = lean_string_append(x_71, x_62);
lean_dec(x_62);
if (lean_is_scalar(x_63)) {
 x_73 = lean_alloc_ctor(18, 1, 0);
} else {
 x_73 = x_63;
 lean_ctor_set_tag(x_73, 18);
}
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_73);
return x_6;
}
else
{
lean_object* x_74; lean_object* x_75; 
lean_dec(x_60);
x_74 = lean_ctor_get(x_61, 0);
lean_inc(x_74);
lean_dec_ref(x_61);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_3);
lean_ctor_set(x_75, 1, x_74);
lean_ctor_set(x_6, 0, x_75);
return x_6;
}
}
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_76 = lean_ctor_get(x_6, 1);
lean_inc(x_76);
lean_dec(x_6);
x_77 = lean_ctor_get(x_7, 0);
lean_inc_ref(x_77);
x_78 = lean_ctor_get(x_7, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_79 = x_7;
} else {
 lean_dec_ref(x_7);
 x_79 = lean_box(0);
}
x_80 = lean_string_dec_eq(x_77, x_3);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_79);
lean_dec(x_78);
lean_dec_ref(x_4);
x_81 = l_IO_FS_Stream_readRequestAs___redArg___closed__0;
x_82 = lean_string_append(x_81, x_3);
lean_dec_ref(x_3);
x_83 = l_IO_FS_Stream_readRequestAs___redArg___closed__1;
x_84 = lean_string_append(x_82, x_83);
x_85 = lean_string_append(x_84, x_77);
lean_dec_ref(x_77);
x_86 = l_IO_FS_Stream_readRequestAs___redArg___closed__2;
x_87 = lean_string_append(x_85, x_86);
x_88 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_88, 0, x_87);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_76);
return x_89;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec_ref(x_77);
x_90 = l_Lean_JsonRpc_instToJsonMessage___closed__0;
x_91 = l_Option_toJson___redArg(x_90, x_78);
lean_inc(x_91);
x_92 = lean_apply_1(x_4, x_91);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
lean_dec(x_79);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 x_94 = x_92;
} else {
 lean_dec_ref(x_92);
 x_94 = lean_box(0);
}
x_95 = l_IO_FS_Stream_readRequestAs___redArg___closed__3;
x_96 = l_Lean_Json_compress(x_91);
x_97 = lean_string_append(x_95, x_96);
lean_dec_ref(x_96);
x_98 = l_IO_FS_Stream_readRequestAs___redArg___closed__4;
x_99 = lean_string_append(x_97, x_98);
x_100 = lean_string_append(x_99, x_3);
lean_dec_ref(x_3);
x_101 = l_IO_FS_Stream_readRequestAs___redArg___closed__5;
x_102 = lean_string_append(x_100, x_101);
x_103 = lean_string_append(x_102, x_93);
lean_dec(x_93);
if (lean_is_scalar(x_94)) {
 x_104 = lean_alloc_ctor(18, 1, 0);
} else {
 x_104 = x_94;
 lean_ctor_set_tag(x_104, 18);
}
lean_ctor_set(x_104, 0, x_103);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_76);
return x_105;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_91);
x_106 = lean_ctor_get(x_92, 0);
lean_inc(x_106);
lean_dec_ref(x_92);
if (lean_is_scalar(x_79)) {
 x_107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_107 = x_79;
 lean_ctor_set_tag(x_107, 0);
}
lean_ctor_set(x_107, 0, x_3);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_76);
return x_108;
}
}
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_dec_ref(x_4);
lean_dec_ref(x_3);
x_109 = lean_ctor_get(x_6, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_110 = x_6;
} else {
 lean_dec_ref(x_6);
 x_110 = lean_box(0);
}
x_111 = l_IO_FS_Stream_readNotificationAs___redArg___closed__0;
x_112 = l_Lean_JsonRpc_instToJsonMessage___closed__0;
x_113 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__3;
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_124 = lean_ctor_get(x_7, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_7, 1);
lean_inc_ref(x_125);
x_126 = lean_ctor_get(x_7, 2);
lean_inc(x_126);
lean_dec_ref(x_7);
x_127 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
if (lean_obj_tag(x_124) == 0)
{
uint8_t x_140; 
x_140 = !lean_is_exclusive(x_124);
if (x_140 == 0)
{
lean_ctor_set_tag(x_124, 3);
x_128 = x_124;
goto block_139;
}
else
{
lean_object* x_141; lean_object* x_142; 
x_141 = lean_ctor_get(x_124, 0);
lean_inc(x_141);
lean_dec(x_124);
x_142 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_142, 0, x_141);
x_128 = x_142;
goto block_139;
}
}
else
{
uint8_t x_143; 
x_143 = !lean_is_exclusive(x_124);
if (x_143 == 0)
{
lean_ctor_set_tag(x_124, 2);
x_128 = x_124;
goto block_139;
}
else
{
lean_object* x_144; lean_object* x_145; 
x_144 = lean_ctor_get(x_124, 0);
lean_inc(x_144);
lean_dec(x_124);
x_145 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_145, 0, x_144);
x_128 = x_145;
goto block_139;
}
}
block_139:
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_127);
lean_ctor_set(x_129, 1, x_128);
x_130 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
x_131 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_131, 0, x_125);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_box(0);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_129);
lean_ctor_set(x_135, 1, x_134);
x_136 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_137 = l_Lean_Json_opt___redArg(x_112, x_136, x_126);
x_138 = l_List_appendTR___redArg(x_135, x_137);
x_114 = x_138;
goto block_123;
}
}
case 1:
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_146 = lean_ctor_get(x_7, 0);
lean_inc_ref(x_146);
x_147 = lean_ctor_get(x_7, 1);
lean_inc(x_147);
lean_dec_ref(x_7);
x_148 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
x_149 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_149, 0, x_146);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
x_151 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_152 = l_Lean_Json_opt___redArg(x_112, x_151, x_147);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_150);
lean_ctor_set(x_153, 1, x_152);
x_114 = x_153;
goto block_123;
}
case 2:
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_154 = lean_ctor_get(x_7, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_7, 1);
lean_inc(x_155);
lean_dec_ref(x_7);
x_156 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
if (lean_obj_tag(x_154) == 0)
{
uint8_t x_165; 
x_165 = !lean_is_exclusive(x_154);
if (x_165 == 0)
{
lean_ctor_set_tag(x_154, 3);
x_157 = x_154;
goto block_164;
}
else
{
lean_object* x_166; lean_object* x_167; 
x_166 = lean_ctor_get(x_154, 0);
lean_inc(x_166);
lean_dec(x_154);
x_167 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_167, 0, x_166);
x_157 = x_167;
goto block_164;
}
}
else
{
uint8_t x_168; 
x_168 = !lean_is_exclusive(x_154);
if (x_168 == 0)
{
lean_ctor_set_tag(x_154, 2);
x_157 = x_154;
goto block_164;
}
else
{
lean_object* x_169; lean_object* x_170; 
x_169 = lean_ctor_get(x_154, 0);
lean_inc(x_169);
lean_dec(x_154);
x_170 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_170, 0, x_169);
x_157 = x_170;
goto block_164;
}
}
block_164:
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
x_159 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__7;
x_160 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_155);
x_161 = lean_box(0);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_158);
lean_ctor_set(x_163, 1, x_162);
x_114 = x_163;
goto block_123;
}
}
default: 
{
lean_object* x_171; uint8_t x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_195; lean_object* x_196; 
x_171 = lean_ctor_get(x_7, 0);
lean_inc(x_171);
x_172 = lean_ctor_get_uint8(x_7, sizeof(void*)*3);
x_173 = lean_ctor_get(x_7, 1);
lean_inc_ref(x_173);
x_174 = lean_ctor_get(x_7, 2);
lean_inc(x_174);
lean_dec_ref(x_7);
x_175 = l_Lean_JsonRpc_instToJsonMessage___closed__1;
x_195 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
if (lean_obj_tag(x_171) == 0)
{
uint8_t x_213; 
x_213 = !lean_is_exclusive(x_171);
if (x_213 == 0)
{
lean_ctor_set_tag(x_171, 3);
x_196 = x_171;
goto block_212;
}
else
{
lean_object* x_214; lean_object* x_215; 
x_214 = lean_ctor_get(x_171, 0);
lean_inc(x_214);
lean_dec(x_171);
x_215 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_215, 0, x_214);
x_196 = x_215;
goto block_212;
}
}
else
{
uint8_t x_216; 
x_216 = !lean_is_exclusive(x_171);
if (x_216 == 0)
{
lean_ctor_set_tag(x_171, 2);
x_196 = x_171;
goto block_212;
}
else
{
lean_object* x_217; lean_object* x_218; 
x_217 = lean_ctor_get(x_171, 0);
lean_inc(x_217);
lean_dec(x_171);
x_218 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_218, 0, x_217);
x_196 = x_218;
goto block_212;
}
}
block_194:
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_176);
lean_ctor_set(x_180, 1, x_179);
x_181 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__8;
x_182 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_182, 0, x_173);
x_183 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_183, 0, x_181);
lean_ctor_set(x_183, 1, x_182);
x_184 = lean_box(0);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_183);
lean_ctor_set(x_185, 1, x_184);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_180);
lean_ctor_set(x_186, 1, x_185);
x_187 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__9;
x_188 = l_Lean_Json_opt___redArg(x_175, x_187, x_174);
x_189 = l_List_appendTR___redArg(x_186, x_188);
x_190 = l_Lean_Json_mkObj(x_189);
x_191 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_191, 0, x_177);
lean_ctor_set(x_191, 1, x_190);
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_184);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_178);
lean_ctor_set(x_193, 1, x_192);
x_114 = x_193;
goto block_123;
}
block_212:
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_197 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_196);
x_198 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__10;
x_199 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__11;
switch (x_172) {
case 0:
{
lean_object* x_200; 
x_200 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__1;
x_176 = x_199;
x_177 = x_198;
x_178 = x_197;
x_179 = x_200;
goto block_194;
}
case 1:
{
lean_object* x_201; 
x_201 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__3;
x_176 = x_199;
x_177 = x_198;
x_178 = x_197;
x_179 = x_201;
goto block_194;
}
case 2:
{
lean_object* x_202; 
x_202 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__5;
x_176 = x_199;
x_177 = x_198;
x_178 = x_197;
x_179 = x_202;
goto block_194;
}
case 3:
{
lean_object* x_203; 
x_203 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__7;
x_176 = x_199;
x_177 = x_198;
x_178 = x_197;
x_179 = x_203;
goto block_194;
}
case 4:
{
lean_object* x_204; 
x_204 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__9;
x_176 = x_199;
x_177 = x_198;
x_178 = x_197;
x_179 = x_204;
goto block_194;
}
case 5:
{
lean_object* x_205; 
x_205 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__11;
x_176 = x_199;
x_177 = x_198;
x_178 = x_197;
x_179 = x_205;
goto block_194;
}
case 6:
{
lean_object* x_206; 
x_206 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__13;
x_176 = x_199;
x_177 = x_198;
x_178 = x_197;
x_179 = x_206;
goto block_194;
}
case 7:
{
lean_object* x_207; 
x_207 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__15;
x_176 = x_199;
x_177 = x_198;
x_178 = x_197;
x_179 = x_207;
goto block_194;
}
case 8:
{
lean_object* x_208; 
x_208 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__17;
x_176 = x_199;
x_177 = x_198;
x_178 = x_197;
x_179 = x_208;
goto block_194;
}
case 9:
{
lean_object* x_209; 
x_209 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__19;
x_176 = x_199;
x_177 = x_198;
x_178 = x_197;
x_179 = x_209;
goto block_194;
}
case 10:
{
lean_object* x_210; 
x_210 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__21;
x_176 = x_199;
x_177 = x_198;
x_178 = x_197;
x_179 = x_210;
goto block_194;
}
default: 
{
lean_object* x_211; 
x_211 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__23;
x_176 = x_199;
x_177 = x_198;
x_178 = x_197;
x_179 = x_211;
goto block_194;
}
}
}
}
}
block_123:
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
x_116 = l_Lean_Json_mkObj(x_115);
x_117 = l_Lean_Json_compress(x_116);
x_118 = lean_string_append(x_111, x_117);
lean_dec_ref(x_117);
x_119 = l_IO_FS_Stream_readRequestAs___redArg___closed__2;
x_120 = lean_string_append(x_118, x_119);
x_121 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_121, 0, x_120);
if (lean_is_scalar(x_110)) {
 x_122 = lean_alloc_ctor(1, 2, 0);
} else {
 x_122 = x_110;
 lean_ctor_set_tag(x_122, 1);
}
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_109);
return x_122;
}
}
}
else
{
uint8_t x_219; 
lean_dec_ref(x_4);
lean_dec_ref(x_3);
x_219 = !lean_is_exclusive(x_6);
if (x_219 == 0)
{
return x_6;
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_220 = lean_ctor_get(x_6, 0);
x_221 = lean_ctor_get(x_6, 1);
lean_inc(x_221);
lean_inc(x_220);
lean_dec(x_6);
x_222 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_222, 0, x_220);
lean_ctor_set(x_222, 1, x_221);
return x_222;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readNotificationAs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IO_FS_Stream_readNotificationAs___redArg(x_1, x_2, x_3, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readNotificationAs___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IO_FS_Stream_readNotificationAs___redArg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readNotificationAs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IO_FS_Stream_readNotificationAs(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
static lean_object* _init_l_IO_FS_Stream_readResponseAs___redArg___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Expected id ", 12, 12);
return x_1;
}
}
static lean_object* _init_l_IO_FS_Stream_readResponseAs___redArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", got id ", 9, 9);
return x_1;
}
}
static lean_object* _init_l_IO_FS_Stream_readResponseAs___redArg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Unexpected result '", 19, 19);
return x_1;
}
}
static lean_object* _init_l_IO_FS_Stream_readResponseAs___redArg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Expected JSON-RPC response, got: '", 34, 34);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readResponseAs___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IO_FS_Stream_readMessage(x_1, x_2, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_9 = x_6;
} else {
 lean_dec_ref(x_6);
 x_9 = lean_box(0);
}
if (lean_obj_tag(x_7) == 2)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_7);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_7, 0);
x_18 = lean_ctor_get(x_7, 1);
x_19 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_46_(x_17, x_3);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_free_object(x_7);
lean_dec(x_18);
lean_dec_ref(x_4);
x_20 = l_IO_FS_Stream_readResponseAs___redArg___closed__0;
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_32);
lean_dec_ref(x_3);
x_33 = l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__0;
x_34 = lean_string_append(x_33, x_32);
lean_dec_ref(x_32);
x_35 = lean_string_append(x_34, x_33);
x_21 = x_35;
goto block_31;
}
case 1:
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_36);
lean_dec_ref(x_3);
x_37 = l_Lean_JsonNumber_toString(x_36);
x_21 = x_37;
goto block_31;
}
default: 
{
lean_object* x_38; 
x_38 = l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__1;
x_21 = x_38;
goto block_31;
}
}
block_31:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_string_append(x_20, x_21);
lean_dec_ref(x_21);
x_23 = l_IO_FS_Stream_readResponseAs___redArg___closed__1;
x_24 = lean_string_append(x_22, x_23);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_17, 0);
lean_inc_ref(x_25);
lean_dec_ref(x_17);
x_26 = l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__0;
x_27 = lean_string_append(x_26, x_25);
lean_dec_ref(x_25);
x_28 = lean_string_append(x_27, x_26);
x_10 = x_24;
x_11 = x_28;
goto block_15;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_17, 0);
lean_inc_ref(x_29);
lean_dec_ref(x_17);
x_30 = l_Lean_JsonNumber_toString(x_29);
x_10 = x_24;
x_11 = x_30;
goto block_15;
}
}
}
else
{
lean_object* x_39; 
lean_dec(x_17);
lean_dec(x_9);
lean_inc(x_18);
x_39 = lean_apply_1(x_4, x_18);
if (lean_obj_tag(x_39) == 0)
{
uint8_t x_40; 
lean_dec(x_3);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = l_IO_FS_Stream_readResponseAs___redArg___closed__2;
x_43 = l_Lean_Json_compress(x_18);
x_44 = lean_string_append(x_42, x_43);
lean_dec_ref(x_43);
x_45 = l_IO_FS_Stream_readRequestAs___redArg___closed__5;
x_46 = lean_string_append(x_44, x_45);
x_47 = lean_string_append(x_46, x_41);
lean_dec(x_41);
lean_ctor_set_tag(x_39, 18);
lean_ctor_set(x_39, 0, x_47);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 1, x_8);
lean_ctor_set(x_7, 0, x_39);
return x_7;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_48 = lean_ctor_get(x_39, 0);
lean_inc(x_48);
lean_dec(x_39);
x_49 = l_IO_FS_Stream_readResponseAs___redArg___closed__2;
x_50 = l_Lean_Json_compress(x_18);
x_51 = lean_string_append(x_49, x_50);
lean_dec_ref(x_50);
x_52 = l_IO_FS_Stream_readRequestAs___redArg___closed__5;
x_53 = lean_string_append(x_51, x_52);
x_54 = lean_string_append(x_53, x_48);
lean_dec(x_48);
x_55 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 1, x_8);
lean_ctor_set(x_7, 0, x_55);
return x_7;
}
}
else
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_18);
x_56 = lean_ctor_get(x_39, 0);
lean_inc(x_56);
lean_dec_ref(x_39);
lean_ctor_set_tag(x_7, 0);
lean_ctor_set(x_7, 1, x_56);
lean_ctor_set(x_7, 0, x_3);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_7);
lean_ctor_set(x_57, 1, x_8);
return x_57;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_58 = lean_ctor_get(x_7, 0);
x_59 = lean_ctor_get(x_7, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_7);
x_60 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_46_(x_58, x_3);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_59);
lean_dec_ref(x_4);
x_61 = l_IO_FS_Stream_readResponseAs___redArg___closed__0;
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_73 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_73);
lean_dec_ref(x_3);
x_74 = l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__0;
x_75 = lean_string_append(x_74, x_73);
lean_dec_ref(x_73);
x_76 = lean_string_append(x_75, x_74);
x_62 = x_76;
goto block_72;
}
case 1:
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_77);
lean_dec_ref(x_3);
x_78 = l_Lean_JsonNumber_toString(x_77);
x_62 = x_78;
goto block_72;
}
default: 
{
lean_object* x_79; 
x_79 = l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__1;
x_62 = x_79;
goto block_72;
}
}
block_72:
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_string_append(x_61, x_62);
lean_dec_ref(x_62);
x_64 = l_IO_FS_Stream_readResponseAs___redArg___closed__1;
x_65 = lean_string_append(x_63, x_64);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_66 = lean_ctor_get(x_58, 0);
lean_inc_ref(x_66);
lean_dec_ref(x_58);
x_67 = l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__0;
x_68 = lean_string_append(x_67, x_66);
lean_dec_ref(x_66);
x_69 = lean_string_append(x_68, x_67);
x_10 = x_65;
x_11 = x_69;
goto block_15;
}
else
{
lean_object* x_70; lean_object* x_71; 
x_70 = lean_ctor_get(x_58, 0);
lean_inc_ref(x_70);
lean_dec_ref(x_58);
x_71 = l_Lean_JsonNumber_toString(x_70);
x_10 = x_65;
x_11 = x_71;
goto block_15;
}
}
}
else
{
lean_object* x_80; 
lean_dec(x_58);
lean_dec(x_9);
lean_inc(x_59);
x_80 = lean_apply_1(x_4, x_59);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_3);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 x_82 = x_80;
} else {
 lean_dec_ref(x_80);
 x_82 = lean_box(0);
}
x_83 = l_IO_FS_Stream_readResponseAs___redArg___closed__2;
x_84 = l_Lean_Json_compress(x_59);
x_85 = lean_string_append(x_83, x_84);
lean_dec_ref(x_84);
x_86 = l_IO_FS_Stream_readRequestAs___redArg___closed__5;
x_87 = lean_string_append(x_85, x_86);
x_88 = lean_string_append(x_87, x_81);
lean_dec(x_81);
if (lean_is_scalar(x_82)) {
 x_89 = lean_alloc_ctor(18, 1, 0);
} else {
 x_89 = x_82;
 lean_ctor_set_tag(x_89, 18);
}
lean_ctor_set(x_89, 0, x_88);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_8);
return x_90;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_59);
x_91 = lean_ctor_get(x_80, 0);
lean_inc(x_91);
lean_dec_ref(x_80);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_3);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_8);
return x_93;
}
}
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_9);
lean_dec_ref(x_4);
lean_dec(x_3);
x_94 = l_IO_FS_Stream_readResponseAs___redArg___closed__3;
x_95 = l_Lean_JsonRpc_instToJsonMessage___closed__0;
x_96 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__3;
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_107 = lean_ctor_get(x_7, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_7, 1);
lean_inc_ref(x_108);
x_109 = lean_ctor_get(x_7, 2);
lean_inc(x_109);
lean_dec_ref(x_7);
x_110 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
if (lean_obj_tag(x_107) == 0)
{
uint8_t x_123; 
x_123 = !lean_is_exclusive(x_107);
if (x_123 == 0)
{
lean_ctor_set_tag(x_107, 3);
x_111 = x_107;
goto block_122;
}
else
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_107, 0);
lean_inc(x_124);
lean_dec(x_107);
x_125 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_125, 0, x_124);
x_111 = x_125;
goto block_122;
}
}
else
{
uint8_t x_126; 
x_126 = !lean_is_exclusive(x_107);
if (x_126 == 0)
{
lean_ctor_set_tag(x_107, 2);
x_111 = x_107;
goto block_122;
}
else
{
lean_object* x_127; lean_object* x_128; 
x_127 = lean_ctor_get(x_107, 0);
lean_inc(x_127);
lean_dec(x_107);
x_128 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_128, 0, x_127);
x_111 = x_128;
goto block_122;
}
}
block_122:
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
x_113 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
x_114 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_114, 0, x_108);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
x_116 = lean_box(0);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_112);
lean_ctor_set(x_118, 1, x_117);
x_119 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_120 = l_Lean_Json_opt___redArg(x_95, x_119, x_109);
x_121 = l_List_appendTR___redArg(x_118, x_120);
x_97 = x_121;
goto block_106;
}
}
case 1:
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_129 = lean_ctor_get(x_7, 0);
lean_inc_ref(x_129);
x_130 = lean_ctor_get(x_7, 1);
lean_inc(x_130);
lean_dec_ref(x_7);
x_131 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
x_132 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_132, 0, x_129);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
x_134 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_135 = l_Lean_Json_opt___redArg(x_95, x_134, x_130);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_135);
x_97 = x_136;
goto block_106;
}
case 2:
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_137 = lean_ctor_get(x_7, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_7, 1);
lean_inc(x_138);
lean_dec_ref(x_7);
x_139 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
if (lean_obj_tag(x_137) == 0)
{
uint8_t x_148; 
x_148 = !lean_is_exclusive(x_137);
if (x_148 == 0)
{
lean_ctor_set_tag(x_137, 3);
x_140 = x_137;
goto block_147;
}
else
{
lean_object* x_149; lean_object* x_150; 
x_149 = lean_ctor_get(x_137, 0);
lean_inc(x_149);
lean_dec(x_137);
x_150 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_150, 0, x_149);
x_140 = x_150;
goto block_147;
}
}
else
{
uint8_t x_151; 
x_151 = !lean_is_exclusive(x_137);
if (x_151 == 0)
{
lean_ctor_set_tag(x_137, 2);
x_140 = x_137;
goto block_147;
}
else
{
lean_object* x_152; lean_object* x_153; 
x_152 = lean_ctor_get(x_137, 0);
lean_inc(x_152);
lean_dec(x_137);
x_153 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_153, 0, x_152);
x_140 = x_153;
goto block_147;
}
}
block_147:
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_139);
lean_ctor_set(x_141, 1, x_140);
x_142 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__7;
x_143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_138);
x_144 = lean_box(0);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_144);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_141);
lean_ctor_set(x_146, 1, x_145);
x_97 = x_146;
goto block_106;
}
}
default: 
{
lean_object* x_154; uint8_t x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_178; lean_object* x_179; 
x_154 = lean_ctor_get(x_7, 0);
lean_inc(x_154);
x_155 = lean_ctor_get_uint8(x_7, sizeof(void*)*3);
x_156 = lean_ctor_get(x_7, 1);
lean_inc_ref(x_156);
x_157 = lean_ctor_get(x_7, 2);
lean_inc(x_157);
lean_dec_ref(x_7);
x_158 = l_Lean_JsonRpc_instToJsonMessage___closed__1;
x_178 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
if (lean_obj_tag(x_154) == 0)
{
uint8_t x_196; 
x_196 = !lean_is_exclusive(x_154);
if (x_196 == 0)
{
lean_ctor_set_tag(x_154, 3);
x_179 = x_154;
goto block_195;
}
else
{
lean_object* x_197; lean_object* x_198; 
x_197 = lean_ctor_get(x_154, 0);
lean_inc(x_197);
lean_dec(x_154);
x_198 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_198, 0, x_197);
x_179 = x_198;
goto block_195;
}
}
else
{
uint8_t x_199; 
x_199 = !lean_is_exclusive(x_154);
if (x_199 == 0)
{
lean_ctor_set_tag(x_154, 2);
x_179 = x_154;
goto block_195;
}
else
{
lean_object* x_200; lean_object* x_201; 
x_200 = lean_ctor_get(x_154, 0);
lean_inc(x_200);
lean_dec(x_154);
x_201 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_201, 0, x_200);
x_179 = x_201;
goto block_195;
}
}
block_177:
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_161);
lean_ctor_set(x_163, 1, x_162);
x_164 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__8;
x_165 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_165, 0, x_156);
x_166 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
x_167 = lean_box(0);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_167);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_163);
lean_ctor_set(x_169, 1, x_168);
x_170 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__9;
x_171 = l_Lean_Json_opt___redArg(x_158, x_170, x_157);
x_172 = l_List_appendTR___redArg(x_169, x_171);
x_173 = l_Lean_Json_mkObj(x_172);
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_159);
lean_ctor_set(x_174, 1, x_173);
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_167);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_160);
lean_ctor_set(x_176, 1, x_175);
x_97 = x_176;
goto block_106;
}
block_195:
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_179);
x_181 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__10;
x_182 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__11;
switch (x_155) {
case 0:
{
lean_object* x_183; 
x_183 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__1;
x_159 = x_181;
x_160 = x_180;
x_161 = x_182;
x_162 = x_183;
goto block_177;
}
case 1:
{
lean_object* x_184; 
x_184 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__3;
x_159 = x_181;
x_160 = x_180;
x_161 = x_182;
x_162 = x_184;
goto block_177;
}
case 2:
{
lean_object* x_185; 
x_185 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__5;
x_159 = x_181;
x_160 = x_180;
x_161 = x_182;
x_162 = x_185;
goto block_177;
}
case 3:
{
lean_object* x_186; 
x_186 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__7;
x_159 = x_181;
x_160 = x_180;
x_161 = x_182;
x_162 = x_186;
goto block_177;
}
case 4:
{
lean_object* x_187; 
x_187 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__9;
x_159 = x_181;
x_160 = x_180;
x_161 = x_182;
x_162 = x_187;
goto block_177;
}
case 5:
{
lean_object* x_188; 
x_188 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__11;
x_159 = x_181;
x_160 = x_180;
x_161 = x_182;
x_162 = x_188;
goto block_177;
}
case 6:
{
lean_object* x_189; 
x_189 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__13;
x_159 = x_181;
x_160 = x_180;
x_161 = x_182;
x_162 = x_189;
goto block_177;
}
case 7:
{
lean_object* x_190; 
x_190 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__15;
x_159 = x_181;
x_160 = x_180;
x_161 = x_182;
x_162 = x_190;
goto block_177;
}
case 8:
{
lean_object* x_191; 
x_191 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__17;
x_159 = x_181;
x_160 = x_180;
x_161 = x_182;
x_162 = x_191;
goto block_177;
}
case 9:
{
lean_object* x_192; 
x_192 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__19;
x_159 = x_181;
x_160 = x_180;
x_161 = x_182;
x_162 = x_192;
goto block_177;
}
case 10:
{
lean_object* x_193; 
x_193 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__21;
x_159 = x_181;
x_160 = x_180;
x_161 = x_182;
x_162 = x_193;
goto block_177;
}
default: 
{
lean_object* x_194; 
x_194 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__23;
x_159 = x_181;
x_160 = x_180;
x_161 = x_182;
x_162 = x_194;
goto block_177;
}
}
}
}
}
block_106:
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
x_99 = l_Lean_Json_mkObj(x_98);
x_100 = l_Lean_Json_compress(x_99);
x_101 = lean_string_append(x_94, x_100);
lean_dec_ref(x_100);
x_102 = l_IO_FS_Stream_readRequestAs___redArg___closed__2;
x_103 = lean_string_append(x_101, x_102);
x_104 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_104, 0, x_103);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_8);
return x_105;
}
}
block_15:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_string_append(x_10, x_11);
lean_dec_ref(x_11);
x_13 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_13, 0, x_12);
if (lean_is_scalar(x_9)) {
 x_14 = lean_alloc_ctor(1, 2, 0);
} else {
 x_14 = x_9;
 lean_ctor_set_tag(x_14, 1);
}
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_8);
return x_14;
}
}
else
{
uint8_t x_202; 
lean_dec_ref(x_4);
lean_dec(x_3);
x_202 = !lean_is_exclusive(x_6);
if (x_202 == 0)
{
return x_6;
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_203 = lean_ctor_get(x_6, 0);
x_204 = lean_ctor_get(x_6, 1);
lean_inc(x_204);
lean_inc(x_203);
lean_dec(x_6);
x_205 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_205, 0, x_203);
lean_ctor_set(x_205, 1, x_204);
return x_205;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readResponseAs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IO_FS_Stream_readResponseAs___redArg(x_1, x_2, x_3, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readResponseAs___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IO_FS_Stream_readResponseAs___redArg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readResponseAs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IO_FS_Stream_readResponseAs(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___IO_FS_Stream_writeMessage_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec_ref(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec_ref(x_2);
x_5 = l_Lean_Json_Structured_toJson(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___IO_FS_Stream_writeMessage_spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec_ref(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeMessage(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__3;
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc_ref(x_11);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_dec_ref(x_2);
x_13 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
switch (lean_obj_tag(x_10)) {
case 0:
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_10);
if (x_26 == 0)
{
lean_ctor_set_tag(x_10, 3);
x_14 = x_10;
goto block_25;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_10, 0);
lean_inc(x_27);
lean_dec(x_10);
x_28 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_14 = x_28;
goto block_25;
}
}
case 1:
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_10);
if (x_29 == 0)
{
lean_ctor_set_tag(x_10, 2);
x_14 = x_10;
goto block_25;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_10, 0);
lean_inc(x_30);
lean_dec(x_10);
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_14 = x_31;
goto block_25;
}
}
default: 
{
lean_object* x_32; 
x_32 = lean_box(0);
x_14 = x_32;
goto block_25;
}
}
block_25:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
x_17 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_17, 0, x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_15);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_23 = l_Lean_Json_opt___at___IO_FS_Stream_writeMessage_spec__0(x_22, x_12);
x_24 = l_List_appendTR___redArg(x_21, x_23);
x_5 = x_24;
goto block_9;
}
}
case 1:
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_2);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_34 = lean_ctor_get(x_2, 0);
x_35 = lean_ctor_get(x_2, 1);
x_36 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
x_37 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set_tag(x_2, 0);
lean_ctor_set(x_2, 1, x_37);
lean_ctor_set(x_2, 0, x_36);
x_38 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_39 = l_Lean_Json_opt___at___IO_FS_Stream_writeMessage_spec__0(x_38, x_35);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_2);
lean_ctor_set(x_40, 1, x_39);
x_5 = x_40;
goto block_9;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_41 = lean_ctor_get(x_2, 0);
x_42 = lean_ctor_get(x_2, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_2);
x_43 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5;
x_44 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_44, 0, x_41);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6;
x_47 = l_Lean_Json_opt___at___IO_FS_Stream_writeMessage_spec__0(x_46, x_42);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_47);
x_5 = x_48;
goto block_9;
}
}
case 2:
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_2, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_2, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_51 = x_2;
} else {
 lean_dec_ref(x_2);
 x_51 = lean_box(0);
}
x_52 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
switch (lean_obj_tag(x_49)) {
case 0:
{
uint8_t x_61; 
x_61 = !lean_is_exclusive(x_49);
if (x_61 == 0)
{
lean_ctor_set_tag(x_49, 3);
x_53 = x_49;
goto block_60;
}
else
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_49, 0);
lean_inc(x_62);
lean_dec(x_49);
x_63 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_63, 0, x_62);
x_53 = x_63;
goto block_60;
}
}
case 1:
{
uint8_t x_64; 
x_64 = !lean_is_exclusive(x_49);
if (x_64 == 0)
{
lean_ctor_set_tag(x_49, 2);
x_53 = x_49;
goto block_60;
}
else
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_49, 0);
lean_inc(x_65);
lean_dec(x_49);
x_66 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_66, 0, x_65);
x_53 = x_66;
goto block_60;
}
}
default: 
{
lean_object* x_67; 
x_67 = lean_box(0);
x_53 = x_67;
goto block_60;
}
}
block_60:
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
if (lean_is_scalar(x_51)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_51;
 lean_ctor_set_tag(x_54, 0);
}
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__7;
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_50);
x_57 = lean_box(0);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_54);
lean_ctor_set(x_59, 1, x_58);
x_5 = x_59;
goto block_9;
}
}
default: 
{
lean_object* x_68; uint8_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_91; lean_object* x_92; 
x_68 = lean_ctor_get(x_2, 0);
lean_inc(x_68);
x_69 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_70 = lean_ctor_get(x_2, 1);
lean_inc_ref(x_70);
x_71 = lean_ctor_get(x_2, 2);
lean_inc(x_71);
lean_dec_ref(x_2);
x_91 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4;
switch (lean_obj_tag(x_68)) {
case 0:
{
uint8_t x_109; 
x_109 = !lean_is_exclusive(x_68);
if (x_109 == 0)
{
lean_ctor_set_tag(x_68, 3);
x_92 = x_68;
goto block_108;
}
else
{
lean_object* x_110; lean_object* x_111; 
x_110 = lean_ctor_get(x_68, 0);
lean_inc(x_110);
lean_dec(x_68);
x_111 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_111, 0, x_110);
x_92 = x_111;
goto block_108;
}
}
case 1:
{
uint8_t x_112; 
x_112 = !lean_is_exclusive(x_68);
if (x_112 == 0)
{
lean_ctor_set_tag(x_68, 2);
x_92 = x_68;
goto block_108;
}
else
{
lean_object* x_113; lean_object* x_114; 
x_113 = lean_ctor_get(x_68, 0);
lean_inc(x_113);
lean_dec(x_68);
x_114 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_114, 0, x_113);
x_92 = x_114;
goto block_108;
}
}
default: 
{
lean_object* x_115; 
x_115 = lean_box(0);
x_92 = x_115;
goto block_108;
}
}
block_90:
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
x_77 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__8;
x_78 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_78, 0, x_70);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_box(0);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_76);
lean_ctor_set(x_82, 1, x_81);
x_83 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__9;
x_84 = l_Lean_Json_opt___at___IO_FS_Stream_writeMessage_spec__1(x_83, x_71);
lean_dec(x_71);
x_85 = l_List_appendTR___redArg(x_82, x_84);
x_86 = l_Lean_Json_mkObj(x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_72);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_80);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_73);
lean_ctor_set(x_89, 1, x_88);
x_5 = x_89;
goto block_9;
}
block_108:
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
x_94 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__10;
x_95 = l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__11;
switch (x_69) {
case 0:
{
lean_object* x_96; 
x_96 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__1;
x_72 = x_94;
x_73 = x_93;
x_74 = x_95;
x_75 = x_96;
goto block_90;
}
case 1:
{
lean_object* x_97; 
x_97 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__3;
x_72 = x_94;
x_73 = x_93;
x_74 = x_95;
x_75 = x_97;
goto block_90;
}
case 2:
{
lean_object* x_98; 
x_98 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__5;
x_72 = x_94;
x_73 = x_93;
x_74 = x_95;
x_75 = x_98;
goto block_90;
}
case 3:
{
lean_object* x_99; 
x_99 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__7;
x_72 = x_94;
x_73 = x_93;
x_74 = x_95;
x_75 = x_99;
goto block_90;
}
case 4:
{
lean_object* x_100; 
x_100 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__9;
x_72 = x_94;
x_73 = x_93;
x_74 = x_95;
x_75 = x_100;
goto block_90;
}
case 5:
{
lean_object* x_101; 
x_101 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__11;
x_72 = x_94;
x_73 = x_93;
x_74 = x_95;
x_75 = x_101;
goto block_90;
}
case 6:
{
lean_object* x_102; 
x_102 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__13;
x_72 = x_94;
x_73 = x_93;
x_74 = x_95;
x_75 = x_102;
goto block_90;
}
case 7:
{
lean_object* x_103; 
x_103 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__15;
x_72 = x_94;
x_73 = x_93;
x_74 = x_95;
x_75 = x_103;
goto block_90;
}
case 8:
{
lean_object* x_104; 
x_104 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__17;
x_72 = x_94;
x_73 = x_93;
x_74 = x_95;
x_75 = x_104;
goto block_90;
}
case 9:
{
lean_object* x_105; 
x_105 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__19;
x_72 = x_94;
x_73 = x_93;
x_74 = x_95;
x_75 = x_105;
goto block_90;
}
case 10:
{
lean_object* x_106; 
x_106 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__21;
x_72 = x_94;
x_73 = x_93;
x_74 = x_95;
x_75 = x_106;
goto block_90;
}
default: 
{
lean_object* x_107; 
x_107 = l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__23;
x_72 = x_94;
x_73 = x_93;
x_74 = x_95;
x_75 = x_107;
goto block_90;
}
}
}
}
}
block_9:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = l_Lean_Json_mkObj(x_6);
x_8 = l_IO_FS_Stream_writeJson(x_1, x_7, x_3);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___IO_FS_Stream_writeMessage_spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_opt___at___IO_FS_Stream_writeMessage_spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeRequest___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_13; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc_ref(x_6);
x_7 = lean_ctor_get(x_3, 2);
lean_inc(x_7);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 x_8 = x_3;
} else {
 lean_dec_ref(x_3);
 x_8 = lean_box(0);
}
x_13 = l_Lean_Json_toStructured_x3f___redArg(x_1, x_7);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
lean_dec_ref(x_13);
x_14 = lean_box(0);
x_9 = x_14;
goto block_12;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
x_9 = x_13;
goto block_12;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_9 = x_17;
goto block_12;
}
}
block_12:
{
lean_object* x_10; lean_object* x_11; 
if (lean_is_scalar(x_8)) {
 x_10 = lean_alloc_ctor(0, 3, 0);
} else {
 x_10 = x_8;
}
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_6);
lean_ctor_set(x_10, 2, x_9);
x_11 = l_IO_FS_Stream_writeMessage(x_2, x_10, x_4);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeRequest(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IO_FS_Stream_writeRequest___redArg(x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeNotification___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_12; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_7 = x_3;
} else {
 lean_dec_ref(x_3);
 x_7 = lean_box(0);
}
x_12 = l_Lean_Json_toStructured_x3f___redArg(x_1, x_6);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec_ref(x_12);
x_13 = lean_box(0);
x_8 = x_13;
goto block_11;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
x_8 = x_12;
goto block_11;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_8 = x_16;
goto block_11;
}
}
block_11:
{
lean_object* x_9; lean_object* x_10; 
if (lean_is_scalar(x_7)) {
 x_9 = lean_alloc_ctor(1, 2, 0);
} else {
 x_9 = x_7;
 lean_ctor_set_tag(x_9, 1);
}
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_IO_FS_Stream_writeMessage(x_2, x_9, x_4);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeNotification(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IO_FS_Stream_writeNotification___redArg(x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeResponse___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_apply_1(x_1, x_6);
lean_ctor_set_tag(x_3, 2);
lean_ctor_set(x_3, 1, x_7);
x_8 = l_IO_FS_Stream_writeMessage(x_2, x_3, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_3);
x_11 = lean_apply_1(x_1, x_10);
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_IO_FS_Stream_writeMessage(x_2, x_12, x_4);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeResponse(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IO_FS_Stream_writeResponse___redArg(x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeResponseError(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 2);
lean_dec(x_5);
x_6 = lean_box(0);
lean_ctor_set_tag(x_2, 3);
lean_ctor_set(x_2, 2, x_6);
x_7 = l_IO_FS_Stream_writeMessage(x_1, x_2, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_8);
lean_dec(x_2);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_10);
lean_ctor_set(x_12, 2, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*3, x_9);
x_13 = l_IO_FS_Stream_writeMessage(x_1, x_12, x_3);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeResponseErrorWithData___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_7 = lean_ctor_get(x_3, 1);
lean_inc_ref(x_7);
x_8 = lean_ctor_get(x_3, 2);
lean_inc(x_8);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 x_9 = x_3;
} else {
 lean_dec_ref(x_3);
 x_9 = lean_box(0);
}
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_14; 
lean_dec_ref(x_1);
x_14 = lean_box(0);
x_10 = x_14;
goto block_13;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_8);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_8, 0);
x_17 = lean_apply_1(x_1, x_16);
lean_ctor_set(x_8, 0, x_17);
x_10 = x_8;
goto block_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_8, 0);
lean_inc(x_18);
lean_dec(x_8);
x_19 = lean_apply_1(x_1, x_18);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_10 = x_20;
goto block_13;
}
}
block_13:
{
lean_object* x_11; lean_object* x_12; 
if (lean_is_scalar(x_9)) {
 x_11 = lean_alloc_ctor(3, 3, 1);
} else {
 x_11 = x_9;
 lean_ctor_set_tag(x_11, 3);
}
lean_ctor_set(x_11, 0, x_5);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_10);
lean_ctor_set_uint8(x_11, sizeof(void*)*3, x_6);
x_12 = l_IO_FS_Stream_writeMessage(x_2, x_11, x_4);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeResponseErrorWithData(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IO_FS_Stream_writeResponseErrorWithData___redArg(x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* initialize_Init_System_IO(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Data_Json_Stream(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Data_Json_FromToJson_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_JsonRpc(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json_Stream(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json_FromToJson_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_JsonRpc_instInhabitedRequestID___closed__0 = _init_l_Lean_JsonRpc_instInhabitedRequestID___closed__0();
lean_mark_persistent(l_Lean_JsonRpc_instInhabitedRequestID___closed__0);
l_Lean_JsonRpc_instInhabitedRequestID___closed__1 = _init_l_Lean_JsonRpc_instInhabitedRequestID___closed__1();
lean_mark_persistent(l_Lean_JsonRpc_instInhabitedRequestID___closed__1);
l_Lean_JsonRpc_instInhabitedRequestID = _init_l_Lean_JsonRpc_instInhabitedRequestID();
lean_mark_persistent(l_Lean_JsonRpc_instInhabitedRequestID);
l_Lean_JsonRpc_instBEqRequestID___closed__0 = _init_l_Lean_JsonRpc_instBEqRequestID___closed__0();
lean_mark_persistent(l_Lean_JsonRpc_instBEqRequestID___closed__0);
l_Lean_JsonRpc_instBEqRequestID = _init_l_Lean_JsonRpc_instBEqRequestID();
lean_mark_persistent(l_Lean_JsonRpc_instBEqRequestID);
l_Lean_JsonRpc_instOrdRequestID___closed__0 = _init_l_Lean_JsonRpc_instOrdRequestID___closed__0();
lean_mark_persistent(l_Lean_JsonRpc_instOrdRequestID___closed__0);
l_Lean_JsonRpc_instOrdRequestID = _init_l_Lean_JsonRpc_instOrdRequestID();
lean_mark_persistent(l_Lean_JsonRpc_instOrdRequestID);
l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__0 = _init_l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__0();
lean_mark_persistent(l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__0);
l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__1 = _init_l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__1();
lean_mark_persistent(l_Lean_JsonRpc_instToStringRequestID___lam__0___closed__1);
l_Lean_JsonRpc_instToStringRequestID = _init_l_Lean_JsonRpc_instToStringRequestID();
lean_mark_persistent(l_Lean_JsonRpc_instToStringRequestID);
l_Lean_JsonRpc_instInhabitedErrorCode = _init_l_Lean_JsonRpc_instInhabitedErrorCode();
l_Lean_JsonRpc_instBEqErrorCode___closed__0 = _init_l_Lean_JsonRpc_instBEqErrorCode___closed__0();
lean_mark_persistent(l_Lean_JsonRpc_instBEqErrorCode___closed__0);
l_Lean_JsonRpc_instBEqErrorCode = _init_l_Lean_JsonRpc_instBEqErrorCode();
lean_mark_persistent(l_Lean_JsonRpc_instBEqErrorCode);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__0 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__0();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__0);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__1 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__1();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__1);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__2 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__2();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__2);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__3 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__3();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__3);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__4 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__4();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__4);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__5 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__5();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__5);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__6 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__6();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__6);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__7 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__7();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__7);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__8 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__8();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__8);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__9 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__9();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__9);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__10 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__10();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__10);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__11 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__11();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__11);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__12 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__12();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__12);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__13 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__13();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__13);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__14 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__14();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__14);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__15 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__15();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__15);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__16 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__16();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__16);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__17 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__17();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__17);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__18 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__18();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__18);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__19 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__19();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__19);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__20 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__20();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__20);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__21 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__21();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__21);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__22 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__22();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__22);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__23 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__23();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__23);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__24 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__24();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__24);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__25 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__25();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__25);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__26 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__26();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__26);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__27 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__27();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__27);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__28 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__28();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__28);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__29 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__29();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__29);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__30 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__30();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__30);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__31 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__31();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__31);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__32 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__32();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__32);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__33 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__33();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__33);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__34 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__34();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__34);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__35 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__35();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__35);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__36 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__36();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__36);
l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__37 = _init_l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__37();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode___lam__0___closed__37);
l_Lean_JsonRpc_instFromJsonErrorCode = _init_l_Lean_JsonRpc_instFromJsonErrorCode();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonErrorCode);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__0 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__0();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__0);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__1 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__1();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__1);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__2 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__2();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__2);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__3 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__3();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__3);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__4 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__4();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__4);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__5 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__5();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__5);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__6 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__6();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__6);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__7 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__7();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__7);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__8 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__8();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__8);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__9 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__9();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__9);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__10 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__10();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__10);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__11 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__11();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__11);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__12 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__12();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__12);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__13 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__13();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__13);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__14 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__14();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__14);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__15 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__15();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__15);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__16 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__16();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__16);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__17 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__17();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__17);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__18 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__18();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__18);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__19 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__19();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__19);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__20 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__20();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__20);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__21 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__21();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__21);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__22 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__22();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__22);
l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__23 = _init_l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__23();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode___lam__0___closed__23);
l_Lean_JsonRpc_instToJsonErrorCode = _init_l_Lean_JsonRpc_instToJsonErrorCode();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonErrorCode);
l_Lean_JsonRpc_instInhabitedMessage___closed__0 = _init_l_Lean_JsonRpc_instInhabitedMessage___closed__0();
lean_mark_persistent(l_Lean_JsonRpc_instInhabitedMessage___closed__0);
l_Lean_JsonRpc_instInhabitedMessage = _init_l_Lean_JsonRpc_instInhabitedMessage();
lean_mark_persistent(l_Lean_JsonRpc_instInhabitedMessage);
l_Lean_JsonRpc_instInhabitedResponseError___closed__0 = _init_l_Lean_JsonRpc_instInhabitedResponseError___closed__0();
lean_mark_persistent(l_Lean_JsonRpc_instInhabitedResponseError___closed__0);
l_Lean_JsonRpc_instCoeOutResponseErrorUnitMessage = _init_l_Lean_JsonRpc_instCoeOutResponseErrorUnitMessage();
lean_mark_persistent(l_Lean_JsonRpc_instCoeOutResponseErrorUnitMessage);
l_Lean_JsonRpc_instCoeStringRequestID = _init_l_Lean_JsonRpc_instCoeStringRequestID();
lean_mark_persistent(l_Lean_JsonRpc_instCoeStringRequestID);
l_Lean_JsonRpc_instCoeJsonNumberRequestID = _init_l_Lean_JsonRpc_instCoeJsonNumberRequestID();
lean_mark_persistent(l_Lean_JsonRpc_instCoeJsonNumberRequestID);
l_Lean_JsonRpc_RequestID_ltProp = _init_l_Lean_JsonRpc_RequestID_ltProp();
lean_mark_persistent(l_Lean_JsonRpc_RequestID_ltProp);
l_Lean_JsonRpc_instLTRequestID = _init_l_Lean_JsonRpc_instLTRequestID();
lean_mark_persistent(l_Lean_JsonRpc_instLTRequestID);
l_Lean_JsonRpc_instFromJsonRequestID___lam__0___closed__0 = _init_l_Lean_JsonRpc_instFromJsonRequestID___lam__0___closed__0();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonRequestID___lam__0___closed__0);
l_Lean_JsonRpc_instFromJsonRequestID___lam__0___closed__1 = _init_l_Lean_JsonRpc_instFromJsonRequestID___lam__0___closed__1();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonRequestID___lam__0___closed__1);
l_Lean_JsonRpc_instFromJsonRequestID = _init_l_Lean_JsonRpc_instFromJsonRequestID();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonRequestID);
l_Lean_JsonRpc_instToJsonRequestID = _init_l_Lean_JsonRpc_instToJsonRequestID();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonRequestID);
l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__0 = _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__0();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__0);
l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__1 = _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__1();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__1);
l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__2 = _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__2();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__2);
l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__3 = _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__3();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__3);
l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4 = _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__4);
l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5 = _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__5);
l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6 = _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__6);
l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__7 = _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__7();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__7);
l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__8 = _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__8();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__8);
l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__9 = _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__9();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__9);
l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__10 = _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__10();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__10);
l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__11 = _init_l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__11();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonMessage___lam__0___closed__11);
l_Lean_JsonRpc_instToJsonMessage___closed__0 = _init_l_Lean_JsonRpc_instToJsonMessage___closed__0();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonMessage___closed__0);
l_Lean_JsonRpc_instToJsonMessage___closed__1 = _init_l_Lean_JsonRpc_instToJsonMessage___closed__1();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonMessage___closed__1);
l_Lean_JsonRpc_instToJsonMessage = _init_l_Lean_JsonRpc_instToJsonMessage();
lean_mark_persistent(l_Lean_JsonRpc_instToJsonMessage);
l_Lean_JsonRpc_instFromJsonMessage___lam__0___closed__0 = _init_l_Lean_JsonRpc_instFromJsonMessage___lam__0___closed__0();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonMessage___lam__0___closed__0);
l_Lean_JsonRpc_instFromJsonMessage___lam__0___closed__1 = _init_l_Lean_JsonRpc_instFromJsonMessage___lam__0___closed__1();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonMessage___lam__0___closed__1);
l_Lean_JsonRpc_instFromJsonMessage___closed__0 = _init_l_Lean_JsonRpc_instFromJsonMessage___closed__0();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonMessage___closed__0);
l_Lean_JsonRpc_instFromJsonMessage___closed__1 = _init_l_Lean_JsonRpc_instFromJsonMessage___closed__1();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonMessage___closed__1);
l_Lean_JsonRpc_instFromJsonMessage___closed__2 = _init_l_Lean_JsonRpc_instFromJsonMessage___closed__2();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonMessage___closed__2);
l_Lean_JsonRpc_instFromJsonMessage___closed__3 = _init_l_Lean_JsonRpc_instFromJsonMessage___closed__3();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonMessage___closed__3);
l_Lean_JsonRpc_instFromJsonMessage = _init_l_Lean_JsonRpc_instFromJsonMessage();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonMessage);
l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__0 = _init_l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__0();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__0);
l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__1 = _init_l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__1();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__1);
l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__2 = _init_l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__2();
lean_mark_persistent(l_Lean_JsonRpc_instFromJsonNotification___redArg___lam__0___closed__2);
l_IO_FS_Stream_readMessage___closed__0 = _init_l_IO_FS_Stream_readMessage___closed__0();
lean_mark_persistent(l_IO_FS_Stream_readMessage___closed__0);
l_IO_FS_Stream_readMessage___closed__1 = _init_l_IO_FS_Stream_readMessage___closed__1();
lean_mark_persistent(l_IO_FS_Stream_readMessage___closed__1);
l_IO_FS_Stream_readRequestAs___redArg___closed__0 = _init_l_IO_FS_Stream_readRequestAs___redArg___closed__0();
lean_mark_persistent(l_IO_FS_Stream_readRequestAs___redArg___closed__0);
l_IO_FS_Stream_readRequestAs___redArg___closed__1 = _init_l_IO_FS_Stream_readRequestAs___redArg___closed__1();
lean_mark_persistent(l_IO_FS_Stream_readRequestAs___redArg___closed__1);
l_IO_FS_Stream_readRequestAs___redArg___closed__2 = _init_l_IO_FS_Stream_readRequestAs___redArg___closed__2();
lean_mark_persistent(l_IO_FS_Stream_readRequestAs___redArg___closed__2);
l_IO_FS_Stream_readRequestAs___redArg___closed__3 = _init_l_IO_FS_Stream_readRequestAs___redArg___closed__3();
lean_mark_persistent(l_IO_FS_Stream_readRequestAs___redArg___closed__3);
l_IO_FS_Stream_readRequestAs___redArg___closed__4 = _init_l_IO_FS_Stream_readRequestAs___redArg___closed__4();
lean_mark_persistent(l_IO_FS_Stream_readRequestAs___redArg___closed__4);
l_IO_FS_Stream_readRequestAs___redArg___closed__5 = _init_l_IO_FS_Stream_readRequestAs___redArg___closed__5();
lean_mark_persistent(l_IO_FS_Stream_readRequestAs___redArg___closed__5);
l_IO_FS_Stream_readRequestAs___redArg___closed__6 = _init_l_IO_FS_Stream_readRequestAs___redArg___closed__6();
lean_mark_persistent(l_IO_FS_Stream_readRequestAs___redArg___closed__6);
l_IO_FS_Stream_readNotificationAs___redArg___closed__0 = _init_l_IO_FS_Stream_readNotificationAs___redArg___closed__0();
lean_mark_persistent(l_IO_FS_Stream_readNotificationAs___redArg___closed__0);
l_IO_FS_Stream_readResponseAs___redArg___closed__0 = _init_l_IO_FS_Stream_readResponseAs___redArg___closed__0();
lean_mark_persistent(l_IO_FS_Stream_readResponseAs___redArg___closed__0);
l_IO_FS_Stream_readResponseAs___redArg___closed__1 = _init_l_IO_FS_Stream_readResponseAs___redArg___closed__1();
lean_mark_persistent(l_IO_FS_Stream_readResponseAs___redArg___closed__1);
l_IO_FS_Stream_readResponseAs___redArg___closed__2 = _init_l_IO_FS_Stream_readResponseAs___redArg___closed__2();
lean_mark_persistent(l_IO_FS_Stream_readResponseAs___redArg___closed__2);
l_IO_FS_Stream_readResponseAs___redArg___closed__3 = _init_l_IO_FS_Stream_readResponseAs___redArg___closed__3();
lean_mark_persistent(l_IO_FS_Stream_readResponseAs___redArg___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
