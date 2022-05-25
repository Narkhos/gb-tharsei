#include <stdbool.h>
#include <gb/gb.h>
#include "music/hUGEDriver.h"

#include "gfx/title_tileset.h"
#include "gfx/death_tileset.h"
#include "gfx/victory_tileset.h"
#include "gfx/defeat_tileset.h"

#include "text.h"
#include "menu.h"
#include "tools.h"
#include "title.h"
#include "intro.h"
#include "abattis.h"
#include "carnet.h"
#include "inspecter.h"
#include "eruption.h"
#include "fuite.h"
#include "foule.h"
#include "perdu.h"
#include "mort.h"
#include "image_mort.h"
#include "image_defeat.h"
#include "epilogue.h"
#include "the_end.h"
#include "image_the_end.h"
#include "controle.h"
#include "erreur.h"
#include "victoire.h"
#include "archeologue.h"
#include "rebrousser.h"
#include "labyrinthe.h"
#include "egouts_ok.h"
#include "egouts_ko.h"
#include "credits.h"
#include "police.h"
#include "bus.h"
#include "force.h"

// extern const hUGESong_t test;
extern const hUGESong_t song;

// Enable/Disable title music
void enableMusic(bool enable) {
	hUGE_mute_channel(HT_CH1, !enable);
	hUGE_mute_channel(HT_CH2, !enable);
	hUGE_mute_channel(HT_CH3, !enable);
	hUGE_mute_channel(HT_CH4, !enable);
}

bool checkArcheologuePath() {
	return archeologuePath[0] == currentPath[0]
		&&  archeologuePath[1] == currentPath[1]
		&&  archeologuePath[2] == currentPath[2]
		&&  archeologuePath[3] == currentPath[3]
		&&  archeologuePath[4] == currentPath[4];
}

bool checkControlePath() {
	return controlePath[0] == currentPath[0]
		&&  controlePath[1] == currentPath[1]
		&&  controlePath[2] == currentPath[2]
		&&  controlePath[3] == currentPath[3]
		&&  controlePath[4] == currentPath[4];
}

const char archeologuePath[5] = {'N', 'O', 'O', 'S', 'E'};
const char controlePath[5] = {'S', 'E', 'E', 'N', 'O'};
const char directions[4] = {'N', 'S', 'E', 'O'};

char currentPath[5] = {' ', ' ', ' ', ' ', ' '};
INT8 pathIndex = -1;

bool carnet = false;
bool piedDeBiche = false;

const UINT16 powOfTen[5] = {1, 10, 100, 1000, 10000};

unsigned char win_tilemap[6*21];

char *itoa(UINT16 n, char *s, UINT8 length)
{
	UINT16 ret;
	
	for(UINT8 i = 0; i < length; i++) {
		unsigned int j = length - i -1;
		ret = n/powOfTen[j];
		s[i] = (BYTE)ret + '0';
		n = n - ret * powOfTen[j];
	}
	
	s[length] = '\0';
	
	return s;
}

void print_separator() {
	text_print_string_win(0, 0, "____________________");
}

void clear_win() {
	set_win_tiles(0, 1, 21, 5, win_tilemap);
	print_separator();
}

UINT8 gameScreen = SCREEN_TITLE;

unsigned int x = 0; // scroll background x position
unsigned int y = 0; // scroll background y position

void init_game() {
	carnet = false;
	piedDeBiche = false;

	currentPath[0] = ' ';
	currentPath[1] = ' ';
	currentPath[2] = ' ';
	currentPath[3] = ' ';
	currentPath[4] = ' ';
	pathIndex = -1;
}

