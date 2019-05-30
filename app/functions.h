#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <QFile>
#include <string>
#include <cstdio>
#include <fstream>
#include <QDebug>
#include <cstdlib>
#include <algorithm>
#include <iostream>
using namespace std;

bool executeTest(QString output, QString expected)
{
    if (output == expected)
        return true;
    else
        return false;
}

struct Point
{int x,y;} a[4], b[4];

struct S{
      int num;
      QString sss;
    };

void cleararray(int field[20][10]);
int calculate(int sum, int k);
int check(int field[20][10]);
#endif // FUNCTIONS_H
