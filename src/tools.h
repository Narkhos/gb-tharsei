#ifndef _TOOLS_H
#define _TOOLS_H

extern const UINT16 powOfTen[5];

extern char *itoa(UINT16 n, char *s, UINT8 length);

#define ERROR_OUT_OF_BOUND 10000

#define WHITE  0
#define SILVER 1
#define GRAY   2
#define BLACK  3

#define PALETTE(c0, c1, c2, c3) c0 | c1 << 2 | c2 << 4 | c3 << 6

// GAME STATE

extern bool carnet;
extern bool piedDeBiche;
extern char currentPath[5];
extern INT8 pathIndex;
extern const char archeologuePath[5];
extern const char controlePath[5];
extern const char directions[4];
extern bool checkArcheologuePath();
extern bool checkControlePath();

#define SCREEN_SAME 0
#define SCREEN_TITLE 1
#define SCREEN_INTRO 2
#define SCREEN_ABATTIS 3
#define SCREEN_CARNET 4
#define SCREEN_INSPECTER 5
#define SCREEN_ERUPTION 6
#define SCREEN_FUITE 7
#define SCREEN_EGOUTS_OK 8
#define SCREEN_EGOUTS_KO 9
#define SCREEN_LABYRINTHE 10
#define SCREEN_REBROUSSER 11
#define SCREEN_ARCHEOLOGUE 12
#define SCREEN_CONTROLE 13
#define SCREEN_ERREUR 14
#define SCREEN_VICTOIRE 15
#define SCREEN_THE_END 16
#define SCREEN_IMAGE_THE_END 17
#define SCREEN_FOULE 18
#define SCREEN_PERDU 19
#define SCREEN_MORT 20
#define SCREEN_IMAGE_MORT 21
#define SCREEN_EPILOGUE 22
#define SCREEN_CREDITS 23
#define SCREEN_POLICE 24
#define SCREEN_BUS 25
#define SCREEN_FORCE 26
#define SCREEN_IMAGE_DEFEAT 27

extern void enableMusic(bool enable);
extern void print_separator();

extern void clear_win();

extern unsigned char win_tilemap[6*21];

extern UINT8 gameScreen;

extern unsigned int x; // scroll background x position
extern unsigned int y; // scroll background y position

extern void init_game();
extern void set_screen(UINT8 screen);

extern UINT8 prev_keys;
extern UINT8 keys;

extern const int Y_BUFFERS[2];
extern int y_buffer;
extern void swap_buffer();
extern void sound_OK();
extern void sound_KO();

extern void waiting(UINT8 frames);

#endif