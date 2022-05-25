#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "abattis.h"
#include "carnet.h"
#include "eruption.h"
#include "tools.h"

// DRAW ABATTIS
void draw_abattis(unsigned int x, unsigned int y) {
	text_print_string_bkg(x, y,      "LA NUQUE EN SANG, JE");
	text_print_string_bkg(x, y +  1, "CHERCHAI UN MOUCHOIR");
	text_print_string_bkg(x, y +  2, "ET CONSTATAI QUE LA ");
	text_print_string_bkg(x, y +  3, "POCHE DE MON IMPER  ");
	text_print_string_bkg(x, y +  4, "AVAIT eTe ARRACHeE  ");
	text_print_string_bkg(x, y +  5, "DANS LA BAGARRE. JE ");
	text_print_string_bkg(x, y +  6, "REPeRAI MON CARNET  ");
	text_print_string_bkg(x, y +  7, "PAR TERRE GRcCE b   ");
	text_print_string_bkg(x, y +  8, "L'INSIGNE DE POLICE ");
	text_print_string_bkg(x, y +  9, "BRILLANTE SUR LA    ");
	text_print_string_bkg(x, y + 10, "COUVERTURE.         ");
	text_print_string_bkg(x, y + 11, "                    ");
}

UINT8 state_abattis() {
	INT8 selected = -1;
	
	// text_print_string_win(0, 1, "QUE FAIRE ?");

	text_print_string_win(1, 2, "EXAMINER LE CARNET");
	// text_print_string_win(1, 3, "INSPECTER LES LIEUX");

	selected = draw_menu();

	if (selected == 0) {
		return SCREEN_CARNET;
	}
	
	// if (selected == 1) {
	// 	sound_OK();
	// 	return SCREEN_ERUPTION;
	// }
		
	return SCREEN_SAME;
}