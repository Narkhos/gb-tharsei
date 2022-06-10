#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "inspecter.h"
#include "eruption.h"
#include "tools.h"

// DRAW INSPECTER
void draw_inspecter(unsigned int x, unsigned int y) {
	if (english) {
		text_print_string_bkg(x, y,      "AFTER ALL, MY       ");
		text_print_string_bkg(x, y +  1, "INFORMANT HADN'T    ");
		text_print_string_bkg(x, y +  2, "SENT ME HERE JUST TO");
		text_print_string_bkg(x, y +  3, "GET BEATEN UP!      ");
		text_print_string_bkg(x, y +  4, "SEARCHING THE PLACE,");
		text_print_string_bkg(x, y +  5, "I FOUND A CROWBAR   ");
		text_print_string_bkg(x, y +  6, "COVERED IN MY OWN   ");
		text_print_string_bkg(x, y +  7, "BLOODm              ");
		text_print_string_bkg(x, y +  8, "                    ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	} else {
		text_print_string_bkg(x, y,      "APRfS TOUT, MON     ");
		text_print_string_bkg(x, y +  1, "INFORMATEUR NE      ");
		text_print_string_bkg(x, y +  2, "M'AVAIT PAS ENVOYe  ");
		text_print_string_bkg(x, y +  3, "ICI UNIQUEMENT      ");
		text_print_string_bkg(x, y +  4, "POUR ME FAIRE       ");
		text_print_string_bkg(x, y +  5, "COGNER! EN FOUILLANT");
		text_print_string_bkg(x, y +  6, "LES LIEUX,JE TROUVAI");
		text_print_string_bkg(x, y +  7, "UN PIED-DE-BICHE    ");
		text_print_string_bkg(x, y +  8, "COUVERT DE MON      ");
		text_print_string_bkg(x, y +  9, "PROPRE SANGm        ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	}
}

UINT8 state_inspecter() {
	INT8 selected = -1;

	if(english) {
		text_print_string_win(1, 2, "TAKE THE CROWBAR   ");
	} else {
		text_print_string_win(1, 2, "PRENDRE LE         ");
		text_print_string_win(1, 3, "      PIED-DE-BICHE");
	}

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_ERUPTION;
	}
		
	return SCREEN_SAME;
}