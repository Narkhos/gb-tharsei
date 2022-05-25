#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "perdu.h"
#include "mort.h"
#include "tools.h"

// DRAW PERDU
void draw_perdu(unsigned int x, unsigned int y) {
	text_print_string_bkg(x, y,      "JE COMMENsAIS b     ");
	text_print_string_bkg(x, y +  1, "REGRETTER DE M'gTRE ");
	text_print_string_bkg(x, y +  2, "ENGAGe AU HASARD    ");
	text_print_string_bkg(x, y +  3, "DANS CES COULOIRS.  ");
	text_print_string_bkg(x, y +  4, "CHERCHANT b REVENIR ");
	text_print_string_bkg(x, y +  5, "SUR MES PAS, JE ME  ");
	text_print_string_bkg(x, y +  6, "RENDAIS COMPTE QUE  ");
	text_print_string_bkg(x, y +  7, "LES LIEUX eTAIENT   ");
	text_print_string_bkg(x, y +  8, "PLUS TORTUEUX QU'ILS");
	text_print_string_bkg(x, y +  9, "N'Y PARAISSAIENT.   ");
	text_print_string_bkg(x, y + 10, "b L'eVIDENCE,       ");
	text_print_string_bkg(x, y + 11, "J'eTAIS PERDU.      ");
}

UINT8 state_perdu() {
	INT8 selected = -1;
	
	// text_print_string_win(0, 1, "QUE FAIRE ?");

	text_print_string_win(1, 2, "CHERCHER LA SORTIE");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_MORT;
	}
		
	return SCREEN_SAME;
}