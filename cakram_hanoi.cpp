#include <iostream>
using namespace std;

// Fungsi rekursif Menara Hanoi
void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        cout << "Pindahkan cakram " << n << " dari batang " << from_rod << " ke batang " << to_rod << endl;
        return;
    }
    hanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Pindahkan cakram " << n << " dari batang " << from_rod << " ke batang " << to_rod << endl;
    hanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n = 3; // Jumlah cakram
    cout << "Langkah-langkah pemindahan cakram Menara Hanoi:\n";
    hanoi(n, 'A', 'B', 'C'); // A adalah asal, B adalah tujuan, C adalah perantara
    return 0;
}

