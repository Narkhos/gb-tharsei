#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "title.h"
#include "intro.h"
#include "mort.h"
#include "tools.h"

// DRAW MORT
void draw_mort(unsigned int x, unsigned int y) {
	text_print_string_bkg(x, y,      "SOUDAIN,UNE NOUVELLE");
	text_print_string_bkg(x, y +  1, "SECOUSSE SE FIT     ");
	text_print_string_bkg(x, y +  2, "SENTIR ET JE FUS    ");
	text_print_string_bkg(x, y +  3, "ENSEVELI SOUS DES   ");
	text_print_string_bkg(x, y +  4, "TONNES DE GRAVATS.  ");
	text_print_string_bkg(x, y +  5, "                    ");
	text_print_string_bkg(x, y +  6, "                    ");
	text_print_string_bkg(x, y +  7, "                    ");
	text_print_string_bkg(x, y +  8, "                    ");
	text_print_string_bkg(x, y +  9, "                    ");
	text_print_string_bkg(x, y + 10, "                    ");
	text_print_string_bkg(x, y + 11, "                    ");
}

UINT8 state_mort() {
	INT8 selected = -1;
	
	text_print_string_win(0, 1, "QUE FAIRE ?");

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