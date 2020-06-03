
#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>

using namespace std;
int main()
{
	try
	{
	Basla:
		HANDLE hConsole;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		bool dondur = true;
		string deger;
		int sayac = 1;
		cout << "Istediginiz sansi giriniz yada Program tarafindan secilmesi icin program yazin " << endl;
		cin >> deger;

		if (deger != "program" && deger != "Program")
		{
			int a = stoi(deger);
			int sansimiz = 100 - a;

			while (dondur == true)
			{
				int NumberGenerator = rand() % 100 + 1;

				if (NumberGenerator >= sansimiz)
				{
					SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
					cout << "Kazandin!" << " Deneme: " << sayac << " Sans Oraniniz: " << deger << " Gelen sans: " << NumberGenerator << endl;
					dondur = false;
				}
				else
				{
					SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
					cout << "Kaybettin!" << " Deneme: " << sayac << " Sans Oraniniz: " << deger << " Gelen sans: " << NumberGenerator << endl;
					sayac++;
				}
			}
			SetConsoleTextAttribute(hConsole, 15);
			string deger;
			cout << "Tekrar oynamak icin 'y' yaziniz ";
			cin >> deger;
			if (deger == "y")
			{
				cout << "\x1B[2J\x1B[H";
				goto Basla;
			}

		}
		else if (deger == "program" || deger == "Program")
		{
			srand(time(0));
			int deger23;
			string degerimiz;
			cout << "Zorlugu seciniz Kolay-Orta-Zor ";
			cin >> degerimiz;
			if (degerimiz == "Kolay" || degerimiz == "kolay")
			{
				deger23 = rand() % 30 + 70;
			}
			else if (degerimiz == "orta" || degerimiz == "Orta")
			{
				deger23 = rand() % 40 + 30;
			}
			else if (degerimiz == "zor" || degerimiz == "Zor")
			{
				deger23 = rand() % 30 + 1;
			}

			int sansimiz = 100 - deger23;

			while (dondur == true)
			{
				int NumberGenerator = rand() % 100 + 1;

				if (NumberGenerator >= sansimiz)
				{
					SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
					cout << "Kazandin!" << " Deneme: " << sayac << " Sans Oraniniz: " << deger23 << " Gelen sans: " << NumberGenerator << endl;
					dondur = false;
				}
				else
				{
					SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
					cout << "Kaybettin!" << " Deneme: " << sayac << " Sans Oraniniz: " << deger23 << " Gelen sans: " << NumberGenerator << endl;
					sayac++;
				}
				SetConsoleTextAttribute(hConsole, 15);
			}
			string deger;
			cout << "Tekrar oynamak icin 'y' yaziniz ";
			cin >> deger;
			if (deger == "y")
			{
				cout << "\x1B[2J\x1B[H";
				goto Basla;
			}

		}
	}
	catch (const std::exception& a)
	{
			
	}
		
}

