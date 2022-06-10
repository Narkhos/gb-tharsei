#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "police.h"
#include "tools.h"

// DRAW POLICE
void draw_police(unsigned int x, unsigned int y) {
	if (english) {
		text_print_string_bkg(x, y,      "THE LOGO ON MY      ");
		text_print_string_bkg(x, y +  1, "NOTEBOOK GAVE ME    ");
		text_print_string_bkg(x, y +  2, "JUST ENOUGH         ");
		text_print_string_bkg(x, y +  3, "RESPECTABILITY TO   ");
		text_print_string_bkg(x, y +  4, "GET THROUGH THE     ");
		text_print_string_bkg(x, y +  5, "CROWD.I REACHED ONE ");
		text_print_string_bkg(x, y +  6, "OF THE FEW SHUTTLES ");
		text_print_string_bkg(x, y +  7, "THAT HAD BEEN RUSHED");
		text_print_string_bkg(x, y +  8, "TO EVACUATE.        ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	} else {
		text_print_string_bkg(x, y,      "LE LOGO ILLUSTRANT  ");
		text_print_string_bkg(x, y +  1, "MON CARNET ME DONNA ");
		text_print_string_bkg(x, y +  2, "JUSTE ASSEZ DE      ");
		text_print_string_bkg(x, y +  3, "RESPECTABILITe POUR ");
		text_print_string_bkg(x, y +  4, "TRAVERSER LA FOULE  ");
		text_print_string_bkg(x, y +  5, "ET ATTEINDRE L'UNE  ");
		text_print_string_bkg(x, y +  6, "DES RARES NAVETTES  ");
		text_print_string_bkg(x, y +  7, "AFFReTeES EN URGENCE");
		text_print_string_bkg(x, y +  8, "POUR L'eVACUATION.  ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	}
}

UINT8 state_police() {
	INT8 selected = -1;

	text_print_string_win(1, 2, "m");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_BUS;
	}
		
	return SCREEN_SAME;
}