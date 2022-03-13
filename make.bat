..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -Wf-bo1 -c -o obj\font\font.tileset.o src\font\font.tileset.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -Wf-bo1 -c -o obj\title.o src\title.c

..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\text.o src\text.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\tools.o src\tools.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\menu.o src\menu.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\main.o src\main.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\intro.o src\intro.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\abattis.o src\abattis.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\carnet.o src\carnet.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\inspecter.o src\inspecter.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\eruption.o src\eruption.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\fuite.o src\fuite.c

..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\labyrinthe.o src\labyrinthe.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\egouts_ok.o src\egouts_ok.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\egouts_ko.o src\egouts_ko.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\rebrousser.o src\rebrousser.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\archeologue.o src\archeologue.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\erreur.o src\erreur.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\controle.o src\controle.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\victoire.o src\victoire.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\the_end.o src\the_end.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\foule.o src\foule.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\perdu.o src\perdu.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\mort.o src\mort.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\epilogue.o src\epilogue.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\credits.o src\credits.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\police.o src\police.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\bus.o src\bus.c
..\..\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o obj\force.o src\force.c


C:\gb-dev\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -Wl-yt2 -Wl-yo4 -Wl-ya1 -Isrc -o bin\gb-tharsei.gb obj\font\font.tileset.o obj\text.o obj\tools.o obj\menu.o obj\title.o obj\main.o obj\intro.o obj\abattis.o obj\carnet.o obj\inspecter.o obj\eruption.o obj\fuite.o obj\rebrousser.o obj\archeologue.o obj\controle.o obj\erreur.o obj\victoire.o obj\the_end.o obj\foule.o obj\perdu.o obj\mort.o obj\epilogue.o obj\labyrinthe.o obj\egouts_ok.o obj\egouts_ko.o obj\credits.o obj\police.o obj\bus.o obj\force.o