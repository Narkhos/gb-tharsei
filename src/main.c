#include <stdbool.h>
#include <gb/gb.h>
#include "music/hUGEDriver.h"

#include "tools.h"
#include "title.h"
#include "intro.h"
#include "abattis.h"
#include "carnet.h"
#include "inspecter.h"
#include "eruption.h"
#include "fuite.h"
#include "perdu.h"
#include "foule.h"
#include "mort.h"
#include "image_mort.h"
#include "image_defeat.h"
#include "epilogue.h"
#include "the_end.h"
#include "image_the_end.h"
#include "victoire.h"
#include "controle.h"
#include "erreur.h"
#include "archeologue.h"
#include "rebrousser.h"
#include "labyrinthe.h"
#include "egouts_ok.h"
#include "egouts_ko.h"
#include "credits.h"
#include "police.h"
#include "bus.h"
#include "force.h"

#include "text.h"

extern const hUGESong_t song;

void main(void) {
	
	// Music init
    BGP_REG  = 0b11100100;
    NR52_REG = 0x80;
    NR51_REG = 0xFF;
    NR50_REG = 0x77;

	__critical {
        hUGE_init(&song);
        add_VBL(hUGE_dosound);
    }

	// Graphics init
	SPRITES_8x16;

    SHOW_BKG;
	SHOW_WIN;
	SHOW_SPRITES;

	set_interrupts(VBL_IFLAG);
	
	text_load_font();
	
	for (int i = 0 ; i < 6*21 ; i++) {
        win_tilemap[i] = 0xDF;
    }
	
	clear_win();
	
	move_win(7, 12*8);

	set_screen(SCREEN_TITLE);
	state_title();

	UINT8 newState = SCREEN_SAME;

	while(1) {
		wait_vbl_done();
		
		keys = joypad();

		if (keys == prev_keys) {
            continue;
        }

		switch(gameScreen) {
			case SCREEN_TITLE:
				newState = state_title();
				break;
			case SCREEN_INTRO:
				newState = state_intro();
				break;
			case SCREEN_ABATTIS:
				newState = state_abattis();
				break;
			case SCREEN_CARNET:
				newState = state_carnet();
				break;
			case SCREEN_INSPECTER:
				newState = state_inspecter();
				break;
			case SCREEN_ERUPTION:
				newState = state_eruption();
				break;
			case SCREEN_FUITE:
				newState = state_fuite();
				break;
			case SCREEN_PERDU:
				newState = state_perdu();
				break;
			case SCREEN_FOULE:
				newState = state_foule();
				break;
			case SCREEN_IMAGE_DEFEAT:
				newState = state_image_defeat();
				break;
			case SCREEN_MORT:
				newState = state_mort();
				break;
			case SCREEN_IMAGE_MORT:
				newState = state_image_mort();
				break;
			case SCREEN_EPILOGUE:
				newState = state_epilogue();
				break;
			case SCREEN_THE_END:
				newState = state_the_end();
				break;
			case SCREEN_IMAGE_THE_END:
				newState = state_image_the_end();
				break;
			case SCREEN_VICTOIRE:
				newState = state_victoire();
				break;
			case SCREEN_CONTROLE:
				newState = state_controle();
				break;
			case SCREEN_ERREUR:
				newState = state_erreur();
				break;
			case SCREEN_ARCHEOLOGUE:
				newState = state_archeologue();
				break;
			case SCREEN_REBROUSSER:
				newState = state_rebrousser();
				break;
			case SCREEN_LABYRINTHE:
				newState = state_labyrinthe();
				break;
			case SCREEN_EGOUTS_OK:
				newState = state_egouts_ok();
				break;
			case SCREEN_EGOUTS_KO:
				newState = state_egouts_ko();
				break;
			case SCREEN_CREDITS:
				newState = state_credits();
				break;
			case SCREEN_POLICE:
				newState = state_police();
				break;
			case SCREEN_BUS:
				newState = state_bus();
				break;
			case SCREEN_FORCE:
				newState = state_force();
				break;
		}
		
		// On ne change pas de state, on se contente de swap le buffer
		if (newState == 0) {
			// swap_buffer();
		} else { // On a un changement de state, on déclenche le set_screen
			set_screen(newState);
			newState = 0;
		}
		
		prev_keys = keys;
	}
}