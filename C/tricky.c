#include<stdio.h>
main() {
char ch = 'y';
while (ch == 'y') {
  printf("Type \'n\' to exit or something else to keep running\n");
  scanf("%c",&ch);
  if (ch=='n') {
    printf("bye\n");
    break;
    }
  printf("Do you know why the program exited even when you didn't press n? ;)\n");
  }
}
