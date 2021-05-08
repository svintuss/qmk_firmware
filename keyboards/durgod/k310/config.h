/*
Copyright 2021 kuenhlee and Don Kjer

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x05AC /* Using Apple VID instead of Durgod's 0x2F68 for compatibility with older OSes (?) */
#define PRODUCT_ID      0x024F  /* Using Apple HID instead of 0x0042 */
#define DEVICE_VER      0x0001
#define MANUFACTURER    Hoksi Technology
#define PRODUCT         DURGOD Taurus K310 (QMK)


/*
Apple Computer products
product APPLE DUMMY		0x0000	Dummy product
product APPLE IMAC_KBD		0x0201	USB iMac Keyboard
product APPLE KBD		0x0202	USB Keyboard M2452
product APPLE EXT_KBD		0x020c	Apple Extended USB Keyboard

#define USB_DEVICE_ID_APPLE_MAGIC_KEYBOARD_ANSI   0x0267
#define USB_DEVICE_ID_APPLE_MAGIC_KEYBOARD_NUMPAD_ANSI   0x026c
 */


/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 16

#define MATRIX_ROW_PINS { A0, A1, A2, A3, A4, A5, A6, A7 }
#define MATRIX_COL_PINS { C4, C5, B0, B1, B2, B10, B11, B12, B13, B14, B15, C6, C7, C10, C11, C12 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION ROW2COL

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 7

/* Bootmagic Lite key configuration */
#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP TRUE
#define BOOTMAGIC_LITE_ROW                 0
#define BOOTMAGIC_LITE_COLUMN              0
//#define BOOTMAGIC_KEY_SALT          KC_APFN

/* LED indicator pins */
#define LED_CAPS_LOCK_PIN   C9
#define LED_SCROLL_LOCK_PIN A8
#define LED_WIN_LOCK_PIN    A9
#define LED_MR_LOCK_PIN     A10
#define LED_PIN_ON_STATE    0

