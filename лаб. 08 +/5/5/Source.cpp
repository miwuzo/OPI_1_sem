#include <iostream>

int variant(int in) 
{
  using namespace std;
  int a1 = 0, b1 = 0, raz = 0;
  char a, b;
  switch (in) 
  {
  case 1: {
    cout << "введите заглавную и строчную букву латинского алфавита ";
    cin >> a >> b;
    a1 = char(a);
    b1 = char(b);
    raz = b1 - a1;
    cout << "Raz = " << raz;
    break;
  }
  case 2: {
    cout << "введите заглавную и строчную букву русского алфавита ";
    cin >> a >> b;
    a1 = char(a);
    b1 = char(b);
    raz = b1 - a1;
    cout << "Razn = " << raz;
    break;
  }
  case 3: {
    cout << "введите цифру  ";
    cin >> a;
    a1 = char(a);
    cout << "a1 = " << a1;
    break;
  }
  case 4: {
    break;
  }
  default: {
    cout << " ¬ведите корректный вариан ! ";
    break;
  }
  }
  return 0;
}

using namespace std;
int main() {
  setlocale(LC_ALL, "Rus");
  int x = 0, a1 = 0, b1 = 0, razn = 0;
  cout << "¬ариант = ";
  cin >> x;
  variant(x);
}