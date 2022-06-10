#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "fuite.h"
#include "tools.h"

// DRAW FUITE
void draw_fuite(unsigned int x, unsigned int y) {
	if(english) {
		text_print_string_bkg(x, y,      "I STARTED TO RUN.   ");
		text_print_string_bkg(x, y +  1, "ON THE MAIN STREET: ");
		text_print_string_bkg(x, y +  2, "CHAOS. EVERYONE WAS ");
		text_print_string_bkg(x, y +  3, "TRYING TO GET AWAY. ");
		text_print_string_bkg(x, y +  4, "                    ");
		text_print_string_bkg(x, y +  5, "                    ");
		text_print_string_bkg(x, y +  6, "                    ");
		text_print_string_bkg(x, y +  7, "                    ");
		text_print_string_bkg(x, y +  8, "                    ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	} else {
		text_print_string_bkg(x, y,      "JE ME MIS b COURIR. ");
		text_print_string_bkg(x, y +  1, "SUR LE BOULEVARD :  ");
		text_print_string_bkg(x, y +  2, "LE CHAOS. TOUT LE   ");
		text_print_string_bkg(x, y +  3, "MONDE CHERCHAIT b   ");
		text_print_string_bkg(x, y +  4, "S'ENFUIR.           ");
		text_print_string_bkg(x, y +  5, "                    ");
		text_print_string_bkg(x, y +  6, "                    ");
		text_print_string_bkg(x, y +  7, "                    ");
		text_print_string_bkg(x, y +  8, "                    ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	}
}

UINT8 state_fuite() {
	INT8 selected = -1;

	if (english) {
		if (carnet) {
			text_print_string_win(1, 2, "WAVING MY BADGE");
		}

		if (piedDeBiche) {
			text_print_string_win(1, 2, "USE FORCE");
		}

		text_print_string_win(1, 3, "MAKE MY WAY THROUGH");
		text_print_string_win(1, 4, "          THE CROWD");
	} else {
		if (carnet) {
			text_print_string_win(1, 2, "BRANDIR MON INSIGNE");
		}

		if (piedDeBiche) {
			text_print_string_win(1, 2, "UTILISER LA FORCE");
		}

		text_print_string_win(1, 3, "ME FRAYER UN CHEMIN");
		text_print_string_win(1, 4, "      DANS LA FOULE");
	}

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		if (carnet) {
			return SCREEN_POLICE;
		} else if (piedDeBiche) {
			return SCREEN_FORCE;
		}
	}

	if (selected == 1) {
		sound_OK();
		return SCREEN_FOULE;
	}
		
	return SCREEN_SAME;
}