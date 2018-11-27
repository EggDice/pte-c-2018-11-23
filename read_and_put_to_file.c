#include<stdio.h>

int main(int argc, char *argv[]) { // char ** argv
  char text[50];
  scanf("%s", text);

  int number;
  scanf("%d", &number);

  FILE * best_file_ever;
  best_file_ever = fopen("best.txt", "a");
  if (best_file_ever == NULL) {
    printf("Szarban a haza");
    return 1;
  }
  fprintf(best_file_ever, "%d %s\n", number, text);
  fflush(best_file_ever);
  fclose(best_file_ever);

  return 0;
}
