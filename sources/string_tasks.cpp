// Copyright 2021 Reznw

#include <tasks.hpp>

// Task 5.
bool name_is_even(const std::string& name) {
    return !(name.size() % 2 ==0);
}

// Task 6.
bool first_is_longer(const std::string& name_one, const std::string& name_two) {
    return name_one.size() > name_two.size();
}

// Task 7.
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest) {
    if ((name_one.size() > name_two.size())
        & (name_one.size() > name_three.size())) {
        the_longest = name_one;
        if (name_two.size() > name_three.size()) {
            the_shortest = name_three;
        } else {
            the_shortest = name_two;
        }
    } else if (name_two.size() > name_three.size()) {
        the_longest = name_two;
        if (name_one.size() > name_three.size()) {
            the_shortest = name_three;
        } else {
            the_shortest = name_one;
        }
    } else {
        the_longest = name_three;
        if (name_one.size() > name_two.size()) {
            the_shortest = name_two;
        } else {
            the_shortest = name_one;
        }
    }
}

// Task 8.
std::string sub_str(const std::string& word, int m, int n) {
    std::string new_str;
    for (int i = m; i <= n; ++i) {
            new_str.push_back(word[i]);
        }
    return std::string(new_str);
}

// Task 9.
void add_stars(std::string& word) {
    for (size_t i = 0; i < word.size(); ++i) {
        word.push_back('*');
        word.insert(word.begin(), '*');
        }
}

// Task 10.
int percent_of_a(const std::string& word) {
    size_t n = 0;
    for (size_t i = 0; i < word.size(); ++i) {
        if (word[i] == 'a') {
            ++n;
        }
    }
    size_t perc = 100 * (n / word.size());
    return perc;
}

// Task 11.
std::string replace_can(const std::string& new_word) {
    std::string str = "Can you " + new_word + " a " + new_word +
        " as a canner " + new_word + " " + new_word + " a can?";
    return std::string(str);
}
