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
	if (english) {
		text_print_string_bkg(x, y,      "I CONTEMPLATED THE  ");
		text_print_string_bkg(x, y +  1, "DESTROYED CITY FROM ");
		text_print_string_bkg(x, y +  2, "AFAR.THE REDDISH    ");
		text_print_string_bkg(x, y +  3, "DESERT DUST HAD THE ");
		text_print_string_bkg(x, y +  4, "BITTER TASTE OF     ");
		text_print_string_bkg(x, y +  5, "DEBACLE.COULD I HAVE");
		text_print_string_bkg(x, y +  6, "DONE ANYTHING TO    ");
		text_print_string_bkg(x, y +  7, "SAVE ALL THOSE      ");
		text_print_string_bkg(x, y +  8, "PEOPLE?             ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	} else {
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
}

UINT8 state_epilogue() {
	INT8 selected = -1;
	
	text_print_string_win(1, 2, "m");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_IMAGE_DEFEAT;
	}
		
	return SCREEN_SAME;
}