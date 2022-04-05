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
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ _ │ - │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ / │ ´ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ¨ │ ' │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ ( │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ ) │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_CIRC KC_GRV  // ^ (dead)
#define DE_1    KC_1    // 1
#define DE_2    KC_2    // 2
#define DE_3    KC_3    // 3
#define DE_4    KC_4    // 4
#define DE_5    KC_5    // 5
#define DE_6    KC_6    // 6
#define DE_7    KC_7    // 7
#define DE_8    KC_8    // 8
#define DE_9    KC_9    // 9
#define DE_0    KC_0    // 0
#define DE_UNDS KC_MINS // _
#define DE_MINS KC_EQL  // -
// Row 2
#define DE_Q    KC_Q    // Q
#define DE_W    KC_W    // W
#define DE_E    KC_E    // E
#define DE_R    KC_R    // R
#define DE_T    KC_T    // T
#define DE_Z    KC_Y    // Z
#define DE_U    KC_U    // U
#define DE_I    KC_I    // I
#define DE_O    KC_O    // O
#define DE_P    KC_P    // P
#define DE_SLSH KC_LBRC // /
#define DE_ACUT KC_RBRC // ´ (dead)
// Row 3
#define DE_A    KC_A    // A
#define DE_S    KC_S    // S
#define DE_D    KC_D    // D
#define DE_F    KC_F    // F
#define DE_G    KC_G    // G
#define DE_H    KC_H    // H
#define DE_J    KC_J    // J
#define DE_K    KC_K    // K
#define DE_L    KC_L    // L
#define DE_DIA  KC_SCLN // ¨ (dead)
#define DE_QUOT KC_QUOT // '
#define DE_HASH KC_NUHS // #
// Row 4
#define DE_LPRN KC_NUBS // (
#define DE_Y    KC_Z    // Y
#define DE_X    KC_X    // X
#define DE_C    KC_C    // C
#define DE_V    KC_V    // V
#define DE_B    KC_B    // B
#define DE_N    KC_N    // N
#define DE_M    KC_M    // M
#define DE_COMM KC_COMM // ,
#define DE_DOT  KC_DOT  // .
#define DE_RPRN KC_SLSH // )

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ° │ ! │ " │ ¶ │ $ │ % │ ” │ “ │ & │ | │ = │ ? │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ \ │ ` │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ ~ │ @ │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ { │   │   │   │   │   │   │   │ ; │ : │ } │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_DEG  S(DE_CIRC) // °
#define DE_EXLM S(DE_1)    // !
#define DE_DQUT S(DE_2)    // "
#define DE_PIL  S(DE_3)    // ¶
#define DE_DLR  S(DE_4)    // $
#define DE_PERC S(DE_5)    // %
#define DE_LQUT S(DE_6)    // „
#define DE_RQUT S(DE_7)    // “
#define DE_AMPR S(DE_8)    // &
#define DE_PIPE S(DE_9)    // |
#define DE_EQL  S(DE_0)    // =
#define DE_QUES S(DE_UNDS) // ?
#define DE_PLUS S(DE_MINS) // +
// Row 2
#define DE_BSLS S(DE_SLSH) // (backslash)
#define DE_GRV  S(DE_ACUT) // ` (dead)
// Row 3
#define DE_TILD S(DE_DIA)  // ~ (dead)
#define DE_AT   S(DE_QUOT) // @
#define DE_ASTR S(DE_HASH) // *
// Row 4
#define DE_LCBR S(DE_LPRN) // {
#define DE_SCLN S(DE_COMM) // ;
#define DE_COLN S(DE_DOT)  // :
#define DE_RCBR S(DE_RPRN) // }

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ˇ │ ¡ │ • │ ¬ │ £ │ ‰ │ » │ « │ § │ ¦ │ ≠ │ ¿ │ × │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │ å │ € │   │   │   │   │   │ œ │ þ │ ø │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ æ │ ß │ ð │   │   │   │   │   │ ł │   │   │ ± │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │   │ ¢ │   │   │   │   │ µ │ ¸ │ ˛ │ > │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_CAR  ALGR(DE_CIRC) // ˇ (dead)
#define DE_IEXL ALGR(DE_1)    // ¡
#define DE_BULL ALGR(DE_2)    // •
#define DE_     ALGR(DE_3)    // ¬
#define DE_PND  ALGR(DE_4)    // £
#define DE_PERM ALGR(DE_5)    // ‰
#define DE_LAQT ALGR(DE_6)    // »
#define DE_RAQT ALGR(DE_7)    // «
#define DE_SECT ALGR(DE_8)    // §
#define DE_BRK  ALGR(DE_9)    // ¦
#define DE_UEQL ALGR(DE_0)    // ≠
#define DE_IQUE ALGR(DE_UNDS) // ¿
#define DE_MUL  ALGR(DE_MINS) // ×
// Row 2
#define DE_ARNG ALRG(DE_W)    // å
#define DE_EURO ALRG(DE_E)    // €
#define DE_OE   ALRG(DE_O)    // œ
#define DE_THRN ALRG(DE_P)    // þ
#define DE_OSTR ALRG(DE_SLSH) // ø
#define DE_MACR ALRG(DE_ACUT) // ¯
// Row 3
#define DE_AE   ALRG(DE_A)    // æ
#define DE_SS   ALRG(DE_S)    // ß 
#define DE_ETH  ALRG(DE_D)    // ð
#define DE_LSTR ALRG(DE_L)    // ł
#define DE_PLMI ALRG(DE_HASH) // ±
// Row 4
#define DE_LBAK ALRG(DE_LPRN) // < 
#define DE_CENT ALRG(DE_C)    // ¢ 
#define DE_MICR ALRG(DE_M)    // µ 
#define DE_CED  ALRG(DE_DOT)  // ¸ 
#define DE_OGON ALRG(DE_COMM) // ˛ 
#define DE_RBAK ALRG(DE_RPRN) // >

/* Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ ¹ │ ² │ ³ │ ¥ │ ¼ │ ½ │ ¾ │ º │ ª │ ≈ │ ∞ │ ÷ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ ¤ │ ® │ ™ │   │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ … │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ [ │   │   │ © │ ← │ ↑ │ ↓ │ → │   │   │ ] │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_SUP1 SAGR(DE_1)    // ¹
#define DE_SUP2 SAGR(DE_2)    // ²
#define DE_SUP3 SAGR(DE_3)    // ³
#define DE_YEN  SAGR(DE_4)    // ¥
#define DE_QUAR SAGR(DE_5)    // ¼
#define DE_HALF SAGR(DE_6)    // ½
#define DE_TQUA SAGR(DE_7)    // ¾
#define DE_FORD SAGR(DE_8)    // º
#define DE_MORD SAGR(DE_9)    // ª
#define DE_SIM  SAGR(DE_0)    // ≈
#define DE_INFI SAGR(DE_UNDS) // ∞
#define DE_DIV  SAGR(DE_MINS) // ÷
// Row 2
#define DE_CURR SAGR(DE_E)    // ¤ 
#define DE_REG  SAGR(DE_R)    // ® 
#define DE_TRAD SAGR(DE_T)    // ™
// Row 3
#define DE_TDOT SAGR(DE_DIA)  // … 
// Row 4
#define DE_LBRC SAGR(DE_LPRN) // [
#define DE_COPY SAGR(DE_C)    // © 
#define DE_ALFT SAGR(DE_V)    // ← 
#define DE_AUP  SAGR(DE_B)    // ↑ 
#define DE_ADWN SAGR(DE_N)    // ↓ 
#define DE_ARGT SAGR(DE_M)    // → 
#define DE_RBRC SAGR(DE_RPRN) // ]