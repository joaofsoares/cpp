#include "raindrops.cpp"
#include <catch2/catch_all.hpp>

TEST_CASE("the_sound_for_1_is_1", "convert(1)") {
  REQUIRE("1" == raindrops::convert(1));
}

TEST_CASE("the_sound_for_3_is_pling", "convert(3)") {
  REQUIRE("Pling" == raindrops::convert(3));
}

TEST_CASE("the_sound_for_5_is_plang", "convert(5)") {
  REQUIRE("Plang" == raindrops::convert(5));
}

TEST_CASE("the_sound_for_7_is_plong", "convert(7)") {
  REQUIRE("Plong" == raindrops::convert(7));
}

TEST_CASE("the_sound_for_6_is_pling_as_it_has_a_factor_3", "convert(6)") {
  REQUIRE("Pling" == raindrops::convert(6));
}

TEST_CASE("2_to_the_power_3_does_not_make_a_raindrop_sound_as_3_is_the_"
          "exponent_not_the_base",
          "convert(8)") {
  REQUIRE("8" == raindrops::convert(8));
}

TEST_CASE("the_sound_for_9_is_pling_as_it_has_a_factor_3", "convert(9)") {
  REQUIRE("Pling" == raindrops::convert(9));
}

TEST_CASE("the_sound_for_10_is_plang_as_it_has_a_factor_5", "convert(10)") {
  REQUIRE("Plang" == raindrops::convert(10));
}

TEST_CASE("the_sound_for_14_is_plong_as_it_has_a_factor_of_7", "convert(14)") {
  REQUIRE("Plong" == raindrops::convert(14));
}

TEST_CASE("the_sound_for_15_is_plingplang_as_it_has_factors_3_and_5",
          "convert(15)") {
  REQUIRE("PlingPlang" == raindrops::convert(15));
}

TEST_CASE("the_sound_for_21_is_plingplong_as_it_has_factors_3_and_7",
          "convert(21)") {
  REQUIRE("PlingPlong" == raindrops::convert(21));
}

TEST_CASE("the_sound_for_25_is_plang_as_it_has_a_factor_5", "convert(25)") {
  REQUIRE("Plang" == raindrops::convert(25));
}

TEST_CASE("the_sound_for_27_is_pling_as_it_has_a_factor_3", "convert(27)") {
  REQUIRE("Pling" == raindrops::convert(27));
}

TEST_CASE("the_sound_for_35_is_plangplong_as_it_has_factors_5_and_7",
          "convert(35)") {
  REQUIRE("PlangPlong" == raindrops::convert(35));
}

TEST_CASE("the_sound_for_49_is_plong_as_it_has_a_factor_7", "convert(49)") {
  REQUIRE("Plong" == raindrops::convert(49));
}

TEST_CASE("the_sound_for_52_is_52", "convert(52)") {
  REQUIRE("52" == raindrops::convert(52));
}

TEST_CASE("the_sound_for_105_is_plingplangplong_as_it_has_factors_3_5_and_7",
          "convert(105)") {
  REQUIRE("PlingPlangPlong" == raindrops::convert(105));
}

TEST_CASE("the_sound_for_3125_is_plang_as_it_has_a_factor_5", "convert(3125)") {
  REQUIRE("Plang" == raindrops::convert(3125));
}

int main() {
  int result = Catch::Session().run();
  return result;
}
