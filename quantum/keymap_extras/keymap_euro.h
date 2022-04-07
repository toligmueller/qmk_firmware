/* Copyright 2015-2016 Matthias Schmidtt
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "keymap.h"    

// clang-format off 

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐ 
 * │ ´ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │       │ 
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ 
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │ 
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤ 
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ¨ │ ' │        │ 
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤ 
 * │        │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │          │ 
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤ 
 * │    │    │    │                        │    │    │    │    │ 
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘ 
 */
// Row 1
#define EU_ACUT KC_GRV  // ´ (dead)
#define EU_1    KC_1    // 1
#define EU_2    KC_2    // 2
#define EU_3    KC_3    // 3
#define EU_4    KC_4    // 4
#define EU_5    KC_5    // 5
#define EU_6    KC_6    // 6
#define EU_7    KC_7    // 7
#define EU_8    KC_8    // 8
#define EU_9    KC_9    // 9
#define EU_0    KC_0    // 0
#define EU_MINS KC_MINS // -
#define EU_EQL  KC_EQL  // =
// Row 2
#define EU_Q    KC_Q    // Q
#define EU_W    KC_W    // W
#define EU_E    KC_E    // E
#define EU_R    KC_R    // R
#define EU_T    KC_T    // T
#define EU_Y    KC_Y    // Y
#define EU_U    KC_U    // U
#define EU_I    KC_I    // I
#define EU_O    KC_O    // O
#define EU_P    KC_P    // P
#define EU_LBRC KC_LBRC // [
#define EU_RBRC KC_RBRC // ]
#define EU_NUHS KC_NUHS // (backslash)
// Row 3
#define EU_A    KC_A    // A
#define EU_S    KC_S    // S
#define EU_D    KC_D    // D
#define EU_F    KC_F    // F
#define EU_G    KC_G    // G
#define EU_H    KC_H    // H
#define EU_J    KC_J    // J
#define EU_K    KC_K    // K
#define EU_L    KC_L    // L
#define EU_DIA  KC_SCLN // ¨ (dead)
#define EU_QUOT KC_QUOT // '

// Row 4
#define EU_Z    KC_Z    // Z
#define EU_X    KC_X    // X
#define EU_C    KC_C    // C
#define EU_V    KC_V    // V
#define EU_B    KC_B    // B
#define EU_N    KC_N    // N
#define EU_M    KC_M    // M
#define EU_COMM KC_COMM // ,
#define EU_DOT  KC_DOT  // .
#define EU_SLSH KC_SLSH // /

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ˚ │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │ _ │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ { │ } │  |  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │   │   │   │   │   │   │   │   │   │ ~ │ " │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │   │   │   │   │   │   │   │ ; │ : │ ? │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define EU_GRV  S(EU_ACUT) // ` (dead)
#define EU_EXLM S(EU_1)    // !
#define EU_AT   S(EU_2)    // @
#define EU_HASH S(EU_3)    // #
#define EU_DLR  S(EU_4)    // $
#define EU_PERC S(EU_5)    // %
#define EU_CIRC S(EU_6)    // ^
#define EU_AMPR S(EU_7)    // &
#define EU_ASTR S(EU_8)    // *
#define EU_LPRN S(EU_9)    // (
#define EU_RPRN S(EU_0)    // )
#define EU_UNDS S(EU_MINS) // _
#define EU_PLUS S(EU_EQL)  // +
// Row 2
#define EU_LCBR S(EU_LBRC) // {
#define EU_RCBR S(EU_RBRC) // }
#define EU_PIPE S(EU_NUHS) // |
// Row 3
#define EU_TILD S(EU_DIA)  // ~ (dead)
#define EU_DQUO S(EU_QUOT) // "
// Row 4
#define EU_SCLN S(EU_COMM) // ;
#define EU_COLN S(EU_DOT)  // :
#define EU_QUES S(EU_SLSH) // ?

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ˙ │ ¡ │ ª │ º │ € │ ‰ │ ˇ │ § │ ° │ < │ > │ ± │ × │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │ ¤ │ þ │   │   │ Ĳ │ Œ │ „ │ ” │ “ │  ¦  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │ æ │ ß │ Ð │ ← │ ↑ │ ↓ │ → │   │ Ǉ │ ¯ │ · │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │ Ǳ │   │ ¢ │ ↔ │ ↕ │ Ǌ │ µ │ ∞ │ ˛ │ ¿ │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define EU_DOTA ALGR(EU_ACUT) // ˙ (dead)
#define EU_IEXL ALGR(EU_1)    // ¡
#define EU_ORDF ALGR(EU_2)    // ª
#define EU_ORDM ALGR(EU_3)    // º
#define EU_EURO ALGR(EU_4)    // €
#define EU_PERM ALGR(EU_5)    // ‰
#define EU_CAR  ALGR(EU_6)    // ˇ (dead)
#define EU_SECT ALGR(EU_7)    // §
#define EU_DEG  ALGR(EU_8)    // °
#define EU_LBAK ALGR(EU_9)    // <
#define EU_RBAK ALGR(EU_0)    // >
#define EU_PLMI ALGR(EU_UNDS) // ±
#define EU_MUL  ALGR(EU_ACUT) // ×
// Row 2
#define EU_CUR  ALRG(EU_R)    // ¤
#define EU_THRN ALRG(EU_T)    // þ
#define EU_IJ   ALRG(EU_I)    // Ĳ
#define EU_OE   ALRG(EU_O)    // Œ
#define EU_LDQT ALRG(EU_P)    // „
#define EU_TDQT ALRG(EU_LBRC) // ”
#define EU_RDQT ALRG(EU_RCBR) // “
#define EU_BRK  ALRG(EU_NUHS) // ¦
// Row 3
#define EU_AE   ALRG(EU_A)    // Æ
#define EU_SS   ALRG(EU_S)    // ß
#define EU_ETH  ALRG(EU_D)    // Ð
#define EU_ALFT ALRG(EU_F)    // ←
#define EU_AUP  ALRG(EU_G)    // ↑
#define EU_ADWN ALRG(EU_H)    // ↓
#define EU_ARGT ALRG(EU_J)    // →
#define EU_LJ   ALRG(EU_L)    // Ǉ
#define EU_MACR ALRG(EU_DIA)  // ¯ (dead)
#define EU_MDOT ALRG(EU_QUOT) // ·
// Row 4
#define EU_DZ   ALRG(EU_Z)    // Ǳ
#define EU_CENT ALRG(EU_C)    // ¢ 
#define EU_LFRG ALRG(EU_V)    // ↔
#define EU_TPDW ALRG(EU_B)    // ↕
#define EU_NJ   ALRG(EU_N)    // Ǌ
#define EU_MICR ALRG(EU_M)    // µ 
#define EU_INFI ALRG(EU_COMM) // ∞
#define EU_OGON ALRG(EU_DOT)  // ˛
#define EU_IQUE ALRG(EU_SLSH) // ¿

/* Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ⁰ │ ¹ │ ² │ ³ │ £ │ ¼ │ ½ │ ¾ │ » │ « │ ≈ │ ∞ │ ÷ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │ ® │   │   │   │   │   │ ‚ │ ’ │ ‘ │  ¥  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │   │   │   │ ◀│ ▲ │ ▼ │ ▶ │   │   │ ≈ │ … │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │   │   │ © │   │   │   │ ™ │ ‹ │ › │ ¬ │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define EU_SUP0 SAGR(EU_ACUT) // ⁰
#define EU_SUP1 SAGR(EU_1)    // ¹
#define EU_SUP2 SAGR(EU_2)    // ²
#define EU_SUP3 SAGR(EU_3)    // ³
#define EU_PND  SAGR(EU_4)    // £
#define EU_QUAR SAGR(EU_5)    // ¼
#define EU_HALF SAGR(EU_6)    // ½
#define EU_TQUA SAGR(EU_7)    // ¾
#define EU_LAQT ALGR(EU_9)    // «
#define EU_RAQT ALGR(EU_0)    // »
#define EU_UEQL SAGR(EU_MINS) // ≠
#define EU_DIV  SAGR(EU_EQL)  // ÷
// Row 2
#define EU_REG  SAGR(EU_R)    // ®
#define EU_LQUT ALRG(EU_P)    // ‚
#define EU_TQUT ALRG(EU_LBRC) // ’
#define EU_RQUT ALRG(EU_RBRC) // ‘
#define EU_YEN  SAGR(EU_NUHS) // ¥
// Row 3
#define EU_TLFT SAGR(EU_F)    // ◀ 
#define EU_TUP  SAGR(EU_G)    // ▲ 
#define EU_TDWN SAGR(EU_H)    // ▼ 
#define EU_TRGT SAGR(EU_J)    // ▶ 
#define EU_SIM  SAGR(EU_DIA)  // ≈
#define EU_TDOT SAGR(EU_QUOT) // … 
// Row 4
#define EU_COPY SAGR(EU_C)    // © 
#define EU_TRAD SAGR(EU_M)    // ™
#define EU_LASQ SAGR(EU_COMM) // ‹
#define EU_RASQ SAGR(EU_DOT)  // ›
#define EU_NOT  SAGR(EU_SLSH) // ¬
