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

int sum_k(const std::vector<int>& input, int k1, int k2) {
    int sumall = 0;
    for (int i = k1; i <= k2; ++i) {
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

int mean_k(const std::vector<int>& input, int s1, int s2) {
    int sumall = 0;
    for (int i = s1; i <= s2; ++i) {
        sumall += input[i];
    }
    int average = sumall / (s2 -s1 + 1);
    return average;
}
