#include <iostream>

using namespace std;

int main (){
    short i = 0xAABB;
    short j = 0xCCDD;

    short n = i|j;
    cout<< "hasil bitwise OR inklusif: "<<hex<<n<<endl;

    return 0;
}
