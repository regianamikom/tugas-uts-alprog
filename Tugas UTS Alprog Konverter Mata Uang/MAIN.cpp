#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	int first, second;
	double a, hasil;
	char history, lanjut;

	do
	{
		system("cls");
		cout << "==========================" << endl;
		cout << "|     Curs Converter     |" << endl;
		cout << "==========================" << endl;
		cout << "|  1. USD                |" << endl;
		cout << "|  2. EUR                |" << endl;
		cout << "|  3. YEN                |" << endl;
		cout << "|  4. YUAN               |" << endl;
		cout << "|  5. RP                 |" << endl;
		cout << "|  6. Ringgit            |" << endl;
		cout << "==========================" << endl;
		cout << "(input dengan angka...)\n";

		do
		{
			cout << "Apa Mata Uang mu sekarang? : ";
			cin >> first;

			do
			{
				cout << "Pilihlah mata uang yang ingin ditukarkan : ";
				cin >> second;
				cout << endl;

				if (first == 1)
				{
					switch (second)		//USD
					{
					case 2:cout << "Mata Uang Kamu USD...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 0.95;
						cout << "Nilai dalam EUR : " << hasil << endl;
						break;
					case 3: cout << "Mata Uang Kamu USD...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 149.93;
						cout << "Nilai dalam YEN : " << hasil << endl;
						break;
					case 4: cout << "Mata Uang Kamu USD...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 7.32;
						cout << "Nilai dalam YUAN : " << hasil << endl;
						break;
					case 5: cout << "Mata Uang Kamu USD...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 16000;
						cout << "Nilai dalam RP : " << hasil << endl;
						break;
					case 6: cout << "Mata Uang Kamu USD...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 4.78;
						cout << "Nilai dalam Ringgit : " << hasil << endl;
						break;
					default:
						break;
					}
				}

				else if (first == 2)
				{
					switch (second)		//EUR
					{
					case 1: cout << "Mata Uang Kamu EUR...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 1.06;
						cout << "Nilai dalam USD : " << hasil << endl;
						break;
					case 3: cout << "Mata Uang Kamu EUR...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 158.62;
						cout << "Nilai dalam YEN : " << hasil << endl;
						break;
					case 4: cout << "Mata Uang Kamu EUR...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 7.74;
						cout << "Nilai dalam YUAN : " << hasil << endl;
						break;
					case 5: cout << "Mata Uang Kamu EUR...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 16900;
						cout << "Nilai dalam RP : " << hasil << endl;
						break;
					case 6: cout << "Mata Uang Kamu EUR...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 5.06;
						cout << "Nilai dalam Ringgit : " << hasil << endl;
						break;
					default:
						break;
					}
				}

				else if (first == 3)
				{
					switch (second)		//YEN
					{
					case 1: cout << "Mata Uang Kamu YEN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 0.0067;
						cout << "Nilai dalam USD : " << hasil << endl;
						break;
					case 2: cout << "Mata Uang Kamu YEN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 0.0063;
						cout << "Nilai dalam EUR : " << hasil << endl;
						break;
					case 4: cout << "Mata Uang Kamu YEN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 0.049;
						cout << "Nilai dalam YUAN : " << hasil << endl;
						break;
					case 5: cout << "Mata Uang Kamu YEN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 106.3;
						cout << "Nilai dalam RP : " << hasil << endl;
						break;
					case 6: cout << "Mata Uang Kamu YEN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 0.032;
						cout << "Nilai dalam Ringgit : " << hasil << endl;
						break;
					default:
						break;
					}
				}

				else if (first == 4)
				{
					switch (second)		//YUAN
					{
					case 1: cout << "Mata Uang Kamu YUAN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 0.14;
						cout << "Nilai dalam USD : " << hasil << endl;
						break;
					case 2: cout << "Mata Uang Kamu YUAN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 0.13;
						cout << "Nilai dalam EUR : " << hasil << endl;
						break;
					case 3: cout << "Mata Uang Kamu YUAN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 20.45;
						cout << "Nilai dalam YEN : " << hasil << endl;
						break;
					case 5: cout << "Mata Uang Kamu YUAN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 2175.38;
						cout << "Nilai dalam RP : " << hasil << endl;
						break;
					case 6: cout << "Mata Uang Kamu YUAN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 0.65;
						cout << "Nilai dalam Ringgit : " << hasil << endl;
						break;
					default:
						break;
					}
				}

				else if (first == 5)
				{
					switch (second)		//RP
					{
					case 1: cout << "Mata Uang Kamu RP...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 0.000063;
						cout << "Nilai dalam USD : " << hasil << endl;
						break;
					case 2: cout << "Mata Uang Kamu RP...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 0.00006;
						cout << "Nilai dalam EUR : " << hasil << endl;
						break;
					case 3: cout << "Mata Uang Kamu RP...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 0.0094;
						cout << "Nilai dalam YEN : " << hasil << endl;
						break;
					case 4: cout << "Mata Uang Kamu RP...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 0.00046;
						cout << "Nilai dalam YUAN : " << hasil << endl;
						break;
					case 6: cout << "Mata Uang Kamu RP...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 0.0003;
						cout << "Nilai dalam Ringgit : " << hasil << endl;
						break;
					default:
						break;
					}
				}

				else
				{
					switch (second)		//Ringgit
					{
					case 1: cout << "Mata Uang Kamu Ringgit...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 0.21;
						cout << "Nilai dalam USD : " << hasil << endl;
						break;
					case 2: cout << "Mata Uang Kamu Ringgit...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 0.20;
						cout << "Nilai dalam EUR : " << hasil << endl;
						break;
					case 3: cout << "Mata Uang Kamu Ringgit...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 31.45;
						cout << "Nilai dalam YEN : " << hasil << endl;
						break;
					case 4: cout << "Mata Uang Kamu Ringgit...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 1.54;
						cout << "Nilai dalam YUAN : " << hasil << endl;
						break;
					case 5: cout << "Mata Uang Kamu Ringgit...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						hasil = a * 3345.21;
						cout << "Nilai dalam RP : " << hasil << endl;
						break;
					default:
						break;
					}
				}
				cout << endl;
				cout << "Apakah ingin melanjukan dengan mata uang yang sama? <y/n> : ";
				cin >> lanjut;

			} while (lanjut == 'y');

			cout << "Ingin melihat history? <y/n> : ";
			cin >> history;
			cout << endl;

		} while (history == 'y');
		cout << endl;

	} while (history == 'n');


	system("pause");

	return 0;
}