#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "egouts_ko.h"
#include "tools.h"

// DRAW EGOUTS_KO
void draw_egouts_ko(unsigned int x, unsigned int y) {
	text_print_string_bkg(x, y,      "JE TENTAIS EN VAIN  ");
	text_print_string_bkg(x, y +  1, "D'OUVRIR UNE PLAQUE ");
	text_print_string_bkg(x, y +  2, "D'eGOUTS.           ");
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

UINT8 state_egouts_ko() {
	INT8 selected = -1;
	
	// text_print_string_win(0, 1, "QUE FAIRE ?");

	text_print_string_win(1, 2, "FUIRE");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_MORT;
	}
		
	return SCREEN_SAME;
}