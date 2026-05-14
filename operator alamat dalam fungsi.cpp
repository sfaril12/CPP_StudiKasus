#include <iostream>
using namespace std;
void increment(int *p){
    (*p)++;
}
int main (){
    int value = 5;
    cout<< "sebelum increment: "<<value<<endl;
    increment(&value);
    cout<< "setelah increment: "<<value<<endl;
    return 0;
}
