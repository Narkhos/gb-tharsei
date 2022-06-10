#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "image_the_end.h"
#include "eruption.h"
#include "tools.h"

#include "gfx/victory_tilemap.h"

// DRAW IMAGE_THE_END
void draw_image_the_end(unsigned int x, unsigned int y) {
	set_bkg_tiles(x, y, VICTORY_TILEMAP_WIDTH, VICTORY_TILEMAP_HEIGHT, VICTORY_TILEMAP);
}

UINT8 state_image_the_end() {
	INT8 selected = -1;
	
	if (english) {
		text_print_string_win(0, 1, "VICTORY");

		text_print_string_win(1, 2, "RESTART");
		text_print_string_win(1, 3, "QUIT");
	} else {
		text_print_string_win(0, 1, "VICTOIRE");

		text_print_string_win(1, 2, "RECOMMENCER");
		text_print_string_win(1, 3, "QUITTER");
	}

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_INTRO;
	}

	if (selected == 1) {
		sound_OK();
		return SCREEN_TITLE;
	}
		
	return SCREEN_SAME;
}