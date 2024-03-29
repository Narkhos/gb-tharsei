#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "title.h"
#include "intro.h"
#include "foule.h"
#include "tools.h"

// DRAW FOULE
void draw_foule(unsigned int x, unsigned int y) {
	if(english) {
		text_print_string_bkg(x, y,      "FIGHTING AGAINST THE");
		text_print_string_bkg(x, y +  1, "COMPACT MASS OF THE ");
		text_print_string_bkg(x, y +  2, "CROWD WAS HOPELESS. ");
		text_print_string_bkg(x, y +  3, "                    ");
		text_print_string_bkg(x, y +  4, "I WAS QUICKLY       ");
		text_print_string_bkg(x, y +  5, "CARRIED OUT AND     ");
		text_print_string_bkg(x, y +  6, "STAMPED ON.         ");
		text_print_string_bkg(x, y +  7, "                    ");
		text_print_string_bkg(x, y +  8, "                    ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	} else {
		text_print_string_bkg(x, y,      "LUTTER CONTRE LA    ");
		text_print_string_bkg(x, y +  1, "MASSE COMPACTE DE LA");
		text_print_string_bkg(x, y +  2, "FOULE eTAIT         ");
		text_print_string_bkg(x, y +  3, "DeSESPeRe. JE FUS   ");
		text_print_string_bkg(x, y +  4, "RAPIDEMENT EMPORTe  ");
		text_print_string_bkg(x, y +  5, "ET PIeTINe.         ");
		text_print_string_bkg(x, y +  6, "                    ");
		text_print_string_bkg(x, y +  7, "                    ");
		text_print_string_bkg(x, y +  8, "                    ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	}
}

UINT8 state_foule() {
	INT8 selected = -1;

	text_print_string_win(1, 2, "m");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_IMAGE_MORT;
	}
		
	return SCREEN_SAME;
}