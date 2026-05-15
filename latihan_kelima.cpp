#include <iostream>
using namespace std;

int main()
{
    double buku = 0;
    float pinsil = 0;
    int f = 0;
    int x;

    cout << "1. buku harga 1000 / buah" << endl;
    cout << "2. pinsil harga 1500 / buah" << endl;
    cout << "beli buku lebih dari 10 dapat diskon 10 persen dan pinsil 5 %" << endl;
    cout << "masukkan pilihan = ";
    cin >> x;
    if (x== 1)
    for (int i = 0; i<=20; i = i + 2)
    {
        if (i < 10){

        cout << i << "buah" << "(" << i <<" buah x rp 1000 = " << i * 1000 << "=> Tidak kena Diskon" << endl;
        }
    else
    {
        cout << i << "buah" << "(" << i <<" buah x rp 1000) - (" << i <<" buah x rp 1000 * 0.10 " << (i * 1000) - (i * 1000 * 0.10) << "Rp" << endl;
        }
    }

    if (x == 2)
    for (int i = 0; i<=20; i = i + 2)
    {
        if (i < 10){

        cout << i << "buah" << "(" << i <<" buah x rp 1000 = " << i * 1000 << "=> Tidak kena Diskon" << endl;
        }
    else
    {
        cout << i << "buah" << "(" << i <<" buah x rp 1000) - (" << i <<" buah x rp 1000 * 0.5 " << (i * 1000) - (i * 1000 * 0.5) << "Rp" << endl;
        }
    }
return 0;
}
