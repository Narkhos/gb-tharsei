#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "title.h"
#include "intro.h"
#include "image_mort.h"
#include "tools.h"

#include "gfx/death_tilemap.h"

// DRAW IMAGE_MORT
void draw_image_mort(unsigned int x, unsigned int y) {
	set_bkg_tiles(x, y, DEATH_TILEMAP_WIDTH, DEATH_TILEMAP_HEIGHT, DEATH_TILEMAP);
}

UINT8 state_image_mort() {
	INT8 selected = -1;
	
	text_print_string_win(0, 1, "GAME OVER");

	text_print_string_win(1, 2, "ReESSAYER");
	text_print_string_win(1, 3, "QUITTER");

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