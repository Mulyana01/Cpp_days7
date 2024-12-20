
#include <iostream>

using namespace std;

void test()
{
    int a(0);          // variable dengan penyimpanan kelas "auto"
    a++;               // menaikkan nilai a dengan 1
    cout << a << endl; // mencetak nilai a
}

int main()
{ // memanggil fungsi test () sebanyak 3 kali
    cout << "Pemanggilan pertama " << endl;
    test();
    cout << "Pemanggilan kedua " << endl;
    test();
    cout << "Pemanggilan ketiga " << endl;
    test();

    return 0;
}
