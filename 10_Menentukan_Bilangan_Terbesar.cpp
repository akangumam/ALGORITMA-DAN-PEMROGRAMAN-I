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
    cout << "Program : Menentukan Bilangan Terbesar" << endl;
    cout << "==============================" << endl << endl;

    // Variabel
    int a,b,c,d;
	
	cout<< "Masukkan 4 bilangan bilangan bulat: "<<endl;
	cin >> a >> b >> c >> d;
	
	int terbesar= a;
	
	if (b > terbesar){
		terbesar=b;
	}
	if(c > terbesar){
		terbesar=c;
	}
	if (d>terbesar){
		terbesar=d;
	}
	cout<<"Bilangan terbesar adalah: "<< terbesar << endl;
	
	return 0;

}
