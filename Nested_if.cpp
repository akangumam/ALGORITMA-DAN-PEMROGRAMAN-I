#include <iostream>
using namespace std;

int main() {
	// Identitas
    char nama[] = "Khaerul Umam";
    char nim[] = "241011450666";

    // Tampilkan identitas
    cout << "==============================" << endl;
    cout << "Nama : " << nama << endl;
    cout << "NIM  : " << nim << endl;
    cout << "Program : Nested if usia" << endl;
    cout << "==============================" << endl << endl;

    // Variabel
    
    int umur;
    cout << "Masukan Umur : ";
    cin >> umur;

    if (umur <= 18) {
        if (umur <= 10) {
            cout << "Anak-anak" << endl;
        } else {
            cout << "Remaja" << endl;
        }
    } else {
        cout << "Bukan usia anak maupun remaja" << endl;
    }
}
