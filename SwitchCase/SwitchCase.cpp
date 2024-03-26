#include <iostream>
using namespace std;

int bilangan1, bilangan2;

int penjumlahan(int a, int b) 
{
	return a + b;
}

int pegurangan(int a, int b)
{
	return a - b;
}

int perkalian(int a, int b)
{
	return a * b;
}

float pembagian(float a, float b)
{
	return a / b;
}

void inputdata()
{
	cout << "\nMasukkan bilangan pertama : ";
	cin >> bilangan1;
	cout << "Masukkan bilangan kedua : ";
	cin >> bilangan2;
}

int main()
{
	int pilihan;
	do
	{
		system("CLS");
		cout << "----------------------------\n";
		cout << "Program Kalkulator Sederhana\n";
		cout << "----------------------------\n";
		cout << "Menu\n";
		cout << "1. Penjumlahan\n";
		cout << "2. Pengurangan\n";
		cout << "3. Perkalian\n";
		cout << "4. Pembagian\n";
		cout << "5. Keluar\n";
		cout << "Masukkan pilhan anda : ";
		cin >> pilihan;

		switch (pilihan)
		{
		case 1 :
			inputdata();
			cout << "Hasil pernjumlahan : " << penjumlahan(bilangan1, bilangan2) << endl;
			system("pause");
			break;
		case 2 :
			inputdata();
			cout << "Hasil pengurangan : " << pegurangan(bilangan1, bilangan2) << endl;
			system("pause");
			break;
		case 3:
			inputdata();
			cout << "Hasil perkalian : " << perkalian(bilangan1, bilangan2) << endl;
			system("pause");
			break;
		case 4:
			inputdata();
			cout << "Hasil pembagian : " << pembagian(bilangan1, bilangan2) << endl;
			system("pause");
			break;
		case 5 :
			break;
		default :
			cout << "Pilihan tidak teridentifikasi\n";
			system("pause");
			break;
		}
	} while (pilihan != 5);
}
