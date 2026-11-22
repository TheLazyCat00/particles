#include "binding.h"
#include <raylib.h>

zane_raylib_t zane_raylib = {0};

void zane_rl_init_window(
	zane_raylib_t *rl,
	int32_t width,
	int32_t height,
	const char *title
) {
	(void)rl;
	InitWindow(width, height, title);
}

bool zane_rl_window_should_close(
	const zane_raylib_t *rl
) {
	(void)rl;
	return WindowShouldClose();
}

void zane_rl_set_target_fps(
	zane_raylib_t *rl,
	int32_t fps
) {
	(void)rl;
	SetTargetFPS(fps);
}

void zane_rl_begin_drawing(zane_raylib_t *rl) {
	(void)rl;
	BeginDrawing();
}

void zane_rl_clear_background(
	zane_raylib_t *rl,
	Color color
) {
	(void)rl;

	ClearBackground(color);
}

void zane_rl_draw_text(
	zane_raylib_t *rl,
	const char *text,
	int32_t x,
	int32_t y,
	int32_t size,
	Color color
) {
	(void)rl;

	DrawText(text, x, y, size, color);
}

void zane_rl_draw_rect(
	zane_raylib_t *rl,
	int32_t x,
	int32_t y,
	int32_t width,
	int32_t height,
	Color color
) {
	(void)rl;

	DrawRectangle(x, y, width, height, color);
}

void zane_rl_end_drawing(zane_raylib_t *rl) {
	(void)rl;
	EndDrawing();
}

void zane_rl_close_window(zane_raylib_t *rl) {
	(void)rl;
	CloseWindow();
}
