#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Masukkan sebuah angka bulat: ";
    cin >> number;
    if (number > 0) { // Outermost condition: Positive
        if (number % 2 == 0) { // Inner condition for even numbers within positive range
            cout << number << " is an even positive number." << endl;
        } else { // Inner condition for odd numbers within positive range
            cout << number << " is an odd positive number." << endl;
        }
} else if (number < 0) { // Middle level condition: Negative
        if (abs(number) % 2 == 0) { // Inner condition for even absolute values within negative range
            cout << abs(number) << " has an even absolute value but it's still negative." << endl;
        } else { // Inner condition for odd absolute values within negative range
cout<<abs(number)<< "has an odd absolute value but it’s still negative."<<endl ;
         }
     }else{cout<<"The entered number zero."<<endl;}
     return  0;
}
