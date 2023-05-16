#include <iostream>
#include "symbol.h"
#include "case1.h"
#include "case2.h"
#include "case3.h"

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int n = symbol();
    switch (n)
    {
    case 1: case1(); break;
    case 2: case2(); break;
    case 3: case3(); break;
    default: cout << "Завершение"; break;
        return 0;
    }
}