#include <iostream>
using namespace std;

int main(){
    int day =1;
    cout <<"Enter Day :";
    cin >> day;

    switch (day){
        case 1 : cout <<"Monday"<<endl;
            break;
        case 2 : cout <<"Tuesday"<<endl;
            break;
        default : cout << "Invalid day" <<endl;
    }return 0;
}