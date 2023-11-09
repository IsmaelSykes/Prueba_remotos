#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void delay(int secs) {
  for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}

int main() {
  puts("Hola Mi nombre es Ismael");
  puts("Estoy practicando el uso de GIT");
  puts("Estamos trabajando remotos");
  puts("Vamos a hacer push");

  return 0;
}

/*
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

*/

