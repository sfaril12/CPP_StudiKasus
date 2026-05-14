#include <iostream>

using namespace std;

int main (){
    int score;

    cout<< "masukkan nilai: ";
    cin>> score;

    if (score<0 || score>100) {
        cout<< "nilai tidak valid."<< endl;
    }
    else if(score>=90){
        cout<< "grade: A."<< endl;
    }
    else if(score>=80){
        cout<< "grade: B."<< endl;
    }
    else if(score>=70){
        cout<< "grade: C."<<endl;
    }
    else{
        cout<< "grade: D."<<endl;
    }

    return 0;
}
