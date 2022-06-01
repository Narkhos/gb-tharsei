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
	if (english) {
		text_print_string_bkg(x, y,      "MY NECK WAS BLOODY. ");
		text_print_string_bkg(x, y +  1, "LOOKING FOR A TISSUE");
		text_print_string_bkg(x, y +  2, "I FOUND THAT THE    ");
		text_print_string_bkg(x, y +  3, "POCKET OF MY COAT   ");
		text_print_string_bkg(x, y +  4, "HAD BEEN RIPPED OUT ");
		text_print_string_bkg(x, y +  5, "IN THE FIGHT. I     ");
		text_print_string_bkg(x, y +  6, "SPOTTED MY NOTEBOOK ");
		text_print_string_bkg(x, y +  7, "ON THE FLOOR BY THE ");
		text_print_string_bkg(x, y +  8, "SHINY POLICE BADGE  ");
		text_print_string_bkg(x, y +  9, "ON THE COVER.       ");
		text_print_string_bkg(x, y + 10, "                    ");
		text_print_string_bkg(x, y + 11, "                    ");
	} else {
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
}

UINT8 state_abattis() {
	INT8 selected = -1;
	
	if (english) {
		text_print_string_win(1, 2, "EXAMINE MY NOTEBOOK");
	} else {
		text_print_string_win(1, 2, "EXAMINER LE CARNET ");
	}

	selected = draw_menu();

	if (selected == 0) {
		return SCREEN_CARNET;
	}
		
	return SCREEN_SAME;
}