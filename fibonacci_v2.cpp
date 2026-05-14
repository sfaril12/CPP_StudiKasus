#include <iostream>
using namespace std;

// Fungsi untuk mencetak bilangan Fibonacci
void printFibonacci(int n) {
    long long first = 0, second = 1, next;

    cout << "Bilangan Fibonacci pertama sebanyak " << n << " angka:" << endl;

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    cout << endl;
}

int main() {
    int n;

    // Meminta input dari pengguna
    cout << "Masukkan jumlah bilangan Fibonacci yang diinginkan: ";
    cin >> n;

    if (n <= 0) {
        cout << "Masukkan harus bilangan positif." << endl;
    } else {
        printFibonacci(n);
    }

    return 0;
}

