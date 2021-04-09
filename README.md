# myGTK
This is my repo for studying the GTK framework. My idea is to learn how to build an app on Linux, using the layered architecture of this framework.

After first compilation fail, I found I have to do:

sudo apt-get install meson

El orden que hice de instalación es:
1-Epoxy
2-Gobject
3-Atk
4-Pango
5-Glib
6-Gdk--> FAIL
7-GTK--> Fail

En cada una de las carpetas de dependencias, ejecutar los siguientes comandos:

mkdir _build && cd _build
meson 
ninja 
sudo ninja install

