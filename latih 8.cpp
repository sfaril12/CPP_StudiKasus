#include <iostream>
using namespace std;

class hitung{
    public:
    int nilai=85;
    string nama="Ahmad Hidayat";

    void tambah(int x, int y) {
        cout << x << " tambah " << y << " = " << x+y << endl;
    };

    void perulangan_for(int n) {
        for (int i=1; i<=n; i++)
        cout << "perulangan for data ke " << i << endl;
    };

    void perulangan_while(int n) {
        int i=n;
        while (i>=1) {
            cout << "perulangan while data ke " << i << endl;
            i--;
            }
            };

};
