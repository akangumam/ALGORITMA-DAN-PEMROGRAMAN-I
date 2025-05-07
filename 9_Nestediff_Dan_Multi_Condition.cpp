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
    cout << "Program : Nested if & Mutli Condition" << endl;
    cout << "==============================" << endl << endl;

    // Variabel
    int pertama, kedua, ketiga;
    cout << "Input bilangan pertama : ";
    cin >> pertama;
    cout << "input bilangan kedua : ";
    cin >> kedua;
    cout << "input bilangan ketiga : ";
    cin >> ketiga;

    if (pertama > kedua)
    {
        if (pertama > ketiga)
        {
            cout << pertama;
        }
        else
        {
            cout << ketiga;
        }
    }
    else
    {
        if (kedua > ketiga)
        {
            cout << kedua;
        }
        else
        {
            cout << ketiga;
        }
    }

    return 0;
}

