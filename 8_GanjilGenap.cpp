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
    cout << "Program : Ganjil Genap" << endl;
    cout << "==============================" << endl << endl;

    // Variabel
  int n;

  cout << "masukan bilangan : ";
  cin >> n;

  if (n % 2 == 0) {
    cout << n << " adalah Bilangan genap" << endl;
  } else {
    cout << n << " adalah Bilangan ganjil" << endl;
  }

  return 0;
}
