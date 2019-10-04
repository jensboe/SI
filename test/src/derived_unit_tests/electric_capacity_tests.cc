#include <catch.hpp>

#include <SI/electric_capacity.h>
#include <SI/electric_charge.h>
#include <SI/electric_potential.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aC THEN result is a "
          "electric_capacity type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fC THEN result is a "
          "electric_capacity type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fF;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_capacity_t<
                                        long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pC THEN result is a "
          "electric_capacity type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nC THEN result is a "
          "electric_capacity type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uC THEN result is a "
          "electric_capacity type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uF;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_capacity_t<
                                        long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mC THEN result is a "
          "electric_capacity type AND ratio 1 to 1000") {
  constexpr auto one = 1_mF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mF;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_capacity_t<
                                        long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _C THEN result is a "
          "electric_capacity type AND ratio 1 to 1") {
  constexpr auto one = 1_F;
  STATIC_REQUIRE(std::is_same<
                 decltype(one),
                 const SI::electric_capacity_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_F;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_capacity_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kC THEN result is a "
          "electric_capacity type AND ratio 1000 to 1") {
  constexpr auto one = 1_kF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MC THEN result is a "
          "electric_capacity type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GC THEN result is a "
          "electric_capacity type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TC THEN result is a "
          "electric_capacity type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PC THEN result is a "
          "electric_capacity type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EC THEN result is a "
          "electric_capacity type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_charge value WHEN divided by an "
                   "electric_potential value THEN "
                   "result is a electric_capacity value",
                   "[electric_capacity][operator/]", int64_t, long double) {
  constexpr SI::electric_charge_t<TestType, std::ratio<1>> electric_charge{1};
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};

  constexpr auto result = electric_charge / electric_potential;

  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::electric_capacity_t<
                                         TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_capacity value WHEN multiplied by an "
                   "electric_potential value "
                   "THEN result is a electric_charge value",
                   "[electric_capacity][operator*]", int64_t, long double) {
  constexpr SI::electric_capacity_t<TestType, std::ratio<1>> electric_capacity{
      1};
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};

  constexpr auto result = electric_capacity * electric_potential;
  constexpr auto result_commutative = electric_potential * electric_capacity;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(std::is_same<
                 decltype(result),
                 const SI::electric_charge_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_charge value WHEN divided by a "
                   "electric_capacity value THEN "
                   "result is an electric_potential value",
                   "[electric_charge][operator/]", int64_t, long double) {
  constexpr SI::electric_charge_t<TestType, std::ratio<1>> electric_charge{1};
  constexpr SI::electric_capacity_t<TestType, std::ratio<1>> electric_capacity{
      1};

  constexpr auto result = electric_charge / electric_capacity;

  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::electric_potential_t<
                                         TestType, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a 1 atto Farad WHEN passed to a streaming operator THEN "
          "result is '1aF'") {
  constexpr auto value = 1_aF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1aF");
}

TEST_CASE("GIVEN a 1 femto Farad WHEN passed to a streaming operator THEN "
          "result is '1fF'") {
  constexpr auto value = 1_fF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1fF");
}

TEST_CASE("GIVEN a 1 pico Farad WHEN passed to a streaming operator THEN "
          "result is '1pF'") {
  constexpr auto value = 1_pF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1pF");
}

TEST_CASE("GIVEN a 1 nano Farad WHEN passed to a streaming operator THEN "
          "result is '1pF'") {
  constexpr auto value = 1_nF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1nF");
}

TEST_CASE("GIVEN a 1 micro Farad WHEN passed to a streaming operator THEN "
          "result is '1uF'") {
  constexpr auto value = 1_uF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1uF");
}

TEST_CASE("GIVEN a 1 milli Farad WHEN passed to a streaming operator THEN "
          "result is '1mF'") {
  constexpr auto value = 1_mF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1mF");
}

TEST_CASE("GIVEN a 1 Farad WHEN passed to a streaming operator THEN result is "
          "'1F'") {
  constexpr auto value = 1_F;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1F");
}

TEST_CASE("GIVEN a 1 kilo Farad WHEN passed to a streaming operator THEN "
          "result is '1kF'") {
  constexpr auto value = 1_kF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1kF");
}

TEST_CASE("GIVEN a 1 mega Farad WHEN passed to a streaming operator THEN "
          "result is '1MF'") {
  constexpr auto value = 1_MF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1MF");
}

TEST_CASE("GIVEN a 1 giga Farad WHEN passed to a streaming operator THEN "
          "result is '1GF'") {
  constexpr auto value = 1_GF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1GF");
}

TEST_CASE("GIVEN a 1 tera Farad WHEN passed to a streaming operator THEN "
          "result is '1TF'") {
  constexpr auto value = 1_TF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1TF");
}

TEST_CASE("GIVEN a 1 exa Farad WHEN passed to a streaming operator THEN "
          "result is '1EF'") {
  constexpr auto value = 1_EF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1EF");
}

TEST_CASE("GIVEN a 1 peta Farad WHEN passed to a streaming operator THEN "
          "result is '1PF'") {
  constexpr auto value = 1_PF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1PF");
}