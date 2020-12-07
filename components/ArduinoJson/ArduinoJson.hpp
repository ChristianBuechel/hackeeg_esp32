// ArduinoJson - arduinojson.org
// Copyright Benoit Blanchon 2014-2020
// MIT License

#pragma once

#include "Configuration.hpp"

#if !ARDUINOJSON_DEBUG
#ifdef __clang__
#pragma clang system_header
#elif defined __GNUC__
#pragma GCC system_header
#endif
#endif

#include "Array/ArrayRef.hpp"
#include "Object/ObjectRef.hpp"
#include "Variant/VariantRef.hpp"

#include "Document/DynamicJsonDocument.hpp"
#include "Document/StaticJsonDocument.hpp"

#include "Array/ArrayImpl.hpp"
#include "Array/ElementProxy.hpp"
#include "Array/Utilities.hpp"
#include "Collection/CollectionImpl.hpp"
#include "Object/MemberProxy.hpp"
#include "Object/ObjectImpl.hpp"
#include "Variant/VariantAsImpl.hpp"
#include "Variant/VariantCompare.hpp"
#include "Variant/VariantImpl.hpp"

#include "Json/JsonDeserializer.hpp"
#include "Json/JsonSerializer.hpp"
#include "Json/PrettyJsonSerializer.hpp"
#include "MsgPack/MsgPackDeserializer.hpp"
#include "MsgPack/MsgPackSerializer.hpp"

#include "compatibility.hpp"

namespace ArduinoJson {
typedef ARDUINOJSON_NAMESPACE::ArrayConstRef JsonArrayConst;
typedef ARDUINOJSON_NAMESPACE::ArrayRef JsonArray;
typedef ARDUINOJSON_NAMESPACE::Float JsonFloat;
typedef ARDUINOJSON_NAMESPACE::Integer JsonInteger;
typedef ARDUINOJSON_NAMESPACE::ObjectConstRef JsonObjectConst;
typedef ARDUINOJSON_NAMESPACE::ObjectRef JsonObject;
typedef ARDUINOJSON_NAMESPACE::Pair JsonPair;
typedef ARDUINOJSON_NAMESPACE::PairConst JsonPairConst;
typedef ARDUINOJSON_NAMESPACE::String JsonString;
typedef ARDUINOJSON_NAMESPACE::UInt JsonUInt;
typedef ARDUINOJSON_NAMESPACE::VariantConstRef JsonVariantConst;
typedef ARDUINOJSON_NAMESPACE::VariantRef JsonVariant;
using ARDUINOJSON_NAMESPACE::BasicJsonDocument;
using ARDUINOJSON_NAMESPACE::copyArray;
using ARDUINOJSON_NAMESPACE::DeserializationError;
using ARDUINOJSON_NAMESPACE::deserializeJson;
using ARDUINOJSON_NAMESPACE::deserializeMsgPack;
using ARDUINOJSON_NAMESPACE::DynamicJsonDocument;
using ARDUINOJSON_NAMESPACE::JsonDocument;
using ARDUINOJSON_NAMESPACE::measureJson;
using ARDUINOJSON_NAMESPACE::serialized;
using ARDUINOJSON_NAMESPACE::serializeJson;
using ARDUINOJSON_NAMESPACE::serializeJsonPretty;
using ARDUINOJSON_NAMESPACE::serializeMsgPack;
using ARDUINOJSON_NAMESPACE::StaticJsonDocument;

namespace DeserializationOption {
using ARDUINOJSON_NAMESPACE::Filter;
using ARDUINOJSON_NAMESPACE::NestingLimit;
}  // namespace DeserializationOption
}  // namespace ArduinoJson
