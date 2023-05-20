#include    "def.hpp"
#include    "cli.hpp"
#include    "lexer.hpp"
#include    "include/magic_enum.hpp"

int main(
    int     argc,
    char**  argv
) {
    // if(argc == 1) {
    //     help();
    //     return 0;
    // } else if(argc == 2) {
    //     if(std::filesystem::exists(argv[1])) {
    //         return 0;
    //     } else {
    //         oerr(get_ctx(), "File '", argv[1], "' does not exist");
    //         return 1;
    //     }
    // }
    std::string test = "";
    std::cin >> test;
    std::cout << magic_enum::enum_name(lexstr(test.c_str(), 0).tok) << std::endl;
}