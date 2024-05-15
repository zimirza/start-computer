#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    printf("usage: start-computer <external_monitor|no_external_monitor>\n");
    exit(1);
  }

  if (strcmp(argv[1], "external_monitor") == 0) {
    if (system("xrandr --output eDP-1 --off") != 0) {
      fprintf(stderr, "unable to run xrandr cmd");
    }
  }

  int xrdb = system("xrdb ~/.config/Xresources");
  int fix_java = system("wmname LG3D");

  printf("%d %d %d %d\n", xrdb, fix_java);
  return 0;
}
