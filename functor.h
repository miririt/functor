
#pragma once
//for a short-lambda

#ifndef NO_SHORT_LAMBDA

    #define MAKE_SHORT_LAMBDA_NAME( \
            _1, _2, _3, _4, _5, _6, _7, _8, _9,_10, \
            _11,_12,_13,_14,_15,_16,  N, ...) $ ## N

    #define SHORT_LAMBDA_NAME(...) \
            MAKE_SHORT_LAMBDA_NAME(__VA_ARGS__, \
            16, 15, 14, 13, 12, 11, 10, \
            9, 8, 7, 6, 5, 4, 3, 2, 1, 0)

    #define DECLTYPE_AUTO -> decltype(auto)

    #define $(...) SHORT_LAMBDA_NAME(__VA_ARGS__)(__VA_ARGS__)
    #define $$ std::function

    #define $1(_0) [](auto _0) DECLTYPE_AUTO
    #define $2(_0, _1) [](auto _0, auto _1) DECLTYPE_AUTO
    #define $3(_0, _1, _2) [](auto _0, auto _1, auto _2) DECLTYPE_AUTO
    #define $4(_0, _1, _2, _3) [](auto _0, auto _1, auto _2, auto _3) DECLTYPE_AUTO
    #define $5(_0, _1, _2, _3, _4) [](auto _0, auto _1, auto _2, auto _3, auto _4) DECLTYPE_AUTO
    #define $6(_0, _1, _2, _3, _4, _5) [](auto _0, auto _1, auto _2, auto _3, auto _4, auto _5) DECLTYPE_AUTO
    #define $7(_0, _1, _2, _3, _4, _5, _6) [](auto _0, auto _1, auto _2, auto _3, auto _4, auto _5, auto _6) DECLTYPE_AUTO
    #define $8(_0, _1, _2, _3, _4, _5, _6, _7) [](auto _0, auto _1, auto _2, auto _3, auto _4, auto _5, auto _6, auto _7) DECLTYPE_AUTO
    #define $9(_0, _1, _2, _3, _4, _5, _6, _7, _8) [](auto _0, auto _1, auto _2, auto _3, auto _4, auto _5, auto _6, auto _7, auto _8) DECLTYPE_AUTO
    #define $10(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9) [](auto _0, auto _1, auto _2, auto _3, auto _4, auto _5, auto _6, auto _7, auto _8, auto _9) DECLTYPE_AUTO
    #define $11(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _a) [](auto _0, auto _1, auto _2, auto _3, auto _4, auto _5, auto _6, auto _7, auto _8, auto _9, auto _a) DECLTYPE_AUTO
    #define $12(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _a, _b) [](auto _0, auto _1, auto _2, auto _3, auto _4, auto _5, auto _6, auto _7, auto _8, auto _9, auto _a, auto _b) DECLTYPE_AUTO
    #define $13(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _a, _b, _c) [](auto _0, auto _1, auto _2, auto _3, auto _4, auto _5, auto _6, auto _7, auto _8, auto _9, auto _a, auto _b, auto _c) DECLTYPE_AUTO
    #define $14(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _a, _b, _c, _d) [](auto _0, auto _1, auto _2, auto _3, auto _4, auto _5, auto _6, auto _7, auto _8, auto _9, auto _a, auto _b, auto _c, auto _d) DECLTYPE_AUTO
    #define $15(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _a, _b, _c, _d, _e) [](auto _0, auto _1, auto _2, auto _3, auto _4, auto _5, auto _6, auto _7, auto _8, auto _9, auto _a, auto _b, auto _c, auto _d, auto _e) DECLTYPE_AUTO
    #define $16(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _a, _b, _c, _d, _e, _f) [](auto _0, auto _1, auto _2, auto _3, auto _4, auto _5, auto _6, auto _7, auto _8, auto _9, auto _a, auto _b, auto _c, auto _d, auto _e, auto _f) DECLTYPE_AUTO

#endif

#include"vector.h"