#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "bus.h"
#include "tools.h"

// DRAW BUS
void draw_bus(unsigned int x, unsigned int y) {
	if(english) {
		text_print_string_bkg(x, y,      "AS HE STARTED UP,THE");
		text_print_string_bkg(x, y +  1, "DRIVER PUT ON THE   ");
		text_print_string_bkg(x, y +  2, "RADIO: 'WE STILL    ");
		text_print_string_bkg(x, y +  3, "DON'T KNOW WHAT     ");
		text_print_string_bkg(x, y +  4, "CAUSED THE ERUPTION,");
		text_print_string_bkg(x, y +  5, "SOME SCIENTISTS     ");
		text_print_string_bkg(x, y +  6, "SUGGEST A LINK WITH ");
		text_print_string_bkg(x, y +  7, "THE RECENT INVERSION");
		text_print_string_bkg(x, y +  8, "OF THE MAGNETIC     ");
		text_print_string_bkg(x, y +  9, "POLES'.             ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	} else {
		text_print_string_bkg(x, y,      "EN DeMARRANT, LE    ");
		text_print_string_bkg(x, y +  1, "CHAUFFEUR MIS LA    ");
		text_print_string_bkg(x, y +  2, "RADIO : kmNOUS      ");
		text_print_string_bkg(x, y +  3, "IGNORONS ENCORE LES ");
		text_print_string_bkg(x, y +  4, "CAUSES DE L'eRUPTION");
		text_print_string_bkg(x, y +  5, "CERTAINS CHERCHEURS ");
		text_print_string_bkg(x, y +  6, "AVANCENT UN LIEN    ");
		text_print_string_bkg(x, y +  7, "AVEC L'INVERSION DES");
		text_print_string_bkg(x, y +  8, "PqLES MAGNeTIQUES   ");
		text_print_string_bkg(x, y +  9, "SURVENUE ReCEMMENTml");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	}
}

UINT8 state_bus() {
	INT8 selected = -1;
	
	text_print_string_win(1, 2, "m");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_EPILOGUE;
	}
		
	return SCREEN_SAME;
}