#include <stdio.h>
#include <string.h>

void my_func(int *ptr_in, int nBytes) {
  int *ptr_1;

  memcpy((void*)ptr_1, (const void*)ptr_in, nBytes);

  printf("Num = %d\n", *ptr_1);
}

int main(void) {
  int num=5;

  printf("Starting main()\n");
  
  my_func(&num, sizeof(num));  

  printf("Done\n");

  return 0;
}

