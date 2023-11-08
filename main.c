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
  return 0;
}

//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



