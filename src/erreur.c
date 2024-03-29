#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "erreur.h"
#include "tools.h"

// DRAW ERREUR
void draw_erreur(unsigned int x, unsigned int y) {
	if (english) {
		text_print_string_bkg(x, y,      "I HEARD A CLATTER.  ");
		text_print_string_bkg(x, y +  1, "NOTHING HAPPENEDm   ");
		text_print_string_bkg(x, y +  2, "BAD MOVE!           ");
		text_print_string_bkg(x, y +  3, "I SHOULD HAVE       ");
		text_print_string_bkg(x, y +  4, "LISTENED DURING THE ");
		text_print_string_bkg(x, y +  5, "ANCIENT LANGUAGES   ");
		text_print_string_bkg(x, y +  6, "CLASSES AT SCHOOL!  ");
		text_print_string_bkg(x, y +  7, "                    ");
		text_print_string_bkg(x, y +  8, "                    ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	} else {
		text_print_string_bkg(x, y,      "UN CLIQUETIS SE FIT ");
		text_print_string_bkg(x, y +  1, "ENTENDRE MAIS RIEN  ");
		text_print_string_bkg(x, y +  2, "NE SE PASSA.        ");
		text_print_string_bkg(x, y +  3, "MAUVAISE PIOCHE!    ");
		text_print_string_bkg(x, y +  4, "J'AURAIS MIEUX FAIT ");
		text_print_string_bkg(x, y +  5, "D'eCOUTER PENDANT   ");
		text_print_string_bkg(x, y +  6, "LES COURS DE LANGUES");
		text_print_string_bkg(x, y +  7, "ANCIENNES           ");
		text_print_string_bkg(x, y +  8, "b L'UNIVERSITe!     ");
		text_print_string_bkg(x, y +  9, "                    ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	}
}

UINT8 state_erreur() {
	INT8 selected = -1;

	text_print_string_win(1, 2, "m");

	selected = draw_menu();

	if (selected == 0) {
		sound_OK();
		return SCREEN_MORT;
	}
		
	return SCREEN_SAME;
}