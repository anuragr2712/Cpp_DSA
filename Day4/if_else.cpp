#include <iostream>
using namespace std;

int main(){
    float marks;
    cout<<"Enter your Marks : "<<endl;
    cin >> marks;

    if(marks >= 32)
        cout<<"Pass"<<endl;
    else{
        cout<<"Fail"<<endl;
    }
    return 0;
}