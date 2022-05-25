#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "title.h"
#include "tools.h"

#include "gfx/title_tilemap.h"
#include "music/hUGEDriver.h"

// DRAW TITLE
/*void draw_title(unsigned int x, unsigned int y) {
	
	text_print_string_bkg(x, y,      "                    ");
	text_print_string_bkg(x, y +  1, "                    ");
	text_print_string_bkg(x, y +  2, "       THARSeI      ");
	text_print_string_bkg(x, y +  3, "                    ");
	text_print_string_bkg(x, y +  4, "                    ");
	text_print_string_bkg(x, y +  5, "                    ");
	text_print_string_bkg(x, y +  6, "                    ");
	text_print_string_bkg(x, y +  7, "                    ");
	text_print_string_bkg(x, y +  8, "                    ");
	text_print_string_bkg(x, y +  9, "   BY XAVIER DIREZ  ");
	text_print_string_bkg(x, y + 10, "      2019-2022     ");
	text_print_string_bkg(x, y + 11, "                    ");
}*/

// DRAW TITLE
void draw_title(unsigned int x, unsigned int y) {
	set_bkg_tiles(x, y, TITLE_TILEMAP_WIDTH, TITLE_TILEMAP_HEIGHT, TITLE_TILEMAP);
}

UINT8 state_title() {
	INT8 selected = -1;

	// text_print_string_win(0, 1, "QUESTION");

	text_print_string_win(1, 2, "COMMENCER");
	text_print_string_win(1, 3, "b PROPOS");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		enableMusic(false);
		return SCREEN_INTRO;
	}
	if (selected == 1) {
		sound_OK();
		return SCREEN_CREDITS;
	}
		
	return SCREEN_SAME;
}