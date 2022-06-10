#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "intro.h"
#include "abattis.h"
#include "inspecter.h"
#include "tools.h"

// DRAW INTRO
void draw_intro(unsigned int x, unsigned int y) {
	if (english) {
		text_print_string_bkg(x, y,      "I WAKED UP IN A     ");
		text_print_string_bkg(x, y +  1, "DEAD-END STREET AT  ");
		text_print_string_bkg(x, y +  2, "MELONE DISTRICT. MY ");
		text_print_string_bkg(x, y +  3, "HEAD WAS ACHING.    ");
		text_print_string_bkg(x, y +  4, "                    ");
		text_print_string_bkg(x, y +  5, "THAT'LL TEACH ME TO ");
		text_print_string_bkg(x, y +  6, "INVESTIGATE IN THE  ");
		text_print_string_bkg(x, y +  7, "MOST ILL-FAMED AREA ");
		text_print_string_bkg(x, y +  8, "IN THARSEII!        ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	} else {
		text_print_string_bkg(x, y,      "JE REPRIS CONSCIENCE");
		text_print_string_bkg(x, y +  1, "DANS UNE IMPASSE DE ");
		text_print_string_bkg(x, y +  2, "MELONE DISTRICT, LE ");
		text_print_string_bkg(x, y +  3, "CRcNE ENDOLORI.     ");
		text_print_string_bkg(x, y +  4, "                    ");
		text_print_string_bkg(x, y +  5, "sA M'APPRENDRA b    ");
		text_print_string_bkg(x, y +  6, "ENQUgTER DANS LE    ");
		text_print_string_bkg(x, y +  7, "QUARTIER LE PLUS MAL");
		text_print_string_bkg(x, y +  8, "FAMe DE THARSEII !  ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	}
}

UINT8 state_intro() {
	INT8 selected = -1;

	if (english) {
		text_print_string_win(1, 2, "EXAMINE MYSELF");
		text_print_string_win(1, 3, "INSPECT THE AREA");
	} else {
		text_print_string_win(1, 2, "COMPTER MES ABATTIS");
		text_print_string_win(1, 3, "INSPECTER LES LIEUX");
	}

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_ABATTIS;
	}

	if (selected == 1) {
		sound_OK();
		return SCREEN_INSPECTER;
	}
		
	return SCREEN_SAME;
}