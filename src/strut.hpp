#pragma     once
#include    "def.hpp"

constexpr cstr ws_trim(cstr in) {
    cstr ret = in;
    while ( *ret==' ' || *ret=='\t' ) {
        ret++;
    }
}