#ifndef DESC
#define DESC
#include <iostream>
#include <cstdint>
#include <vector>
#include <cassert>
#include <map>
namespace ExS
{
    std::map<char, size_t> operator_map_order = {
        {'+', 0},
        {'/', 1},
        {'*', 2},
        {'^', 3},
        {'(', 4},
    };

    typedef std::vector<size_t> PositionVector;
    typedef std::map<size_t, char> IntCharMap;
    bool is_a_number(const char &character);
    bool string_a_number(const std::string &expr);
    bool is_an_operator(const char &character);
    bool is_a_minus_or_dot(const char &character);
    void loop(std::string &expr);
    size_t choose_operator(const ExS::IntCharMap &operator_map);
    IntCharMap verify_and_collect_pos(const std::string &expr);
}
#endif