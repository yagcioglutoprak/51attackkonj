
Debian
====================
This directory contains files used to package konjungated/konjungate-qt
for Debian-based Linux systems. If you compile konjungated/konjungate-qt yourself, there are some useful files here.

## konjungate: URI support ##


konjungate-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install konjungate-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your konjungate-qt binary to `/usr/bin`
and the `../../share/pixmaps/konjungate128.png` to `/usr/share/pixmaps`

konjungate-qt.protocol (KDE)

