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
	if (english) {
		text_print_string_bkg(x, y,      "UDDENLY, ANOTHER    ");
		text_print_string_bkg(x, y +  1, "TREMOR WAS FELT.    ");
		text_print_string_bkg(x, y +  2, "I WAS BURIED UNDER  ");
		text_print_string_bkg(x, y +  3, "TONS OF RUBBLE.     ");
		text_print_string_bkg(x, y +  4, "                    ");
		text_print_string_bkg(x, y +  5, "                    ");
		text_print_string_bkg(x, y +  6, "                    ");
		text_print_string_bkg(x, y +  7, "                    ");
		text_print_string_bkg(x, y +  8, "                    ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	} else {
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
}

UINT8 state_mort() {
	INT8 selected = -1;

	text_print_string_win(1, 2, "m");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_IMAGE_MORT;
	}
		
	return SCREEN_SAME;
}