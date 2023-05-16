//BlackYana2005
// 42 6C 61 63 6B 59 61 6E 61 32 30 30 35
// 42 6C 61 63 6B 59 61 6E 61 32 30 30 35
// 00 42 00 6c 00 61 00 63 00 6b 00 59 00 61 00 6e 00 61 00 32 00 30 00 30 00 35
//ЧёрнаяЯна2005
// D7 E5 F0 ED E0 FF DF ED E0 32 30 30 35
// d0 a7 d1 91 d1 80 d0 bd d0 b0 d1 8f d0 af d0 bd d0 b0 32 30 30 35
// 04 27 04 51 04 40 04 3d 04 30 04 4f 04 2f 04 3d 04 30 00 32 00 30 00 30 00 35 
//Чёрная2005Яна
// D7 E5 F0 ED E0 FF 32 30 30 35 DF ED E0
// d0 a7 d1 91 d1 80 d0 bd d0 b0 d1 8f 32 30 30 35 d0 af d0 bd d0 b0
// 04 27 04 51 04 40 04 3d 04 30 04 4f 00 32 00 30 00 30 00 35 04 2f 04 3d 04 30
#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");

	int number = 0x12345678;	
	char hello[] = "Hello, ";
	char lfie[] = "BlackYana2005";
	char rfie[] = "ЧёрнаяЯна2005";
	char lr[] = "Чёрная2005Яна";

	wchar_t Lfie[] = L"BlackYana2005";
	wchar_t Rfie[] = L"ЧёрнаяЯна2005";
	wchar_t LR[] = L"Чёрная2005Яна";

	std::cout << hello << lfie << std::endl;
	return 0;
}