#pragma once
#include "def.hpp"
#include "iout.hpp"
#include "version.hpp"
#include <string>

s_iout get_ctx() {
    return {"gemlang"};
}

void help() {
    olog(get_ctx(), "gemlang v", VMAJ, ".", VMIN, ".", VPATCH, "\n");
    olog(get_ctx(), "Usage: gemlang [options] <file>\n");
}