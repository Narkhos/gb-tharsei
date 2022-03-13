#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "title.h"
#include "intro.h"
#include "epilogue.h"
#include "tools.h"

// DRAW EPILOGUE
void draw_epilogue(unsigned int x, unsigned int y) {
	text_print_string_bkg(x, y,      "TANDIS QUE JE       ");
	text_print_string_bkg(x, y +  1, "CONTEMPLAIS AU LOIN ");
	text_print_string_bkg(x, y +  2, "LA VILLE DeVASTeE,  ");
	text_print_string_bkg(x, y +  3, "LA POUSSIfRE        ");
	text_print_string_bkg(x, y +  4, "ROUGEcTRE DU DeSERT ");
	text_print_string_bkg(x, y +  5, "PRENAIT LE GOwT     ");
	text_print_string_bkg(x, y +  6, "AMER DE LA DeBcCLE. ");
	text_print_string_bkg(x, y +  7, "N'AURAIS-JE PAS PU  ");
	text_print_string_bkg(x, y +  8, "FAIRE QUELQUE-CHOSE ");
	text_print_string_bkg(x, y +  9, "POUR SAUVER TOUS CES");
	text_print_string_bkg(x, y + 10, "GENS ?              ");
	text_print_string_bkg(x, y + 11, "                    ");
}

UINT8 state_epilogue() {
	INT8 selected = -1;
	
	text_print_string_win(0, 1, "QUE FAIRE ?");

	text_print_string_win(1, 2, "ReESSAYER");
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