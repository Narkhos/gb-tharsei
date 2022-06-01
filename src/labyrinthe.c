#include <gb/gb.h>
#include <stdbool.h>
#include "text.h"
#include "menu.h"
#include "labyrinthe.h"
#include "tools.h"

// DRAW LABYRINTHE
void draw_labyrinthe(unsigned int x, unsigned int y) {
	text_print_string_bkg(x, y,      "J'eTAIS DANS UN     ");
	text_print_string_bkg(x, y +  1, "LABYRINTHE DE       ");
	text_print_string_bkg(x, y +  2, "COULOIRS.           ");
	text_print_string_bkg(x, y +  3, "                    ");
	text_print_string_bkg(x, y +  4, "                    ");
	text_print_string_bkg(x, y +  5, "                    ");
	text_print_string_bkg(x, y +  6, "                    ");
	text_print_string_bkg(x, y +  7, "                    ");
	text_print_string_bkg(x, y +  8, "                    ");
	text_print_string_bkg(x, y +  9, "                    ");
	text_print_string_bkg(x, y + 10, "                    ");
	text_print_string_bkg(x, y + 11, "                    ");
}

UINT8 state_labyrinthe() {
	INT8 selected = -1;
	
	text_print_string_win(0, 1, "ALLER VERS LE");

	text_print_string_win(1, 2, "NORD");
	text_print_string_win(1, 3, "SUD");
	text_print_string_win(1, 4, "EST");
	text_print_string_win(1, 5, "OUEST");

	selected = draw_menu();

	if (selected != -1) {
		sound_OK();
		pathIndex ++;
		currentPath[pathIndex] = directions[selected];
		if (pathIndex == 3 ) {
			if (checkArcheologuePath()) {
				return SCREEN_ARCHEOLOGUE;
			} else if (checkControlePath()) {
				return SCREEN_CONTROLE;
			} else {
				return SCREEN_MORT;
			}
		} else {
			return SCREEN_LABYRINTHE;
		}

	}
		
	return SCREEN_SAME;
}