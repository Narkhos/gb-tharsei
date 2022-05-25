img2gb tileset --name death_tileset --output-c-file=src/gfx/death_tileset.c --output-header-file=src/gfx/death_tileset.h --output-image=obj/gfx/death.png --deduplicate img/death.png

img2gb tilemap --name death_tilemap --output-c-file=src/gfx/death_tilemap.c --output-header-file=src/gfx/death_tilemap.h obj/gfx/death.png img/death.png