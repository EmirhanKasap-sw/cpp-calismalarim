#include <iostream>

using namespace std;

int main () {

	int mevsimNO;

	cout << "Merhaba, bir mevsim numarasi giriniz(1-4)" << endl;
	cin >> mevsimNO;


	switch (mevsimNO)
	{
		
		case 2:
			cout << "Yaz" << endl;
			break;
		case 4:
			cout << "Kis" << endl;
			break;
		default:
			cout << " Gecersiz Bir Sayi Girdiniz" << endl;
			break;
		case 1:
			cout << "İlkbahar" << endl;
			break;
		case 3:
			cout << "Sonbahar" << endl;
			break;
	}


	return 0;
}