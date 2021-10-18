// Copyright 2021 Reznw

#include <tasks.hpp>


// Task 1.
void multi_2(std::vector<int>& input) {
    for (size_t i = 0; i < input.size(); ++i) {
        input[i] *= 2;
    }
}

void reduce_a(std::vector<int>& input, int a) {
     for (size_t i = 0; i < input.size(); ++i) {
        input[i] -= a;
    }
}

void div_on_first(std::vector<int>& input) {
     for (size_t i = 0; i < input.size(); ++i) {
        input[i] /= 2;
    }
}
