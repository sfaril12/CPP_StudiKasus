#include <iostream>

using namespace std;

int main (){
    short i=0xAB00;
    short j=0xABCD;

    short n = i & j;
    cout<< "hasil bitwise AND: "<<hex<<n<<endl;
    return 0;
}
