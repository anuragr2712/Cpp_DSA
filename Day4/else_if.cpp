#include <iostream>
using namespace std;

int main(){
    float marks;
    cout<<"Enter Marks : "<<endl;
    cin>>marks;

    if(marks>=90)
        cout<<"Grade = A" << endl;
    else if (marks >=80){
        cout<<"Grade = B"<<endl;
    }else if(marks >=60){
        cout<<"Grade C"<<endl;
    }else {
        cout<<"fail"<<endl;
    }
return 0;

}