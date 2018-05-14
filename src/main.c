#include <stdio.h>
#include <stdlib.h>
#include "board_read.h"
#include "board_print_plain.h"
#include "board.h"

int main() {
char  a[9][9];
int y = 1;
boardBuild(a);
boardPrint(a);
do{
printf("\nВаш ход: \n");
step(a);
boardPrint(a);

}while(y);
return 0;
}
