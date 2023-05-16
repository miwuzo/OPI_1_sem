#include "case2.h"
#include<iostream>
int case2()
{
    using namespace std;
    int a1 = 0, b1 = 0, raz = 0;
    char a, b;
    cout << "введите заглавную и строчную букву русского алфавита ";
    cin >> a >> b;
    a1 = char(a);
    b1 = char(b);
    raz = b1 - a1;
    cout << "Razn = " << raz;
    return 0;
}
