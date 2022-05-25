img2gb tileset --name defeat_tileset --output-c-file=src/gfx/defeat_tileset.c --output-header-file=src/gfx/defeat_tileset.h --output-image=obj/gfx/defeat.png --deduplicate img/defeat.png

img2gb tilemap --name defeat_tilemap --output-c-file=src/gfx/defeat_tilemap.c --output-header-file=src/gfx/defeat_tilemap.h obj/gfx/defeat.png img/defeat.png
