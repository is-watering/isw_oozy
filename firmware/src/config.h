// Copyright 2023 is_watering (@is_watering)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0xE5, 0xA9, 0x7C, 0x87, 0xC9, 0x9C, 0x31, 0xF8}

/* CONSIDER ADDING AN UNLOCK COMBO. SEE DOCUMENTATION. */
#define VIAL_INSECURE

/* i2c */
#define HAL_USE_I2C TRUE
#define I2C1_SCL_PIN GP3
#define I2C1_SDA_PIN GP2
