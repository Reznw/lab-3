// Copyright 2020 Your Name <your_email>

#include "tasks.hpp"

#include <gtest/gtest.h>

// Task 1.
TEST(Task_1_1, Test) {
  std::vector<int> v = {1, 2, 3, 4};
  multi_2(v);
  EXPECT_EQ(2, v[0]);
  EXPECT_EQ(4, v[1]);
  EXPECT_EQ(6, v[2]);
  EXPECT_EQ(8, v[3]);

  std::vector<int> v1 = {-1, -2, 3, 4};
  multi_2(v1);
  EXPECT_EQ(-2, v1[0]);
  EXPECT_EQ(-4, v1[1]);
  EXPECT_EQ(6, v1[2]);
  EXPECT_EQ(8, v1[3]);
}

TEST(Task_1_2, Test) {
  std::vector<int> v = {1, 2, 3, 4};
  reduce_a(v, 1);
  EXPECT_EQ(0, v[0]);
  EXPECT_EQ(1, v[1]);
  EXPECT_EQ(2, v[2]);
  EXPECT_EQ(3, v[3]);

  std::vector<int> v1 = {-1, -2, 3, 4};
  reduce_a(v1, -1);
  EXPECT_EQ(-2, v1[0]);
  EXPECT_EQ(-3, v1[1]);
  EXPECT_EQ(2, v1[2]);
  EXPECT_EQ(3, v1[3]);
}

TEST(Task_1_3, Test) {
  std::vector<int> v = {1, 2, 3, 4};
  div_on_first(v);
  EXPECT_EQ(1, v[0]);
  EXPECT_EQ(2, v[1]);
  EXPECT_EQ(3, v[2]);
  EXPECT_EQ(4, v[3]);

  std::vector<int> v1 = {-2, -2, 6, 4};
  div_on_first(v1);
  EXPECT_EQ(1, v1[0]);
  EXPECT_EQ(1, v1[1]);
  EXPECT_EQ(-3, v1[2]);
  EXPECT_EQ(-2, v1[3]);
}

// Task 2.
TEST(Task_2_1, Test) {
  std::vector<int> v = {1, 2, 3, 4};
  EXPECT_EQ(10, sum(v));

  std::vector<int> v1 = {-2, -2, 6, 4};
  EXPECT_EQ(6, sum(v1));
}

TEST(Task_2_2, Test) {
  std::vector<int> v = {1, 2, 3, 4};
  EXPECT_EQ(30, square_sum(v));

  std::vector<int> v1 = {-2, 0, 6, 4};
  EXPECT_EQ(56, square_sum(v1));
}

TEST(Task_2_3, Test) {
  std::vector<int> v = {1, 2, 3, 4, -1, -2, -3, -4};
  EXPECT_EQ(7, sum_six(v));

  std::vector<int> v1 = {1, 2, 3, 4, -10, 0, -3, -4};
  EXPECT_EQ(0, sum_six(v1));
}

TEST(Task_2_4, Test) {
  std::vector<int> v = {1, 2, 3, 4, -1, -2, -3, -4};
  EXPECT_EQ(7, sum_k(v, 0, 5));

  std::vector<int> v1 = {1, 2, 3, 4, -10, 0, -3, -4};
  EXPECT_EQ(0, sum_k(v1, 5, 5));
}

TEST(Task_2_5, Test) {
  std::vector<int> v = {7, 2, 3, 4};
  EXPECT_EQ(4, mean(v));

  std::vector<int> v1 = {0, 0, 0, 4};
  EXPECT_EQ(1, mean(v1));
}

TEST(Task_2_6, Test) {
  std::vector<int> v = {7, 2, 3, 4};
  EXPECT_EQ(4, mean_k(v, 0, 3));

  std::vector<int> v1 = {0, 0, 0, 4};
  EXPECT_EQ(4, mean_k(v1, 3, 3));
}

