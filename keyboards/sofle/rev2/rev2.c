#include "sofle.h"


void keyboard_post_init_rgb_light(void) {
    rgblight_sethsv(HSV_GOLD);
    rgblight_mode(RGBLIGHT_MODE_RAINBOW_SWIRL);
}

void keyboard_post_init_user(void) {
#if defined(RGBLIGHT_ENABLE)
    keyboard_post_init_rgb_light();
#endif
}
