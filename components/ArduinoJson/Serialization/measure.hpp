// ArduinoJson - arduinojson.org
// Copyright Benoit Blanchon 2014-2020
// MIT License

#pragma once

#include <Serialization/Writers/DummyWriter.hpp>

namespace ARDUINOJSON_NAMESPACE {

template <template <typename> class TSerializer, typename TSource>
size_t measure(const TSource &source) {
  DummyWriter dp;
  TSerializer<DummyWriter> serializer(dp);
  return source.accept(serializer);
}

}  // namespace ARDUINOJSON_NAMESPACE