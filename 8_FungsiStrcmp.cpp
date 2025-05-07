#include <iostream>
#include <string.h>  // Untuk fungsi strcmp
using namespace std;

int main() {
	// Identitas
    char nama[] = "Khaerul Umam";
    char nim[] = "241011450666";

    // Tampilkan identitas
    cout << "==============================" << endl;
    cout << "Nama : " << nama << endl;
    cout << "NIM  : " << nim << endl;
    cout << "Program : Fungsi strcmp" << endl;
    cout << "==============================" << endl << endl;

    // Variabel
    char A[15];
    char B[15];

    cout << "Masukkan kata 1 : ";
    cin >> A;
    cout << "Masukkan kata 2 : ";
    cin >> B;

    if (strcmp(A, B) == 0) {
        cout << "Kata 1 dan Kata 2 sama" << endl;
    } else {
        cout << "Kata 1 dan Kata 2 tidak sama" << endl;
    }

    return 0;
}
