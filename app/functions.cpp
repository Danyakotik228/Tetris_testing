#include "functions.h"

void cleararray(int field[20][10])
{
    int i, j;
    for (i = 0; i < 20; i++) {
        for(j = 0; j < 10; j++){
            field[i][j] = 0;
        }
    }
}

int calculate(int sum, int k){
    sum += k;
    return sum;
}
