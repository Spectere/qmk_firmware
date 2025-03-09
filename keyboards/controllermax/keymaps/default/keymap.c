// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *                         ┌───┐ ┌───┐
     *                         │ 1 │ │ 2 │
     * ┌───┬───┬───┬───┐       └───┘ └───┘       ┌───┬───┬───┬───┐
     * │ Q │ W │ E │ R │                         │ U │ I │ O │ P │
     * └───┴───┴───┴───┘ ┌───┐             ┌───┐ └───┴───┴───┴───┘
     *                   │ T │             │ Y │
     *                   └───┘             └───┘
     *                            ┌───┐
     *                            │Fn.│
     *                            └───┘
     */
    [0] = LAYOUT(
        KC_Q, KC_W, KC_E, KC_R, KC_T,  // L1-L5
        KC_1, KC_2,                    // C1-C2
        KC_Y, KC_U, KC_I, KC_O, KC_P,  // R1-R5
        MO(1)                          // Fn
    ),
    [1] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  // L1-L5
        MO(2),   KC_TRNS,                             // C1-C2
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  // R1-R5
        KC_TRNS                                       // Fn
    ),
    [2] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  // L1-L5
        KC_TRNS, QK_BOOTLOADER,                       // C1-C2
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  // R1-R5
        KC_TRNS                                       // Fn
    ),
};
