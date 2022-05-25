#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "eruption.h"
#include "tools.h"

// DRAW ERUPTION
void draw_eruption(unsigned int x, unsigned int y) {
	text_print_string_bkg(x, y,      "SOUDAIN, LE SOL     ");
	text_print_string_bkg(x, y +  1, "TREMBLA. LES VITRES ");
	text_print_string_bkg(x, y +  2, "eCLATfRENT AU-DESSUS");
	text_print_string_bkg(x, y +  3, "DE MOI. LEVANT LES  ");
	text_print_string_bkg(x, y +  4, "YEUX, JE VIS UN     ");
	text_print_string_bkg(x, y +  5, "PANACHE DE FUMeE    ");
	text_print_string_bkg(x, y +  6, "DeVALANT LE FLANC   ");
	text_print_string_bkg(x, y +  7, "D'OLYMPUS MONS. LE  ");
	text_print_string_bkg(x, y +  8, "VOLCAN SURPLOMBANT  ");
	text_print_string_bkg(x, y +  9, "LA VILLE VENAIT     ");
	text_print_string_bkg(x, y + 10, "D'ENTRER EN         ");
	text_print_string_bkg(x, y + 11, "eRUPTION !          ");
}

UINT8 state_eruption() {
	INT8 selected = -1;
	
	// text_print_string_win(0, 1, "QUE FAIRE ?");

	text_print_string_win(1, 2, "FUIR SANS TARDER");
	text_print_string_win(1, 3, "CHERCHER UN ABRI");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_FUITE;
	}
	if (selected == 1) {
		sound_OK();
		if(piedDeBiche) {
			return SCREEN_EGOUTS_OK;
		} else {
			return SCREEN_EGOUTS_KO;

		}
	}
		
	return SCREEN_SAME;
}