void set_screen(UINT8 screen) {
	HIDE_BKG;
	gameScreen = screen;
	clear_win();

	UINT8 entryCount;

	switch(gameScreen) {
		case SCREEN_TITLE:
			SWITCH_ROM_MBC1(1);
			// __critical {
			// 	enableMusic(false);
				// hUGE_init(&song);
				enableMusic(true);
			// }
			set_bkg_data(0, TITLE_TILESET_TILE_COUNT, TITLE_TILESET);
			draw_title(x, y + Y_BUFFERS[y_buffer]);
			init_menu(2);
			break;
		case SCREEN_CREDITS:
			SWITCH_ROM_MBC1(2);
			// 	__critical {
			// 	enableMusic(false);
			// 	hUGE_init(&test);
			// 	enableMusic(true);
			// }
			draw_credits(x, y + Y_BUFFERS[y_buffer]);
			init_menu(1);
			break;
		case SCREEN_INTRO:
			SWITCH_ROM_MBC1(1);
			init_game();
			draw_intro(x, y + Y_BUFFERS[y_buffer]);
			init_menu(2);
			break;
		case SCREEN_ABATTIS:
			SWITCH_ROM_MBC1(1);
			draw_abattis(x, y + Y_BUFFERS[y_buffer]);
			init_menu(1);
			break;
		case SCREEN_CARNET:
			SWITCH_ROM_MBC1(1);
			carnet = true;
			draw_carnet(x, y + Y_BUFFERS[y_buffer]);
			init_menu(2);
			break;
		case SCREEN_INSPECTER:
			SWITCH_ROM_MBC1(1);
			piedDeBiche = true;
			draw_inspecter(x, y + Y_BUFFERS[y_buffer]);
			init_menu(1);
			break;
		case SCREEN_ERUPTION:
			SWITCH_ROM_MBC1(1);
			draw_eruption(x, y + Y_BUFFERS[y_buffer]);
			init_menu(2);
			break;
		case SCREEN_FUITE:
			SWITCH_ROM_MBC1(1);
			entryCount = 1;
			if (carnet) entryCount++;
			if (piedDeBiche) entryCount++;
			draw_fuite(x, y + Y_BUFFERS[y_buffer]);
			init_menu(entryCount);
			break;
		case SCREEN_VICTOIRE:
			SWITCH_ROM_MBC1(2);
			draw_victoire(x, y + Y_BUFFERS[y_buffer]);
			init_menu(1);
			break;
		case SCREEN_THE_END:
			SWITCH_ROM_MBC1(2);
			draw_the_end(x, y + Y_BUFFERS[y_buffer]);
			init_menu(1);
			break;
		case SCREEN_IMAGE_THE_END:
			SWITCH_ROM_MBC1(2);
			set_bkg_data(0, VICTORY_TILESET_TILE_COUNT, VICTORY_TILESET);
			draw_image_the_end(x, y + Y_BUFFERS[y_buffer]);
			init_menu(2);
			break;
		case SCREEN_PERDU:
			SWITCH_ROM_MBC1(3);
			draw_perdu(x, y + Y_BUFFERS[y_buffer]);
			init_menu(1);
			break;
		case SCREEN_FOULE:
			SWITCH_ROM_MBC1(3);
			draw_foule(x, y + Y_BUFFERS[y_buffer]);
			init_menu(1);
			break;
		case SCREEN_MORT:
			SWITCH_ROM_MBC1(3);
			draw_mort(x, y + Y_BUFFERS[y_buffer]);
			init_menu(1);
			break;
		case SCREEN_IMAGE_MORT:
			SWITCH_ROM_MBC1(3);
			set_bkg_data(0, DEATH_TILESET_TILE_COUNT, DEATH_TILESET);
			draw_image_mort(x, y + Y_BUFFERS[y_buffer]);
			init_menu(2);
			break;
		case SCREEN_IMAGE_DEFEAT:
			SWITCH_ROM_MBC1(3);
			set_bkg_data(0, DEFEAT_TILESET_TILE_COUNT, DEFEAT_TILESET);
			draw_image_defeat(x, y + Y_BUFFERS[y_buffer]);
			init_menu(2);
			break;
		case SCREEN_EPILOGUE:
			SWITCH_ROM_MBC1(3);
			draw_epilogue(x, y + Y_BUFFERS[y_buffer]);
			init_menu(1);
			break;
		case SCREEN_ARCHEOLOGUE:
			SWITCH_ROM_MBC1(2);
			draw_archeologue(x, y + Y_BUFFERS[y_buffer]);
			init_menu(1);
			break;
		case SCREEN_CONTROLE:
			SWITCH_ROM_MBC1(2);
			draw_controle(x, y + Y_BUFFERS[y_buffer]);
			init_menu(4);
			break;
		case SCREEN_ERREUR:
			SWITCH_ROM_MBC1(2);
			draw_erreur(x, y + Y_BUFFERS[y_buffer]);
			init_menu(1);
			break;
		case SCREEN_REBROUSSER:
			SWITCH_ROM_MBC1(2);
			draw_rebrousser(x, y + Y_BUFFERS[y_buffer]);
			init_menu(1);
			break;
		case SCREEN_LABYRINTHE:
			SWITCH_ROM_MBC1(2);
			draw_labyrinthe(x, y + Y_BUFFERS[y_buffer]);
			init_menu(4);
			break;
		case SCREEN_EGOUTS_OK:
			SWITCH_ROM_MBC1(2);
			draw_egouts_ok(x, y + Y_BUFFERS[y_buffer]);
			init_menu(2);
			break;
		case SCREEN_EGOUTS_KO:
			SWITCH_ROM_MBC1(2);
			draw_egouts_ko(x, y + Y_BUFFERS[y_buffer]);
			init_menu(1);
			break;
		case SCREEN_POLICE:
			SWITCH_ROM_MBC1(3);
			draw_police(x, y + Y_BUFFERS[y_buffer]);
			init_menu(1);
			break;
		case SCREEN_BUS:
			SWITCH_ROM_MBC1(3);
			draw_bus(x, y + Y_BUFFERS[y_buffer]);
			init_menu(1);
			break;
		case SCREEN_FORCE:
			SWITCH_ROM_MBC1(3);
			draw_force(x, y + Y_BUFFERS[y_buffer]);
			init_menu(1);
			break;
	}

	swap_buffer();

	SHOW_BKG;
}

UINT8 prev_keys = 0;
UINT8 keys = 0;

const int Y_BUFFERS[2] = {0, 12};
int y_buffer = 1;

void swap_buffer() {
	move_bkg(0, Y_BUFFERS[y_buffer]*8);
	y_buffer = (y_buffer + 1) % 2;
}

void sound_OK() {
	NR10_REG = 0b01110011;
	NR11_REG = 0b10000000;
	NR12_REG = 0b11110000;
	NR13_REG = 0b00001010;
	NR14_REG = 0b11000110;
}

void sound_KO() {
	NR10_REG = 0b01001000;
	NR11_REG = 0b01000000;
	NR12_REG = 0b11111010;
	NR13_REG = 0b00000000;
	NR14_REG = 0b11000100;
}

void waiting(UINT8 frames) {
	for(UINT8 i = frames; i != 0; --i) {
		wait_vbl_done();
	}
}