// Task 3.
TEST(Task_3, Test) {
  std::vector<int> v = {7, 2, 3, 4, 7, 2, 3, 4, 7, 2,
                        3, 4, 7, 2, 3, 4, 7, 2, 3, 4};
  swap_el(v);
  std::vector<int> ev = {2, 3, 4, 4, 7, 2, 3, 4, 7, 2,
                         3, 4, 7, 2, 3, 4, 7, 7, 2, 3};
  EXPECT_EQ(ev, v);
}

// Task 4.
TEST(Task_4_1, Test) {
  std::vector<int> v = {1, 2, 3, 4, 5, -1, 6, -1};
  remove_negative(v);
  std::vector<int> ev = {1, 2, 3, 4, 5, 6, -1};
  EXPECT_EQ(ev, v);

  remove_negative(v);
  std::vector<int> ev1 = {1, 2, 3, 4, 5, 6};
  EXPECT_EQ(ev1, v);

  remove_negative(v);
  EXPECT_EQ(ev1, v);
}

// Task 4.
TEST(Task_4_2, Test) {
  std::vector<int> v = {1, 3, 4, 5, -1, 6, -1};
  remove_last_even(v);
  std::vector<int> ev = {1, 3, 4, 5, -1, -1};
  EXPECT_EQ(ev, v);

  remove_last_even(v);
  std::vector<int> ev1 = {1, 3, 5, -1, -1};
  EXPECT_EQ(ev1, v);

  remove_last_even(v);
  EXPECT_EQ(ev1, v);
}

// Task 5.
TEST(Task_5, Test) {
  EXPECT_TRUE(name_is_even("Moscow"));
  EXPECT_TRUE(name_is_even("Samara"));

  EXPECT_FALSE(name_is_even("Sochi"));
  EXPECT_FALSE(name_is_even("Adler"));
}

// Task 6.
TEST(Task_6, Test) {
  EXPECT_FALSE(first_is_longer("Ivanov", "Petrov"));
  EXPECT_TRUE(first_is_longer("Ivanov", "Dzuba"));
}

// Task 7.
TEST(Task_7, Test) {
  std::string longest;
  std::string shortest;

  longest_shortest("abc", "a", "ab", longest, shortest);

  EXPECT_EQ(std::string("abc"), longest);
  EXPECT_EQ(std::string("a"), shortest);

  longest_shortest("a", "ab", "abc", longest, shortest);

  EXPECT_EQ(std::string("abc"), longest);
  EXPECT_EQ(std::string("a"), shortest);
}

// Task 8.
TEST(Task_8, Test) {
  EXPECT_EQ(std::string("bcaa"), sub_str("abcaab", 1, 4));
  EXPECT_EQ(std::string("abcaab"), sub_str("abcaab", 0, 14));
  EXPECT_EQ(std::string("a"), sub_str("abcaab", 0, 0));
  EXPECT_EQ(std::string(""), sub_str("abcaab", 0, -1));
}

// Task 9.
TEST(Task_9, Test) {
  std::string word = "a";
  add_stars(word);
  EXPECT_EQ(std::string("*a*"), word);
  add_stars(word);
  EXPECT_EQ(std::string("****a****"), word);
  add_stars(word);
  EXPECT_EQ(std::string("*************a*************"), word);
}

// Task 10.
TEST(Task_10, Test) {
  EXPECT_EQ(50, percent_of_a("abra"));
  EXPECT_EQ(75, percent_of_a("aaaabraa"));
  EXPECT_EQ(0, percent_of_a("vfcd"));
}

// Task 11.
TEST(Task_11, Test) {
  EXPECT_EQ(std::string("Can you a a a as a aner a a a a?"), replace_can("a"));
  EXPECT_EQ(std::string("Can you the a the as a thener the the a the?"),
            replace_can("the"));
  EXPECT_EQ(std::string("Can you  a  as a ner   a ?"), replace_can(""));
}
