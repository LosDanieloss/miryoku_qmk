#pragma once

#define XXX KC_NO

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(ROCKET, "Rocket") \
MIRYOKU_X(GAME,   "Game") 

#define MIRYOKU_LAYER_ROCKET \
XXX,       KC_Q,    KC_W,    KC_E,     XXX,                 XXX,      XXX,       KC_UP,    XXX,         XXX,          \
XXX,       KC_A,    KC_S,    KC_D,     XXX,                 XXX,      KC_LEFT,   KC_DOWN,  KC_RIGHT,    XXX,          \
KC_LSFT,   XXX,     XXX,     XXX,      XXX,                 XXX,      XXX,       XXX,      XXX,         LSFT(KC_TAB),          \
XXX,       XXX,     KC_ESC,  KC_SPC,   XXX,                 KC_ENT,   KC_RSFT,   XXX,      XXX,         XXX

#define MIRYOKU_LAYER_GAME \
KC_Q,    KC_W,  KC_E,     KC_R,      KC_T,                  KC_Y,      KC_U,      KC_I,     KC_O,       KC_P, \
KC_A,    KC_S,  KC_D,     KC_F,      KC_G,                  KC_H,      KC_J,      KC_J,     KC_L,       LGUI(LSFT(KC_S)), \
KC_Z,    KC_X,  KC_C,     KC_V,      KC_B,                  KC_N,      KC_M,      XXX,      KC_PMNS,    KC_PPLS, \
XXX,     XXX,   KC_ESC,   KC_LSFT,   KC_SPC,                KC_ENT,    KC_RSFT,   KC_LCTL,  XXX,        XXX

#define MIRYOKU_LAYERMAPPING_ROCKET MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING