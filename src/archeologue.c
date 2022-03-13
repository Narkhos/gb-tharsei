#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "archeologue.h"
#include "tools.h"

// DRAW ARCHEOLOGUE
void draw_archeologue(unsigned int x, unsigned int y) {
	text_print_string_bkg(x, y,      "L'ARCHeOLOGUE       ");
	text_print_string_bkg(x, y +  1, "GISAIT DANS UN      ");
	text_print_string_bkg(x, y +  2, "CUL-DE-SAC,         ");
	text_print_string_bkg(x, y +  3, "VICTIME D'UN        ");
	text_print_string_bkg(x, y +  4, "eBOULEMENT.         ");
	text_print_string_bkg(x, y +  5, "UNE FEUILLE FROISSeE");
	text_print_string_bkg(x, y +  6, "DANS SA MAIN        ");
	text_print_string_bkg(x, y +  7, "INDIQUAIT:          ");
	text_print_string_bkg(x, y +  8, "- ESTA:ENTRER       ");
	text_print_string_bkg(x, y +  9, "- KAESTA:SORTIR     ");
	text_print_string_bkg(x, y + 10, "- KAPITA:DeSACTIVER ");
	text_print_string_bkg(x, y + 11, "- VOCT:DqME         ");
}

UINT8 state_archeologue() {
	INT8 selected = -1;
	
	text_print_string_win(0, 1, "QUE FAIRE ?");

	text_print_string_win(1, 2, "REBROUSSER CHEMIN");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_REBROUSSER;
	}
		
	return SCREEN_SAME;
}