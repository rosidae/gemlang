#pragma     once
#include    "def.hpp"

const_str ws_trim(
    const_str in
) {
    std::string ret = in;
    ret.erase(0, ret.find_first_not_of(" \t\n\r\f\v"));
    ret.erase(ret.find_last_not_of(" \t\n\r\f\v") + 1);
    return ret.c_str();
}