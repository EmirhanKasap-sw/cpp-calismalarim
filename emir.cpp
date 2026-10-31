
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double s1; // Fiyat kusuratli olabilir (double)
    int f1;    // Adet tam sayidir (int)
    const double KDV_ORANI = 0.20;

    cout << "Hosgeldiniz." << endl;
    cout << "Aldiginiz urunun fiyati ne kadar?" << endl;
    cin >> s1;
    cout << "Aldiginiz urun kac tane?" << endl;
    cin >> f1;

    // 1. ONCE TUM HESAPLAMALARI YAPIYORUZ (Hepsi double)
    double s3 = s1 * f1;          // Ara Toplam
    double s5 = KDV_ORANI * s3;   // KDV Tutari
    double s6 = s5 + s3;          // Genel Toplam

    // 2. KUSURAT VE NOKTA AYARINI ACALIM
    cout << fixed << setprecision(2);
    cout << setfill('.');

    // 3. EKRANA YAZDIRALIM (Yazilara 15, sayilara 10 birim yer verdik)
    cout << left << setw(15) << "Ara Toplam:"   << right << setw(10) << s3 << " TL" << endl;
    cout << left << setw(15) << "KDV Tutari:"   << right << setw(10) << s5 << " TL" << endl;
    cout << left << setw(15) << "Genel Toplam:" << right << setw(10) << s6 << " TL" << endl;

    return 0;
}