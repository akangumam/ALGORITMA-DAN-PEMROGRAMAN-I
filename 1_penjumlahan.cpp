#include <iostream>

using namespace std;

int main() 
{
	// Identitas
    char nama[] = "Khaerul Umam";
    char nim[] = "241011450666";

    // Tampilkan identitas
    cout << "==============================" << endl;
    cout << "Nama : " << nama << endl;
    cout << "NIM  : " << nim << endl;
    cout << "Program : Penjumlahan" << endl;
    cout << "==============================" << endl << endl;

    // Variabel
	
    int a, b, hasil;

    // Input angka pertama
    cout << "Masukan angka pertama : ";
    cin >> a;

    // Input angka kedua
    cout << "Masukan angka kedua : ";
    cin >> b;

    // Penjumlahan angka
    hasil = a + b;

    // Output hasil penjumlahan
    cout << "Hasil Penjumlahan a dan b : " << hasil << endl;

    return 0;
}
