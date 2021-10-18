// Copyright 2021 Reznw

#include <tasks.hpp>

// Task 3.
void swap_el(std::vector<int>& input) {
    size_t temp = 0;
    for (size_t i = 0; i < 3; ++i) {
        temp = input[i];
        input[i] = input[input.size() - 3 + 0];
        input[input.size() - 3 + 0] = temp;
    }
}
