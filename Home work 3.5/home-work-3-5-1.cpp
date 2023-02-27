// https://github.com/studys22/Synergy-Programming-technology

#include <stdio.h>

int main() {
  for (int i = 0; i < 9; i++) {
    printf("%i: Hello\n", i + 1);
  }
  printf("\nЧисла от 0, инкремент = 1, 15 итераций:\n");
  for (int i = 0; i < 15; i++) {
    printf("%i ", i);
  }
  printf("\n\nНечетные числа от 0, инкремент = 1, 15 итераций:\n");
  for (int i = 0; i < 15; i++) {
    if (i % 2) {
      printf("%i ", i);
    }
  }
  printf("\n");
}
