#include<stdio.h>

int main(int argc, char** argv) {
  int *ptr;
  int number = 5;
  int number2 = 8;
  double d = 3.14;
  double *ptr2 = &d;

  ptr = &number;
  printf("%u\n", &number);
  printf("%u\n", &number2);
  printf("%u\n", ptr);
  printf("%u\n", ptr + 1);
  printf("%u\n", ptr2);
  printf("%u\n", ptr2 + 1);
  printf("%u\n", *ptr);

  return 0;
}
