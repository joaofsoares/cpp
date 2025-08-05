#include "making_the_grade.cpp"
#include <catch2/catch_all.hpp>

TEST_CASE("Round down scores", "[round_down_scores]") {
  std::vector<double> student_scores{90.33, 40.5,  55.44, 70.05, 30.55,
                                     25.45, 80.45, 95.3,  38.7,  40.3};
  std::vector<int> expected_scores{90, 40, 55, 70, 30, 25, 80, 95, 38, 40};
  std::vector<int> result = round_down_scores(student_scores);
  REQUIRE(result == expected_scores);
}

TEST_CASE("Count failed students", "[count_failed_students]") {
  std::vector<int> student_scores{90, 40, 55, 70, 30, 25, 80, 95, 38, 40};
  int expected_count = 3;
  int result = count_failed_students(student_scores);
  REQUIRE(result == expected_count);
}

TEST_CASE("Letter grades", "[letter_grades]") {
  int highest_score = 100;
  std::array<int, 4> expected_grades{41, 56, 71, 86};
  std::array<int, 4> result = letter_grades(highest_score);
  REQUIRE(result == expected_grades);
}

TEST_CASE("Letter grades 2", "[letter_grades_2]") {
  int highest_score = 88;
  std::array<int, 4> expected_grades{41, 53, 65, 77};
  std::array<int, 4> result = letter_grades(highest_score);
  REQUIRE(result == expected_grades);
}

TEST_CASE("Student ranking", "[student_ranking]") {
  std::vector<int> student_scores{100, 99, 90, 84, 66, 53, 47};
  std::vector<std::string> student_names{"Joci",  "Sara", "Kora", "Jan",
                                         "Indra", "Bern", "Fred"};
  std::vector<std::string> expected_ranking{
      "1. Joci: 100", "2. Sara: 99", "3. Kora: 90", "4. Jan: 84",
      "5. Indra: 66", "6. Bern: 53", "7. Fred: 47"};

  std::vector<std::string> result =
      student_ranking(student_scores, student_names);

  REQUIRE(result == expected_ranking);
}

TEST_CASE("Perfect score 1", "[perfect_score_1]") {
  std::string expected_name = "Fatima";
  std::string result = perfect_score({90, 80, 100}, {"Nur", "Tony", "Fatima"});
  REQUIRE(result == expected_name);
}

TEST_CASE("Perfect score 2", "[perfect_score_2]") {
  std::string expected_name = "";
  std::string result = perfect_score({90, 80}, {"Nur", "Tony"});
  REQUIRE(result == expected_name);
}

int main() {
  int result = Catch::Session().run();
  return result;
}
