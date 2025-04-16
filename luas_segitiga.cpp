// Header
#include <iostream>
using namespace std;

main ()
{
    // Deklarasi Variabel
    int alas, tinggi;
    double luas;

    // Statement
    cout << "Masukan alas segitiga : ";
    cin >> alas;
    cout << "Masukan tinggi segitiga : ";
    cin >> tinggi;

    // Proses perhitungan Luas Segitiga
    luas = (alas * tinggi) / 2;

    // Cetak Hasil Perhitungan Luas Segitiga
    cout << "Maka luas Segitiga jika : \nalasnya = " << alas << " \ntingginya = " << tinggi << " \nYaitu ..... \n" << "Luas = " << luas;
}
