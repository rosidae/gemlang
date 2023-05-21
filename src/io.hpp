#pragma     once
#include    "def.hpp"

typedef struct s_iout {
    const_str   name;
} s_iout;

s_iout getctx() {
    return {"gemlang"};
}

template<typename... T>
void blog(
    T...        args
) {
    (std::cout << ... << args);
}

template<typename... T>
void ctxlog(
    s_iout      ctx,
    T...        args
) {
    blog("[" , ctx.name, "] ", args...);
}

template<typename... T>
void ctxinfo(
    s_iout      ctx,
    T...        args
) {
    ctxlog(ctx, "[INFO]", args...);
}

template<typename... T>
void ctxerr(
    s_iout  ctx,
    T...     args
) {
    ctxlog(ctx, "[ERR]", args...);
}

template<typename... T>
void ctxwarn(
    s_iout  ctx,
    T...     args
) {
    ctxlog(ctx, "[WARN]", args...);
}