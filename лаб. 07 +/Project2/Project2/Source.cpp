#include <iostream>

int variant(int in)
{
    using namespace std;
    int zaglav = 0, strochn = 0, raznost = 0;
    char zaglavnaya, strochnaya;
    switch (in)
    {
    case 1: {
        cout << "������� ��������� � �������� ����� ���������� �������� ";
        cin >> zaglavnaya >> strochnaya;
        zaglav = char(zaglavnaya);
        strochn = char(strochnaya);
        raznost = strochn - zaglav;
        cout << "Raznost = " << raznost;
        break;
    }
    case 2: {
        cout << "������� ��������� � �������� ����� �������� �������� ";
        cin >> zaglavnaya >> strochnaya;
        zaglav = char(zaglavnaya);
        strochn = char(strochnaya);
        raznost = strochn - zaglav;
        cout << "Raznost = " << raznost;
        break;
    }
    case 3: {
        cout << "������� �����  ";
        cin >> zaglavnaya;
        zaglav = char(zaglavnaya);
        cout << "zaglav = " << zaglav;
        break;
    }
    case 4: {
        break;
    }
    default: {
        cout << " ������� ���������� ������ ! ";
        break;
    }
    }
    return 0;
}

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int x = 0, zaglav = 0, strochn = 0, raznost = 0;
    cout << "������� = ";
    cin >> x;
    variant(x);
}