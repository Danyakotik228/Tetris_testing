#ifndef FIBONACHI_H
#define FIBONACHI_H

#include <gtest/gtest.h>

extern "C" {
#include "functions.h"
}

TEST(cleararray, num0) {
    int field[20][10];
    for (int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            field[i][j] = 1;
        }
    }
    cleararray(field);
    int z = 0;
    for (int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            if(field[i][j]) z = 1;
        }
    }
    if(z == 1)
    {
        FAIL();
    }
     else
    {
        SUCCEED();
    }
}

TEST(cleararray, num1) {
    int field[20][10];
    for (int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            field[i][j] = "";
        }
    }
    cleararray(field);
    int z = 0;
    for (int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            if(field[i][j]) z = 1;
        }
    }
    if(z != 0)
    {
        FAIL();
    }
     else
    {
        SUCCEED();
    }
}

TEST(cleararray, num2) {
    int field[20][10];
    for (int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            field[i][j] = "a";
        }
    }
    cleararray(field);
    int z = 0;
    for (int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            if(field[i][j]) z = 1;
        }
    }
    if(z != 0)
    {
        FAIL();
    }
     else
    {
        SUCCEED();
    }
}

TEST(cleararray, num3) {
    int field[20][10];
    for (int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            field[i][j] = " ";
        }
    }
    cleararray(field);
    int z = 0;
    for (int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            if(field[i][j]) z = 1;
        }
    }
    if(z != 0)
    {
        FAIL();
    }
     else
    {
        SUCCEED();
    }
}



#endif // FIBONACHI_H
