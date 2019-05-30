#ifndef SORT_H
#define SORT_H

#include <gtest/gtest.h>
#include "functions.h"

TEST(sort, empty)
{
    QString inputPath = "./tests/input/input1.txt";
    QFile input(inputPath);

    QString outputPath = "./tests/output/output1.txt";
    QFile output(outputPath);

    sorting(inputPath, outputPath);

    QFile expected("./expected/expected1.txt");

    QString outputString;
    QString expectedString;

    if (output.open(QIODevice::ReadOnly)){
        while(!output.atEnd()){
            outputString = output.readAll();
        }
        output.close();
    }

    if (expected.open(QIODevice::ReadOnly)){
        while(!expected.atEnd()){
            expectedString = expected.readAll();
        }
        expected.close();
    }

    cout << "Output file: " << outputString.toStdString() << endl;
    cout << "Expected file: "<< expectedString.toStdString() << endl;

    if (executeTest(outputString, expectedString))
        SUCCEED();
    else
        FAIL();
}

TEST(sort, repeatnames)
{
    QString inputPath = "./tests/input/input2.txt";
    QFile input(inputPath);

    QString outputPath = "./tests/output/output2.txt";
    QFile output(outputPath);

    sorting(inputPath, outputPath);

    QFile expected("./expected/expected2.txt");

    QString outputString;
    QString expectedString;

    if (output.open(QIODevice::ReadOnly)){
        while(!output.atEnd()){
            outputString = output.readAll();
        }
        output.close();
    }

    if (expected.open(QIODevice::ReadOnly)){
        while(!expected.atEnd()){
            expectedString = expected.readAll();
        }
        expected.close();
    }

    cout << "Output file: " << outputString.toStdString() << endl;
    cout << "Expected file: "<< expectedString.toStdString() << endl;

    if (executeTest(outputString, expectedString))
        SUCCEED();
    else
        FAIL();
}

TEST(sort, simpleworking)
{
    QString inputPath = "./tests/input/input3.txt";
    QFile input(inputPath);

    QString outputPath = "./tests/output/output3.txt";
    QFile output(outputPath);

    sorting(inputPath, outputPath);

    QFile expected("./expected/expected3.txt");

    QString outputString;
    QString expectedString;

    if (output.open(QIODevice::ReadOnly)){
        while(!output.atEnd()){
            outputString = output.readAll();
        }
        output.close();
    }

    if (expected.open(QIODevice::ReadOnly)){
        while(!expected.atEnd()){
            expectedString = expected.readAll();
        }
        expected.close();
    }

    cout << "Output file: " << outputString.toStdString() << endl;
    cout << "Expected file: "<< expectedString.toStdString() << endl;

    if (executeTest(outputString, expectedString))
        SUCCEED();
    else
        FAIL();
}
#endif // SORT_H
