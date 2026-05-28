#pragma once

#define ZMK_MACRO_FAST(name, key) \
    name: name { \
        compatible = "zmk,behavior-macro"; \
        #binding-cells = <0>; \
        wait-ms = <0>; \
        tap-ms = <1>; \
        bindings = <&kp key>; \
    };

/ {
    macros {
        ZMK_MACRO_FAST(f_q, Q) ZMK_MACRO_FAST(f_w, W) ZMK_MACRO_FAST(f_e, E) ZMK_MACRO_FAST(f_r, R) ZMK_MACRO_FAST(f_t, T)
        ZMK_MACRO_FAST(f_y, Y) ZMK_MACRO_FAST(f_u, U) ZMK_MACRO_FAST(f_i, I) ZMK_MACRO_FAST(f_o, O) ZMK_MACRO_FAST(f_p, P)
        ZMK_MACRO_FAST(f_a, A) ZMK_MACRO_FAST(f_s, S) ZMK_MACRO_FAST(f_d, D) ZMK_MACRO_FAST(f_f, F) ZMK_MACRO_FAST(f_g, G)
        ZMK_MACRO_FAST(f_h, H) ZMK_MACRO_FAST(f_j, J) ZMK_MACRO_FAST(f_k, K) ZMK_MACRO_FAST(f_l, L)
        ZMK_MACRO_FAST(f_z, Z) ZMK_MACRO_FAST(f_x, X) ZMK_MACRO_FAST(f_c, C) ZMK_MACRO_FAST(f_v, V) ZMK_MACRO_FAST(f_b, B)
        ZMK_MACRO_FAST(f_n, N) ZMK_MACRO_FAST(f_m, M)

        ZMK_MACRO_FAST(f_comma, COMMA) ZMK_MACRO_FAST(f_dot, DOT) ZMK_MACRO_FAST(f_slash, SLASH)
        
        ZMK_MACRO_FAST(f_n1, N1) ZMK_MACRO_FAST(f_n2, N2) ZMK_MACRO_FAST(f_n3, N3) ZMK_MACRO_FAST(f_n4, N4) ZMK_MACRO_FAST(f_n5, N5)
        ZMK_MACRO_FAST(f_n6, N6) ZMK_MACRO_FAST(f_n7, N7) ZMK_MACRO_FAST(f_n8, N8) ZMK_MACRO_FAST(f_n9, N9) ZMK_MACRO_FAST(f_n0, N0)

        ZMK_MACRO_FAST(f_grave, N1) ZMK_MACRO_FAST(f_minus, MINUS) ZMK_MACRO_FAST(f_equal, EQUAL)
    };
};