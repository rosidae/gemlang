#pragma     once
#include    "def.hpp"

std::vector<char*> splitd(
    const_str   str, 
    const_str   delim
) {
    std::vector<char*> ret;
    char* tok = strtok((char*)str, delim);
    while (tok != NULL) {
        ret.push_back(tok);
        tok = strtok(NULL, delim);
    }
    return ret;
}

