#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "victoire.h"
#include "tools.h"

// DRAW VICTOIRE
void draw_victoire(unsigned int x, unsigned int y) {
	if (english) {
		text_print_string_bkg(x, y,      "I HAD JUST ACTIVATED");
		text_print_string_bkg(x, y +  1, "THE PROTECTIVE DOME ");
		text_print_string_bkg(x, y +  2, "THAT ONCE GAVE THE  ");
		text_print_string_bkg(x, y +  3, "CITY A BREATHABLE   ");
		text_print_string_bkg(x, y +  4, "ATMOSPHERE.         ");
		text_print_string_bkg(x, y +  5, "                    ");
		text_print_string_bkg(x, y +  6, "                    ");
		text_print_string_bkg(x, y +  7, "                    ");
		text_print_string_bkg(x, y +  8, "                    ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	} else {
		text_print_string_bkg(x, y,      "JE VENAIS D'ACTIVER ");
		text_print_string_bkg(x, y +  1, "LE DqME PROTECTEUR  ");
		text_print_string_bkg(x, y +  2, "QUI JADIS DONNAIT b ");
		text_print_string_bkg(x, y +  3, "LA VILLE UNE        ");
		text_print_string_bkg(x, y +  4, "ATMOSPHfRE          ");
		text_print_string_bkg(x, y +  5, "RESPIRABLE.         ");
		text_print_string_bkg(x, y +  6, "                    ");
		text_print_string_bkg(x, y +  7, "                    ");
		text_print_string_bkg(x, y +  8, "                    ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	}
}

UINT8 state_victoire() {
	INT8 selected = -1;

	text_print_string_win(1, 2, "m");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_THE_END;
	}
		
	return SCREEN_SAME;
}