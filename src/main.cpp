#include    "def.hpp"
#include    "cli.hpp"
// #include "lexer.hpp"

int main(
    int     argc,
    char**  argv
) {
    if(argc == 1) {
        help();
        return 0;
    } else if(argc == 2) {
        if(std::filesystem::exists(argv[1])) {
            return 0;
        } else {
            oerr(get_ctx(), "File '", argv[1], "' does not exist");
            return 1;
        }
    }
}