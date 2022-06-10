#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "the_end.h"
#include "eruption.h"
#include "tools.h"

// DRAW THE_END
void draw_the_end(unsigned int x, unsigned int y) {
	if (english) {
		text_print_string_bkg(x, y,      "SHORTLY AFTERWARDS  ");
		text_print_string_bkg(x, y +  1, "THE FLAMING CLOUD   ");
		text_print_string_bkg(x, y +  2, "FROM THE VOLCANO    ");
		text_print_string_bkg(x, y +  3, "REACHED THE CITY.   ");
		text_print_string_bkg(x, y +  4, "THANKS TO THE DOME, ");
		text_print_string_bkg(x, y +  5, "IT BYPASSED         ");
		text_print_string_bkg(x, y +  6, "THARSEII.THIS IS HOW");
		text_print_string_bkg(x, y +  7, "THE POPULATION WAS  ");
		text_print_string_bkg(x, y +  8, "SPARED AN           ");
		text_print_string_bkg(x, y +  9, "UNPRECEDENTED       ");
		text_print_string_bkg(x, y + 10, "DISASTER.           ");
		text_print_string_bkg(x, y + 11, "       THE END      ");
	} else {
		text_print_string_bkg(x, y,      "PEU DE TEMPS APRfS, ");
		text_print_string_bkg(x, y +  1, "LA NUeE ARDENTE     ");
		text_print_string_bkg(x, y +  2, "PROVENANT DU VOLCAN ");
		text_print_string_bkg(x, y +  3, "ARRIVA AU NIVEAU DE ");
		text_print_string_bkg(x, y +  4, "LA VILLE. GRcCE AU  ");
		text_print_string_bkg(x, y +  5, "DqME, ELLE CONTOURNA");
		text_print_string_bkg(x, y +  6, "THARSEII.C'EST AINSI");
		text_print_string_bkg(x, y +  7, "QUE LA POPULATION   ");
		text_print_string_bkg(x, y +  8, "FwT ePARGNeE D'UN   ");
		text_print_string_bkg(x, y +  9, "DeSASTRE SANS       ");
		text_print_string_bkg(x, y + 10, "PReCeDENT.          ");
		text_print_string_bkg(x, y + 11, "         FIN        ");
	}
}

UINT8 state_the_end() {
	INT8 selected = -1;
	
	text_print_string_win(1, 2, "m");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_IMAGE_THE_END;
	}
		
	return SCREEN_SAME;
}