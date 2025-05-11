#pragma once

#define LAYER_STATE_32BIT

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
MIRYOKU_X(TIMEWAYS, "Timeways") \
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(WOW, "WoW") \
MIRYOKU_X(NW, "New World") \
MIRYOKU_X(ROCKET, "Rocket") \
MIRYOKU_X(LO5,   "Open 5") \
MIRYOKU_X(RO1,   "Open 1") \
MIRYOKU_X(RO2,   "Open 2") \
MIRYOKU_X(RO3,   "Open 3") \
MIRYOKU_X(RO4,   "Open 4") \
MIRYOKU_X(RO5,   "Open 5")

#define MIRYOKU_LAYER_TIMEWAYS \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
TG(11),     TG(12),     TG(13),     TG(14),     TG(15),                     TG(16),     TG(17),     TG(18),     TG(19),     TG(20), \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX

#define MIRYOKU_LAYER_GAME \
KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P, \
KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                       KC_H,       KC_J,       KC_J,       KC_L,       LGUI(LSFT(KC_S)), \
KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,                       KC_N,       KC_M,       XXX,        KC_PMNS,    KC_PPLS, \
XXX,        XXX,        KC_ESC,     KC_SPC,     KC_LSFT,                    KC_ENT,     KC_RSFT,    KC_LCTL,    XXX,        XXX

#define MIRYOKU_LAYER_WOW \
XXX,        KC_Q,       KC_W,       KC_E,       XXX,                        XXX,        XXX,        KC_UP,      XXX,        XXX, \
XXX,        KC_A,       KC_S,       KC_D,       XXX,                        KC_H,       KC_J,       KC_J,       KC_L,       LGUI(LSFT(KC_S)), \
KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,                       KC_N,       KC_M,       XXX,        KC_PMNS,    KC_PPLS, \
XXX,        XXX,        KC_ESC,     KC_SPC,     KC_LSFT,                    KC_ENT,     KC_RSFT,    KC_LCTL,    XXX,        XXX

#define MIRYOKU_LAYER_NW \
XXX,        KC_Q,       KC_W,       KC_E,       XXX,                        XXX,        XXX,        KC_UP,      XXX,        XXX, \
XXX,        KC_A,       KC_S,       KC_D,       XXX,                        KC_H,       KC_J,       KC_J,       KC_L,       LGUI(LSFT(KC_S)), \
KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,                       KC_N,       KC_M,       XXX,        KC_PMNS,    KC_PPLS, \
XXX,        XXX,        KC_ESC,     KC_SPC,     KC_LSFT,                    KC_ENT,     KC_RSFT,    KC_LCTL,    XXX,        XXX

#define MIRYOKU_LAYER_ROCKET \
XXX,        KC_Q,       KC_W,       KC_E,       XXX,                        XXX,        XXX,        KC_UP,      XXX,        XXX, \
XXX,        KC_A,       KC_S,       KC_D,       XXX,                        XXX,        KC_LEFT,    KC_DOWN,    KC_RIGHT,   XXX, \
KC_LSFT,    XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        LSFT(KC_TAB), \
XXX,        XXX,        KC_ESC,     KC_SPC,     XXX,                        KC_ENT,     KC_RSFT,    XXX,        XXX,        XXX

#define MIRYOKU_LAYER_LO5 \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX

#define MIRYOKU_LAYER_RO1 \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX

#define MIRYOKU_LAYER_RO2 \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX

#define MIRYOKU_LAYER_RO3 \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX

#define MIRYOKU_LAYER_RO4 \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX

#define MIRYOKU_LAYER_RO5 \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX, \
XXX,        XXX,        XXX,        XXX,        XXX,                        XXX,        XXX,        XXX,        XXX,        XXX

#define MIRYOKU_LAYERMAPPING_TIMEWAYS MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_WOW MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_NW MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_ROCKET MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_LO5 MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_RO1 MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_RO2 MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_RO3 MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_RO4 MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_RO5 MIRYOKU_MAPPING
