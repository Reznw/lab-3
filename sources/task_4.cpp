// Copyright 2021 Reznw
#include <tasks.hpp>

// Task 4.
void remove_negative(std::vector<int>& input) {
    for (size_t i = 0; i < input.size(); ++i) {
        if (input[i] < 0) {
            input.erase(input.begin() + i);
            break;
        }
    }
}

void remove_last_even(std::vector<int>& input) {
    size_t even_number;
    for (size_t i = 0; i < input.size(); ++i) {
        if (input[i] % 2 == 0) {
            even_number = i;
        }
    }
    input.erase(input.begin() + even_number);
}
