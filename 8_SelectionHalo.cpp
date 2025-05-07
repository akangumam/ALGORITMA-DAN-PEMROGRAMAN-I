#include <iostream>
#include <string>

using namespace std;

int main() {
	
	// Identitas
    char nama[] = "Khaerul Umam";
    char nim[] = "241011450666";

    // Tampilkan identitas
    cout << "==============================" << endl;
    cout << "Nama : " << nama << endl;
    cout << "NIM  : " << nim << endl;
    cout << "Program : Teks Halo" << endl;
    cout << "==============================" << endl << endl;

    // Variabel
    
  string kata;
  cout << "Masukkan kata = HALO" << endl;
  cin >> kata;

  if (kata == "HALO") {
    cout << "Kata yang dimasukkan sesuai" << endl;
  } else {
    cout << "Kata yang dimasukkan tidak sesuai" << endl;
  }

  return 0;
}
