#include <iostream>
#include <string>

using namespace std;

int basamakToplami(int sayi) {
    int toplam = 0;
    string sayiStr = to_string(sayi); 

    for (char& rakam : sayiStr) {
        toplam += rakam - '0'; 
    }

    return toplam;
}

int main() {
    int sayi;
    cout << "Bir sayı girin: ";
    cin >> sayi;

    int sonuc = basamakToplami(sayi);
    cout << "Girdiğiniz sayının basamak toplamı: " << sonuc << endl;

    return 0;
}
