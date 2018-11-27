#include<stdio.h>

int main(int argc, char** argv) {
  FILE *robika;
  robika = fopen("alma.txt", "r");
  if (robika == NULL) {
    printf("hallod nincs file!?!?");
    return 1;
  }
  char text[50];
  fgets(text, 8, robika);
  printf("%s", text);

  FILE *kornel;
  kornel = fopen("korte.txt", "w");
  if (kornel == NULL) {
    printf("hallod can't even file!?!?");
    return 1;
  }
  fprintf(kornel, "Kornicska!");
  fflush(kornel);
  return 0;
}
