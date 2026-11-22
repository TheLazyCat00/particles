#pragma once

#include <stdbool.h>
#include <stdint.h>

typedef struct zane_raylib_t {
    int unused;
} zane_raylib_t;

extern zane_raylib_t zane_raylib;

void zane_rl_init_window(
    zane_raylib_t *rl,
    int32_t width,
    int32_t height,
    const char *title
);

bool zane_rl_window_should_close(
    const zane_raylib_t *rl
);

void zane_rl_set_target_fps(
    zane_raylib_t *rl,
    int32_t fps
);

void zane_rl_begin_drawing(zane_raylib_t *rl);

void zane_rl_clear_background(
    zane_raylib_t *rl,
    int32_t r,
    int32_t g,
    int32_t b,
    int32_t a
);

void zane_rl_draw_text(
    zane_raylib_t *rl,
    const char *text,
    int32_t x,
    int32_t y,
    int32_t size,
    int32_t r,
    int32_t g,
    int32_t b,
    int32_t a
);

void zane_rl_end_drawing(zane_raylib_t *rl);

void zane_rl_close_window(zane_raylib_t *rl);
