#include <iostream>

using namespace std;

int main() {


    double s1;
    double s2;
    char islem;

    cout << "Birinci Sayiyi Giriniz:" << endl;
    cin >> s1;
    cout << "Ikinci sayiyi Giriniz:" << endl;
    cin >> s2;
    cout << "Bir islem seciniz(+,-,*,/):" << endl;
    cin >> islem;

    switch(islem)
    {
        case '+':
            cout << "Toplam:" << s1+s2 << endl;
            break;
        case '-':
            cout << "Cikarma:" << s1-s2 << endl;
            break;
        case '*':
            cout << "Carpim:" << s1*s2 << endl;
            break;
        case '/':
            if (s2 != 0)
                cout << "Sonuc: " << s1 / s2 << endl;
            else
                cout << "Sifira bolme yapilamaz!" << endl;
            break;
        default:
            cout << "Gecersiz islem!" << endl;
            break;
    }

    
return 0;

}

