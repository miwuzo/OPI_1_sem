#include "case1.h"
#include<iostream>
using namespace std;
int case1()
{
    int a1 = 0, b1 = 0, raz = 0;
    char a, b;
    cout << "введите заглавную и строчную букву латинского алфавита ";
    cin >> a >> b;
    a1 = char(a);
    b1 = char(b);
    raz = b1 - a1;
    cout << "Raz = " << raz;
    return 0;
}
