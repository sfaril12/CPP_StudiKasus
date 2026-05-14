#include <iostream>
using namespace std;
    int main(){
        int x = 5;
        cout << "Nilai awal x: " << x << endl;

        int preIncrement = ++x;
        cout << "Nilai setelah pre-increment: " << preIncrement << endl;
        cout << "Nilai x setelah pre-increment: " << x << endl;
        int postIncrement = x++;
        cout << "Nilai setelah post-increment: " << postIncrement << endl;
        cout << "Nilai x setelah post-increment: " << x << endl;

        return 0;
}

