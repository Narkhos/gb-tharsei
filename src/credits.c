#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "credits.h"
#include "tools.h"

// DRAW CREDITS
void draw_credits(unsigned int x, unsigned int y) {
	text_print_string_bkg(x, y,      "                    ");
	text_print_string_bkg(x, y +  1, "                    ");
	text_print_string_bkg(x, y +  2, "       THARSeI      ");
	text_print_string_bkg(x, y +  3, "                    ");
	text_print_string_bkg(x, y +  4, "                    ");
	text_print_string_bkg(x, y +  5, "                    ");
	text_print_string_bkg(x, y +  6, "                    ");
	text_print_string_bkg(x, y +  7, "                    ");
	text_print_string_bkg(x, y +  8, "                    ");
	text_print_string_bkg(x, y +  9, "  PAR XAVIER DIREZ  ");
	text_print_string_bkg(x, y + 10, "     2019-2022      ");
	text_print_string_bkg(x, y + 11, "                    ");
}

UINT8 state_credits() {
	INT8 selected = -1;

	text_print_string_win(1, 2, "RETOUR");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_TITLE;
	}
		
	return SCREEN_SAME;
}