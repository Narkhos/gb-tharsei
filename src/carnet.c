#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "carnet.h"
#include "eruption.h"
#include "tools.h"

// DRAW CARNET
void draw_carnet(unsigned int x, unsigned int y) {
	text_print_string_bkg(x, y,      "IL CONTENAIT MES    ");
	text_print_string_bkg(x, y +  1, "NOTES POUR L'ENQUgTE");
	text_print_string_bkg(x, y +  2, "SUR UN ARCHeOLOGUE  ");
	text_print_string_bkg(x, y +  3, "DISPARU LE MOIS     ");
	text_print_string_bkg(x, y +  4, "PReCeDENT. ET LE    ");
	text_print_string_bkg(x, y +  5, "PAPIER TROUVe b SON ");
	text_print_string_bkg(x, y +  6, "HqTEL GRIFFONNe D'UN");
	text_print_string_bkg(x, y +  7, "SIMPLE MOT:kNOOSEl. ");
	text_print_string_bkg(x, y +  8, "                    ");
	text_print_string_bkg(x, y +  9, "                    ");
	text_print_string_bkg(x, y + 10, "                    ");
	text_print_string_bkg(x, y + 11, "                    ");
}

UINT8 state_carnet() {
	INT8 selected = -1;
	
	text_print_string_win(0, 1, "QUE FAIRE ?");

	text_print_string_win(1, 2, "INSPECTER LES LIEUX");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_ERUPTION;
	}
		
	return SCREEN_SAME;
}