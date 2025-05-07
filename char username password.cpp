#include <iostream>
#include <string.h> // Diperlukan untuk strcmp

using namespace std;

int main() {
	// Identitas
    char nama[] = "Khaerul Umam";
    char nim[] = "241011450666";

    // Tampilkan identitas
    cout << "==============================" << endl;
    cout << "Nama : " << nama << endl;
    cout << "NIM  : " << nim << endl;
    cout << "Program : Kode Hari" << endl;
    cout << "==============================" << endl << endl;

    // Variabel
  char username[15];
  char password[15];

  cout << "Masukkan username : ";
  cin >> username;

  cout << "Masukkan Password : ";
  cin >> password;

  // Menggunakan strcmp untuk membandingkan isi string
  if (strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0) {
    cout << "Anda adalah admin" << endl;
  } else {
    cout << "Anda bukan admin" << endl;
  }

  return 0;
}
