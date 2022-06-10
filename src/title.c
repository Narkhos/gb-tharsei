#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "title.h"
#include "tools.h"

#include "gfx/title_tilemap.h"
#include "music/hUGEDriver.h"

// DRAW TITLE
void draw_title(unsigned int x, unsigned int y) {
	set_bkg_tiles(x, y, TITLE_TILEMAP_WIDTH, TITLE_TILEMAP_HEIGHT, TITLE_TILEMAP);
}

UINT8 state_title() {
	INT8 selected = -1;

	if (english) {
		text_print_string_win(1, 2, "START    ");
		text_print_string_win(1, 3, "LANGUAGE:ENGLISH");
		text_print_string_win(1, 4, "ABOUT   ");
	} else {
		text_print_string_win(1, 2, "COMMENCER");
		text_print_string_win(1, 3, "LANGUE:FRANsAIS ");
		text_print_string_win(1, 4, "b PROPOS");
	}

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		enableMusic(false);
		return SCREEN_INTRO;
	}
	if (selected == 1) {
		sound_OK();
		english = !english;
		return SCREEN_SAME;
	}
	if (selected == 2) {
		sound_OK();
		return SCREEN_CREDITS;
	}
		
	return SCREEN_SAME;
}