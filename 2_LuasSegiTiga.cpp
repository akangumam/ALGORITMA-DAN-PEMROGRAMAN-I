// Header
#include <iostream>
using namespace std;

main ()
{
    // Identitas
    char nama[] = "Khaerul Umam";
    char nim[] = "241011450666";

    // Tampilkan identitas
    cout << "==============================" << endl;
    cout << "Nama : " << nama << endl;
    cout << "NIM  : " << nim << endl;
    cout << "Program : Luas Segi Tiga" << endl;
    cout << "==============================" << endl << endl;
    
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
