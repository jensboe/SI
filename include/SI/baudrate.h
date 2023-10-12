/**
 * This file is part of "SI" version 2.5.3
 * A header only c++ library that provides type safety and user defined literals
 * for handling physical values defined in the International System of
 * Units
 *
 * https://github.com/bernedom/SI
 *
 * SPDX-License-Identifier: MIT
 *
 **/
#pragma once

#include "detail/unit.h"
#include "detail/unit_symbol.h"
#include "time.h"

namespace SI {
/// @todo find a way to add alternative dimension symbol  (bd) to baudrate
template <typename _type, class _ratio = std::ratio<1>>
using baudrate_t = detail::time_base_t<std::ratio<-1>, _type, _ratio>;

/// specific units
template <typename _type> using atto_baud_t = baudrate_t<_type, std::atto>;
template <typename _type> using femto_baud_t = baudrate_t<_type, std::femto>;
template <typename _type> using pico_baud_t = baudrate_t<_type, std::pico>;
template <typename _type> using nano_baud_t = baudrate_t<_type, std::nano>;
template <typename _type> using micro_baud_t = baudrate_t<_type, std::micro>;
template <typename _type> using milli_baud_t = baudrate_t<_type, std::milli>;
template <typename _type> using baud_t = baudrate_t<_type, std::ratio<1>>;
template <typename _type> using kilo_baud_t = baudrate_t<_type, std::kilo>;
template <typename _type> using mega_baud_t = baudrate_t<_type, std::mega>;
template <typename _type> using giga_baud_t = baudrate_t<_type, std::giga>;
template <typename _type> using tera_baud_t = baudrate_t<_type, std::tera>;
template <typename _type> using peta_baud_t = baudrate_t<_type, std::peta>;
template <typename _type> using exa_baud_t = baudrate_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'B', std::ratio<1>, std::ratio<-1>>
    : SI::detail::unit_symbol_impl<'B', 'd'> {};

template <typename _ratio>
struct unit_symbol<'B', _ratio, std::ratio<-1>>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'B',
                                   'd'> {};

inline namespace literals {
template <char... _digits> constexpr atto_baud_t<int64_t> operator""_aBd() {
  return atto_baud_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_baud_t<int64_t> operator""_fBd() {
  return femto_baud_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_baud_t<int64_t> operator""_pBd() {
  return pico_baud_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_baud_t<int64_t> operator""_nBd() {
  return nano_baud_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_baud_t<int64_t> operator""_uBd() {
  return micro_baud_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_baud_t<int64_t> operator""_mBd() {
  return milli_baud_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr baud_t<int64_t> operator""_Bd() {
  return baud_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_baud_t<int64_t> operator""_kBd() {
  return kilo_baud_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_baud_t<int64_t> operator""_MBd() {
  return mega_baud_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_baud_t<int64_t> operator""_GBd() {
  return giga_baud_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_baud_t<int64_t> operator""_TBd() {
  return tera_baud_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_baud_t<int64_t> operator""_PBd() {
  return peta_baud_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_baud_t<int64_t> operator""_EBd() {
  return exa_baud_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_baud_t<long double> operator""_aBd(long double value) {
  return atto_baud_t<long double>{value};
}

constexpr femto_baud_t<long double> operator""_fBd(long double value) {
  return femto_baud_t<long double>{value};
}

constexpr pico_baud_t<long double> operator""_pBd(long double value) {
  return pico_baud_t<long double>{value};
}

constexpr nano_baud_t<long double> operator""_nBd(long double value) {
  return nano_baud_t<long double>{value};
}

constexpr micro_baud_t<long double> operator""_uBd(long double value) {
  return micro_baud_t<long double>{value};
}

constexpr milli_baud_t<long double> operator""_mBd(long double value) {
  return milli_baud_t<long double>{value};
}

constexpr baud_t<long double> operator""_Bd(long double value) {
  return baud_t<long double>{value};
}

constexpr kilo_baud_t<long double> operator""_kBd(long double value) {
  return kilo_baud_t<long double>{value};
}

constexpr mega_baud_t<long double> operator""_MBd(long double value) {
  return mega_baud_t<long double>{value};
}

constexpr giga_baud_t<long double> operator""_GBd(long double value) {
  return giga_baud_t<long double>{value};
}

constexpr tera_baud_t<long double> operator""_TBd(long double value) {
  return tera_baud_t<long double>{value};
}

constexpr peta_baud_t<long double> operator""_PBd(long double value) {
  return peta_baud_t<long double>{value};
}

constexpr exa_baud_t<long double> operator""_EBd(long double value) {
  return exa_baud_t<long double>{value};
}

} // namespace literals
} // namespace SI
