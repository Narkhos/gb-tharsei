img2gb tileset --name title_tileset --output-c-file=src/gfx/title_tileset.c --output-header-file=src/gfx/title_tileset.h --output-image=obj/gfx/title.png --deduplicate img/title.png

img2gb tilemap --name title_tilemap --output-c-file=src/gfx/title_tilemap.c --output-header-file=src/gfx/title_tilemap.h obj/gfx/title.png img/title.png
