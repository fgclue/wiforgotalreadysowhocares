#include <stdio.h>

int main() {
  // cursor.Name = "HAHAHHAHAHA"
  printf("> Has anyone found an xkill replacement that can also work with Wayland windows?");
  printf("`killall \"$(pidof application-name\"`");
  printf("Or rather, you can write it.");
  printf("All you need is the application name, querying whatever is open in the window manager.");
  printf("Then you `killall \"$(pidof greppedvalue)\"`");
  printf("But as far as I understand it, this is now a task of the window manager.");
}
