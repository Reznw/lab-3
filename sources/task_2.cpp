// Copyright 2021 Reznw

#include <tasks.hpp>

// Task 2.
int sum(const std::vector<int>& input) {
    size_t sumall = 0;
    for (size_t i = 0; i < input.size(); ++i) {
        sumall += input[i];
    }
    return sumall;
}

int square_sum(const std::vector<int>& input) {
    size_t sumall = 0;
    for (size_t i = 0; i < input.size(); ++i) {
        sumall += (input[i] * input[i]);
    }
    return sumall;
}

int sum_six(const std::vector<int>& input) {
    size_t sumall = 0;
    for (size_t i = 0; i < 6; ++i) {
        sumall += input[i];
    }
    return sumall;
}

int sum_k(const std::vector<int>& input, size_t k1, size_t k2) {
    size_t sumall = 0;
    for (size_t i = k1; i <= k2; ++i) {
        sumall += input[i];
    }
    return sumall;
}

int mean(const std::vector<int>& input) {
    size_t sumall = 0;
    for (size_t i = 0; i < input.size(); ++i) {
        sumall += input[i];
    }
    size_t average = sumall / input.size();
    return average;
}

int mean_k(const std::vector<int>& input, size_t s1, size_t s2) {
    size_t sumall = 0;
    for (size_t i = s1; i <= s2; ++i) {
        sumall += input[i];
    }
    size_t average = sumall / (s2 -s1 + 1);
    return average;
}
