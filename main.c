#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void delay(int secs) {
  for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}

int main() {
  puts("Hola Mi nombre es Ismael");
  return 0;
}



