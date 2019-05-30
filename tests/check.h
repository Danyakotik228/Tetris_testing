#ifndef CHECK_H
#define CHECK_H

#include <gtest/gtest.h>

extern "C" {
#include "functions.h"
}

TEST(check, num0){
    int field[20][10], i ,j;
    for(i = 0; i < 20; i++){
        for (j = 0; j  < 10; j++) {
            field[i][j] = 0;
        }
    }
    for (int i=0;i<4;i++)  { b[i]=a[i]; a[i].x+=1; }
    i = check(field);
    if(i)
    {
        SUCCEED();
    }else {
        FAIL();
    }
}

TEST(check, num1){
    int field[20][10], i ,j;
    for(i = 0; i < 20; i++){
        for (j = 0; j  < 10; j++) {
            field[i][j] = 1;
        }
    }
    for (int i=0;i<4;i++)  { b[i]=a[i]; a[i].x+=1; }
    i = check(field);
    if(!i)
    {
        SUCCEED();
    }else {
        FAIL();
    }
}


#endif // CHECK_H
