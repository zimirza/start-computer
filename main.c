#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    printf("usage: start-computer\n");
    exit(1);
  }

  int xrdb = system("xrdb ~/.Xresources");
  int fix_java = system("wmname LG3D");

  printf("%d %d\n", xrdb, fix_java);
  return 0;
}
