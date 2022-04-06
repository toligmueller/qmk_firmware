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
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ _ │ ´ │       │ 
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ 
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ { │ } │  +  │ 
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤ 
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ¨ │ ' │        │ 
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤ 
 * │        │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │          │ 
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤ 
 * │    │    │    │                        │    │    │    │    │ 
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘ 
 */
// Row 1
#define EU_CIRC KC_GRV  // ^ (dead)
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
#define EU_UNDS KC_MINS // _
#define EU_ACUT KC_EQL  // ´ (dead)
// Row 2
#define EU_Q    KC_Q    // Q
#define EU_W    KC_W    // W
#define EU_E    KC_E    // E
#define EU_R    KC_R    // R
#define EU_T    KC_T    // T
#define EU_Z    KC_Z    // Z
#define EU_U    KC_U    // U
#define EU_I    KC_I    // I
#define EU_O    KC_O    // O
#define EU_P    KC_P    // P
#define EU_LCBR KC_LBRC // {
#define EU_RCBR KC_RBRC // }
#define EU_PLUS KC_NUHS // +
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
#define EU_Y    KC_Y    // Y
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
 * │ ˚ │ ! │ @ │ # │ $ │ % │ | │ & │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ [ │ ] │  -  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │   │   │   │   │   │   │   │   │   │ ~ │ " │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │   │   │   │   │   │   │   │ ; │ : │ \ │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define EU_RABV S(EU_CIRC) // ˚ (dead)
#define EU_EXLM S(EU_1)    // !
#define EU_AT   S(EU_2)    // @
#define EU_HASH S(EU_3)    // #
#define EU_DLR  S(EU_4)    // $
#define EU_PERC S(EU_5)    // %
#define EU_PIPE S(EU_6)    // |
#define EU_AMPR S(EU_7)    // &
#define EU_LPRN S(EU_8)    // (
#define EU_RPRN S(EU_9)    // )
#define EU_EQL  S(EU_0)    // =
#define EU_QUES S(EU_UNDS) // ?
#define EU_GRV  S(EU_ACUT) // ` (dead)
// Row 2
#define EU_LBRC S(EU_LCBR) // [
#define EU_RBRC S(EU_RCBR) // ]
#define EU_MINS S(EU_PLUS) // -
// Row 3
#define EU_TILD S(EU_DIA)  // ~ (dead)
#define EU_DQUO S(EU_QUOT) // "
// Row 4
#define EU_SCLN S(EU_COMM) // ;
#define EU_COLN S(EU_DOT)  // :
#define EU_BSLS S(EU_SLSH) // (backslash)

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ¯ │ ¡ │ · │ ¬ │ € │ ‰ │ ¦ │ § │ < │ > │ ≠ │ ¿ │ ˇ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ ð │   │ þ │   │   │ Ĳ │ Œ │   │ „ │ “ │  *  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │ æ │ ß │ Ǳ │ ←│ ↑ │ ↓│ → │   │ Ǉ │ / │ ˝ │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │ ¥ │   │ ¢ │ ↔│ ↕ │ Ǌ │ µ │ ¸ │ ˛ │ ˙ │          │ <- nj 
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define EU_MACR ALGR(EU_CIRC) // ¯ (dead)
#define EU_IEXL ALGR(EU_1)    // ¡
#define EU_NOT  ALGR(EU_2)    // ¬
#define EU_MDOT ALGR(EU_3)    // ·
#define EU_EURO ALGR(EU_4)    // €
#define EU_PERM ALGR(EU_5)    // ‰
#define EU_BRK  ALGR(EU_6)    // ¦
#define EU_SECT ALGR(EU_7)    // §
#define EU_LBAK ALGR(EU_8)    // <
#define EU_RBAK ALGR(EU_9)    // >
#define EU_UEQL ALGR(EU_0)    // ≠
#define EU_IQUE ALGR(EU_UNDS) // ¿
#define EU_CAR  ALGR(EU_ACUT) // ˇ (dead)
// Row 2
#define EU_ETH  ALRG(EU_E)    // ð
#define EU_THRN ALRG(EU_T)    // þ
#define EU_IJ   ALRG(EU_I)    // Ĳ
#define EU_OE   ALRG(EU_O)    // Œ
#define EU_LQUT ALRG(EU_LCBR) // „
#define EU_RQUT ALRG(EU_RCBR) // “
#define EU_ASTR ALRG(EU_PLUS) // *
// Row 3
#define EU_AE   ALRG(EU_A)    // Æ
#define EU_SS   ALRG(EU_S)    // ß
#define EU_DZ   ALRG(EU_D)    // Ǳ
#define EU_ALFT ALRG(EU_F)    // ←
#define EU_AUP  ALRG(EU_G)    // ↑
#define EU_ADWN ALRG(EU_H)    // ↓
#define EU_ARGT ALRG(EU_J)    // →
#define EU_LJ   ALRG(EU_L)    // Ǉ
#define EU_SRTK ALRG(EU_DIA)  // / (dead)
#define EU_DACT ALRG(EU_QUOT) // ˝ (dead)
// Row 4
#define EU_YEN  ALRG(EU_Z)    // ¥
#define EU_CENT ALRG(EU_C)    // ¢ 
#define EU_LFRG ALRG(EU_V)    // ↔
#define EU_TPDW ALRG(EU_B)    // ↕
#define EU_NJ   ALRG(EU_N)    // Ǌ
#define EU_MICR ALRG(EU_M)    // µ 
#define EU_CED  ALRG(EU_DOT)  // ¸ 
#define EU_OGON ALRG(EU_COMM) // ˛ 
#define EU_DOTA ALRG(EU_RPRN) // ˙ (dead)

/* Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ⁰ │ ¹ │ ² │ ³ │ £ │ ¼ │ ½ │ ¾ │ » │ « │ ≈ │ ∞ │ ÷ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │ ® │   │   │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │   │   │   │ ◀│ ▲ │ ▼│ ▶ │   │   │   │   │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │ ∞ │   │ © │   │   │   │ ™ │   │ … │   │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define EU_SUP0 SAGR(EU_CIRC) // ⁰
#define EU_SUP1 SAGR(EU_1)    // ¹
#define EU_SUP2 SAGR(EU_2)    // ²
#define EU_SUP3 SAGR(EU_3)    // ³
#define EU_PND  SAGR(EU_4)    // £
#define EU_QUAR SAGR(EU_5)    // ¼
#define EU_HALF SAGR(EU_6)    // ½
#define EU_TQUA SAGR(EU_7)    // ¾
#define EU_LAQT ALGR(EU_8)    // »
#define EU_RAQT ALGR(EU_9)    // «
#define EU_SIM  SAGR(EU_0)    // ≈
// Row 2
#define EU_REG  SAGR(EU_R)    // ®
#define EU_PLMI SAGR(EU_PLUS) // ±
// Row 3
#define EU_TLFT SAGR(EU_F)    // ◀ 
#define EU_TUP  SAGR(EU_G)    // ▲ 
#define EU_TDWN SAGR(EU_H)    // ▼ 
#define EU_TRGT SAGR(EU_J)    // ▶ 
// Row 4
#define EU_INFI SAGR(EU_Y)    // ∞
#define EU_COPY SAGR(EU_C)    // © 
#define EU_TRAD SAGR(EU_M)    // ™
#define EU_TDOT SAGR(EU_DOT)  // …

