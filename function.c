#include<stdio.h>

int sacrifice_one_goat(int goats) {
  return goats - 1;
}

int main(int argc, char **argv) {
  int current_goat_number = 10;
  int goats_after_genocide =
    sacrifice_one_goat(current_goat_number);

  printf("%d\n", goats_after_genocide);
  printf("%d\n", argc);
  printf("%s\n", argv[0]); // *(argv)
  printf("%s\n", argv[1]); // *(argv + 1)
  printf("%s\n", argv[2]); // *(argv + 2)

  return 0;
}

