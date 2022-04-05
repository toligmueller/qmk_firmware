/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

/* Device */
#define FIRMWARE_VERSION u8"L54Py/y0PKB"

#define ORYX_CONFIGURATOR

#define USB_SUSPEND_WAKEUP_DELAY 0

/* RGB */
#define RGB_MATRIX_STARTUP_SPD 60

#undef RGB_MATRIX_HUE_STEP
#define RGB_MATRIX_HUE_STEP 1

#undef RGB_MATRIX_VAL_STEP
#define RGB_MATRIX_VAL_STEP 1

#undef RGB_DISABLE_TIMEOUT
#define RGB_DISABLE_TIMEOUT 300000

/* Keys */
#define PERMISSIVE_HOLD

#define FORCE_NKRO

#undef IGNORE_MOD_TAP_INTERRUPT

#undef DEBOUNCE
#define DEBOUNCE 5

/* Mouse */
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 17

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 50

#undef MOUSEKEY_WHEEL_MAX_SPEED
#define MOUSEKEY_WHEEL_MAX_SPEED 10

/* Audio */
#define AUDIO_CLICKY

#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(ZELDA_PUZZLE)
#endif