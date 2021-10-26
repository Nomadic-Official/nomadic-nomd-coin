
Debian
====================
This directory contains files used to package nomadicd/nomadic-qt
for Debian-based Linux systems. If you compile nomadicd/nomadic-qt yourself, there are some useful files here.

## nomadic: URI support ##


nomadic-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install nomadic-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your nomadic-qt binary to `/usr/bin`
and the `../../share/pixmaps/nomadic128.png` to `/usr/share/pixmaps`

nomadic-qt.protocol (KDE)

