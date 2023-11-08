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
  return 0;
}

/*
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

*/

