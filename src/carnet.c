#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "carnet.h"
#include "eruption.h"
#include "tools.h"

// DRAW CARNET
void draw_carnet(unsigned int x, unsigned int y) {
	if (english) {
		text_print_string_bkg(x, y,      "IT CONTAINED MY     ");
		text_print_string_bkg(x, y +  1, "INVESTIGATION NOTES.");
		text_print_string_bkg(x, y +  2, "AN ARCHAEOLOGIST    ");
		text_print_string_bkg(x, y +  3, "DISAPPEARED A MONTH ");
		text_print_string_bkg(x, y +  4, "EARLIER.            ");
		text_print_string_bkg(x, y +  5, "ON THE PAPER FOUND  ");
		text_print_string_bkg(x, y +  6, "AT HIS HOTEL, A     ");
		text_print_string_bkg(x, y +  7, "SIMPLE WORD WAS     ");
		text_print_string_bkg(x, y +  8, "SCRIBBLED:          ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "       'SEEN'       ");
		text_print_string_bkg(x, y + 11, "                    ");
	} else {
		text_print_string_bkg(x, y,      "IL CONTENAIT MES    ");
		text_print_string_bkg(x, y +  1, "NOTES POUR L'ENQUgTE");
		text_print_string_bkg(x, y +  2, "SUR UN ARCHeOLOGUE  ");
		text_print_string_bkg(x, y +  3, "DISPARU LE MOIS     ");
		text_print_string_bkg(x, y +  4, "PReCeDENT. ET LE    ");
		text_print_string_bkg(x, y +  5, "PAPIER TROUVe b SON ");
		text_print_string_bkg(x, y +  6, "HqTEL GRIFFONNe D'UN");
		text_print_string_bkg(x, y +  7, "SIMPLE MOT:         ");
		text_print_string_bkg(x, y +  8, "                    ");
		text_print_string_bkg(x, y +  9, "       kSEENl       ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	}
}

UINT8 state_carnet() {
	INT8 selected = -1;

	if (english) {
		text_print_string_win(1, 2, "INSPECT THE AREA");
	} else {
		text_print_string_win(1, 2, "INSPECTER LES LIEUX");
	}

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_ERUPTION;
	}
		
	return SCREEN_SAME;
}