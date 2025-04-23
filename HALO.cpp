#include <iostream>
#include <string>

using namespace std;

int main() {
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
