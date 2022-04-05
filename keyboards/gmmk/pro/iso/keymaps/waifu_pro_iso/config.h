/* Copyright 2021 Jonavin Eng
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

#undef VENDOR_ID
#undef PRODUCT_ID
#define VENDOR_ID 0xD97C // "R@" = Reyko.Online
#define PRODUCT_ID 0x0000

// RGB
#define USB_SUSPEND_WAKEUP_DELAY 0

#define RGB_MATRIX_STARTUP_SPD 60

#undef RGB_DISABLE_TIMEOUT
#define RGB_DISABLE_TIMEOUT 300000 //ms

// Macros 
#define DYNAMIC_MACRO_NO_NESTING 

// Keys
#define PERMISSIVE_HOLD

#define FORCE_NKRO

#undef IGNORE_MOD_TAP_INTERRUPT

#undef DEBOUNCE
#define DEBOUNCE 5

//#undef LEADER_TIMEOUT
//#define LEADER_TIMEOUT 325 //ms
//#define LEADER_PER_KEY_TIMING

#define TAPPING_TOGGLE 2

#define COMBO_COUNT 13
#define COMBO_TERM 40