#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "egouts_ok.h"
#include "tools.h"

// DRAW EGOUTS_OK
void draw_egouts_ok(unsigned int x, unsigned int y) {
	if (english) {
		text_print_string_bkg(x, y,      "I LIFTED A DRAIN    ");
		text_print_string_bkg(x, y +  1, "COVER WITH THE      ");
		text_print_string_bkg(x, y +  2, "CROWBAR.            ");
		text_print_string_bkg(x, y +  3, "                    ");
		text_print_string_bkg(x, y +  4, "                    ");
		text_print_string_bkg(x, y +  5, "                    ");
		text_print_string_bkg(x, y +  6, "                    ");
		text_print_string_bkg(x, y +  7, "                    ");
		text_print_string_bkg(x, y +  8, "                    ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	} else {
		text_print_string_bkg(x, y,      "JE SOULEVAI UNE     ");
		text_print_string_bkg(x, y +  1, "PLAQUE D'eGOUT AVEC ");
		text_print_string_bkg(x, y +  2, "LE PIED-DE-BICHE.   ");
		text_print_string_bkg(x, y +  3, "                    ");
		text_print_string_bkg(x, y +  4, "                    ");
		text_print_string_bkg(x, y +  5, "                    ");
		text_print_string_bkg(x, y +  6, "                    ");
		text_print_string_bkg(x, y +  7, "                    ");
		text_print_string_bkg(x, y +  8, "                    ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	}
}

UINT8 state_egouts_ok() {
	INT8 selected = -1;

	if (english) {
		text_print_string_win(1, 2, "GO DOWN  ");
		text_print_string_win(1, 3, "RUN AWAY");
	} else {
		text_print_string_win(1, 2, "DESCENDRE");
		text_print_string_win(1, 3, "FUIRE   ");
	}

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_LABYRINTHE;
	}
	if (selected == 1) {
		sound_OK();
		return SCREEN_MORT;
	}
		
	return SCREEN_SAME;
}