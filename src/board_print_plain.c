#include <stdio.h>
#include "board_print_plain.h"
void bPrint ( char num[9][9]) {
    
    for (int o = 0; o < 9; o++){
	for (int p = 0; p < 9; p++){
	    printf("%c ",num[o][p]);
	}
	printf("\n");
    }
}
