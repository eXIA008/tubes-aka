#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <string>
#include <chrono>
#include <windows.h>
using namespace std;

struct Waktu {
    string N;
    int Y;
    int M;
    int D;
    Waktu() : N(""), Y(0), M(0), D(0) {}
    Waktu(string n, int y, int m, int d) : N(n), Y(y), M(m), D(d) {}
};


void selectionIterative(Waktu date[], int n);
int findMinIndex(Waktu pas[], int start, int n, int currentMinIndex);
void selectionRecursive(Waktu pas[], int start, int n);
void printDate(Waktu date[], int n);
void menu(Waktu dummies[10000]);
void pasienMenu(Waktu dummies[10000]);
void initMenu();


#endif // HEADER_H_INCLUDED
