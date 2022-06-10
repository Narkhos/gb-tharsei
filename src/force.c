#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "force.h"
#include "tools.h"

// DRAW FORCE
void draw_force(unsigned int x, unsigned int y) {
	if(english) {
		text_print_string_bkg(x, y,      "WIELDING THE CROWBAR");
		text_print_string_bkg(x, y +  1, "I THREATENED A      ");
		text_print_string_bkg(x, y +  2, "MOTORCYCLIST AND    ");
		text_print_string_bkg(x, y +  3, "SEIZED HIS VEHICLE. ");
		text_print_string_bkg(x, y +  4, "                    ");
		text_print_string_bkg(x, y +  5, "                    ");
		text_print_string_bkg(x, y +  6, "                    ");
		text_print_string_bkg(x, y +  7, "                    ");
		text_print_string_bkg(x, y +  8, "                    ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	} else {
		text_print_string_bkg(x, y,      "BRANDISSANT LE      ");
		text_print_string_bkg(x, y +  1, "PIED-DE-BICHE, JE   ");
		text_print_string_bkg(x, y +  2, "MIS EN FUITE UN     ");
		text_print_string_bkg(x, y +  3, "MOTARD ET M'EMPARAI ");
		text_print_string_bkg(x, y +  4, "DE SON VeHICULE.    ");
		text_print_string_bkg(x, y +  5, "                    ");
		text_print_string_bkg(x, y +  6, "                    ");
		text_print_string_bkg(x, y +  7, "                    ");
		text_print_string_bkg(x, y +  8, "                    ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	}
}

UINT8 state_force() {
	INT8 selected = -1;

	text_print_string_win(1, 2, "m");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_EPILOGUE;
	}
		
	return SCREEN_SAME;
}