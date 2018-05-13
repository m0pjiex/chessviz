#include <stdio.h>
#include <stdlib.h>
#include "board_read.h"
#include "board_print_plain.h"
#include "board.h"

int main() {
char  a[9][9];
int y = 1;
bBuild(a);
bPrint(a);
do{
printf("\nВаш ход?\n");
step(a);
bPrint(a);

}while(y);
return 0;
}
