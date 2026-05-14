#include <iostream>

using namespace std;

int main(){
    int n;
    cout<< "berapa jumlah orang: ";cin>>n;
        if (n<=1){
            cout<< "tidak memenuhi syarat berjabat tangan"<<endl;
        }
        else{
            int a = n-1;
            int c;
            for(int i=1;i<=a;i++){
                c = c + i;
            }
            cout<< "jumlah orang berjabat tangan: "<< c <<endl;
        }
}
