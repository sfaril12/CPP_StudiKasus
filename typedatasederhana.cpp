#include <iostream>
#include <string>
using namespace std;

int main(){
    int age=25;
    float height=5.9;
    char initial= 'A';
    bool isStudent= true;

    cout<< "umur: "<<age<<endl;
    cout<< "tinggi: "<<height<< " feet"<<endl;
    cout<< "initial: "<< initial << endl;

    cout<< "is Student: "<< (isStudent ? "yes":"no")<<endl;

    int scores[5]={85, 90, 78, 92, 88};

    cout<< "scores: ";
    for (int i=0; i<5;i++){
        cout<<scores[i]<< " ";
    }
    cout<<endl;

    struct person {
    string name;
    int age;
    float height;
    }
    person1;
    person1.name = "alice";
    person1.age= 30;
    person1.height= 5.5;

    cout<< "person name: "<<person1.name<<endl;
    cout<< "person age: "<<person1.age<<endl;
    cout<< "person height: "<<person1.height << "feet"<<endl;
    return 0;
}

