#include <iostream>
using namespace std;

int main(){
    int eng;
    int sci;
    int math;

    cout<<"Enter Eng marks : ";
    cin>>eng;

    cout<<"Enter sci marks : ";
    cin>>sci;

    cout<<"Enter math marks : ";
    cin>>math;
    

    int avg = (eng+sci+math)/3;
    cout<<"Average marks"<<avg<<endl;

    return 0;

}