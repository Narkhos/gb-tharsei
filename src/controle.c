#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "controle.h"
#include "tools.h"

// DRAW CONTROLE
void draw_controle(unsigned int x, unsigned int y) {
	if (english) {
		text_print_string_bkg(x, y,      "I ARRIVED IN AN     ");
		text_print_string_bkg(x, y +  1, "ANCIENT CONTROL     ");
		text_print_string_bkg(x, y +  2, "ROOM THAT SEEMED TO ");
		text_print_string_bkg(x, y +  3, "HAVE BEEN CREATED IN");
		text_print_string_bkg(x, y +  4, "THE PRE-ECOGENESIS  ");
		text_print_string_bkg(x, y +  5, "ERA.                ");
		text_print_string_bkg(x, y +  6, "ON THE SCREEN A LIST");
		text_print_string_bkg(x, y +  7, "OF COMMANDS IN AN   ");
		text_print_string_bkg(x, y +  8, "UNKNOWN LANGUAGE WAS");
		text_print_string_bkg(x, y +  9, "DISPLAYED:          ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	} else {
		text_print_string_bkg(x, y,      "J'ARRIVAI DANS UNE  ");
		text_print_string_bkg(x, y +  1, "ANCIENNE SALLE DE   ");
		text_print_string_bkg(x, y +  2, "CONTRqLE SEMBLANT   ");
		text_print_string_bkg(x, y +  3, "REMONTER b L'fRE    ");
		text_print_string_bkg(x, y +  4, "PRe-eCOGENfSE.      ");
		text_print_string_bkg(x, y +  5, "                    ");
		text_print_string_bkg(x, y +  6, "SUR LE TERMINAL, DES");
		text_print_string_bkg(x, y +  7, "COMMANDES EN LANGUE ");
		text_print_string_bkg(x, y +  8, "INCONNUE :          ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	}
}

UINT8 state_controle() {
	INT8 selected = -1;

	text_print_string_win(1, 2, "KAPITA-EST");
	text_print_string_win(1, 3, "PITA-EST");
	text_print_string_win(1, 4, "PITA-VOCT");
	text_print_string_win(1, 5, "KAPITA-VOCT");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_ERREUR;
	}
	if (selected == 1) {
		sound_OK();
		return SCREEN_ERREUR;
	}
	if (selected == 2) {
		sound_OK();
		return SCREEN_VICTOIRE;
	}
	if (selected == 3) {
		sound_OK();
		return SCREEN_ERREUR;
	}
		
	return SCREEN_SAME;
}