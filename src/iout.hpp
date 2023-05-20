#pragma     once
#include    "def.hpp"

typedef struct s_iout {
    const_str name;
} s_iout;

template<typename... T>
void olog(
    s_iout  ctx,
    T...     args
) {
    std::cout << "[" << ctx.name << "] ";
    (std::cout << ... << args);
    std::cout << std::endl;
}

template<typename... T>
void oerr(
    s_iout  ctx,
    T...     args
) {
    std::cout << "[ERR] "<< "[" << ctx.name << "] ";
    (std::cout << ... << args);
    std::cout << std::endl;
}

template<typename... T>
void owarn(
    s_iout  ctx,
    T...     args
) {
    std::cout << "[WARN] "<< "[" << ctx.name << "] ";
    (std::cout << ... << args);
    std::cout << std::endl;
}