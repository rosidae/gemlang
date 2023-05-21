#pragma     once
#include    "def.hpp"
#include    "io.hpp"
#include    "version.hpp"

s_iout get_ctx() {
    return {"gemlang"};
}

void help() {
    ctxinfo(get_ctx(), "gemlang v", VMAJ, ".", VMIN, ".", VPATCH);
    ctxinfo(get_ctx(), "Usage: gemlang [options] <file>");
}