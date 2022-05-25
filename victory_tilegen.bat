img2gb tileset --name victory_tileset --output-c-file=src/gfx/victory_tileset.c --output-header-file=src/gfx/victory_tileset.h --output-image=obj/gfx/victory.png --deduplicate img/victory.png

img2gb tilemap --name victory_tilemap --output-c-file=src/gfx/victory_tilemap.c --output-header-file=src/gfx/victory_tilemap.h obj/gfx/victory.png img/victory.png
