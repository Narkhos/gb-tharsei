#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "rebrousser.h"
#include "tools.h"

// DRAW REBROUSSER
void draw_rebrousser(unsigned int x, unsigned int y) {
	if (english) {
		text_print_string_bkg(x, y,      "CONSULTING MY       ");
		text_print_string_bkg(x, y +  1, "COMPASS FOUND MY WAY");
		text_print_string_bkg(x, y +  2, "TOWARDS THE EXIT, I ");
		text_print_string_bkg(x, y +  3, "UNDERSTOOD MY       ");
		text_print_string_bkg(x, y +  4, "MISTAKE.PROBABLY THE");
		text_print_string_bkg(x, y +  5, "SAME ONE THE        ");
		text_print_string_bkg(x, y +  6, "ARCHAEOLOGIST MADE! ");
		text_print_string_bkg(x, y +  7, "                    ");
		text_print_string_bkg(x, y +  8, "TOO LATEm           ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	} else {
		text_print_string_bkg(x, y,      "CONSULTANT MA       ");
		text_print_string_bkg(x, y +  1, "BOUSSOLE POUR       ");
		text_print_string_bkg(x, y +  2, "M'ORIENTER VERS LA  ");
		text_print_string_bkg(x, y +  3, "SORTIE, JE COMPRIS  ");
		text_print_string_bkg(x, y +  4, "MON ERREUR. LA MgME,");
		text_print_string_bkg(x, y +  5, "SANS DOUTE, QUE     ");
		text_print_string_bkg(x, y +  6, "L'ARCHeOLOGUE!      ");
		text_print_string_bkg(x, y +  7, "                    ");
		text_print_string_bkg(x, y +  8, "MAIS TROP TARDm     ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	}
}

UINT8 state_rebrousser() {
	INT8 selected = -1;
	
	text_print_string_win(1, 2, "m");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_MORT;
	}
		
	return SCREEN_SAME;
}