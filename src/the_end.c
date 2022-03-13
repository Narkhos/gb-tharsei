#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "the_end.h"
#include "eruption.h"
#include "tools.h"

// DRAW THE_END
void draw_the_end(unsigned int x, unsigned int y) {
	text_print_string_bkg(x, y,      "PEU DE TEMPS APRfS, ");
	text_print_string_bkg(x, y +  1, "LA NUeE ARDENTE     ");
	text_print_string_bkg(x, y +  2, "PROVENANT DU VOLCAN ");
	text_print_string_bkg(x, y +  3, "ARRIVA AU NIVEAU DE ");
	text_print_string_bkg(x, y +  4, "LA VILLE. GRcCE AU  ");
	text_print_string_bkg(x, y +  5, "DqME, ELLE CONTOURNA");
	text_print_string_bkg(x, y +  6, "THARSeI.C'EST AINSI ");
	text_print_string_bkg(x, y +  7, "QUE LA POPULATION   ");
	text_print_string_bkg(x, y +  8, "FwT ePARGNeE D'UN   ");
	text_print_string_bkg(x, y +  9, "DeSASTRE SANS       ");
	text_print_string_bkg(x, y + 10, "PReCeDENT.          ");
	text_print_string_bkg(x, y + 11, "         FIN        ");
}

UINT8 state_the_end() {
	INT8 selected = -1;
	
	text_print_string_win(0, 1, "QUE FAIRE ?");

	text_print_string_win(1, 2, "RECOMMENCER");
	text_print_string_win(1, 3, "QUITTER");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_INTRO;
	}

	if (selected == 1) {
		sound_OK();
		return SCREEN_TITLE;
	}
		
	return SCREEN_SAME;
}