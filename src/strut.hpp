#pragma     once
#include    "def.hpp"

constexpr const_str ws_trim(
    const_str in
) {
    char* ret = (char*)in;
    while ( *ret==' ' || *ret=='\t' ) {
        ret++;
    }
    while(ret[std::strlen(ret)-1]==' ' || ret[std::strlen(ret)-1]=='\t') {
        ret[std::strlen(ret)-1] = '\0';
    }
    return ret;
}