// #include <iostream>
// using namespace std;

// int main(){
//     float income;
//     float tax;

//     cout<<"Enter your yearly earnings : " << endl;
//     cin>>income;

//     if(income < 5){
//         tax =0;
//     }else if( income <= 10){
//         tax = 0.2*income *100000;

//     }else{
//         tax = 0.3*income *100000;
//     }
//     cout <<"tax =" << tax <<endl;
//     return 0;

// }

#include <iostream>
using namespace std;

int main(){
    float income; // change to float to allow decimal lakhs
    float tax;

    cout << "Enter your yearly earnings (in lakhs): " << endl;
    cin >> income;

    if(income < 5){
        tax = 0;
    } else if (income <= 10){
        tax = 0.2 * income * 100000; // convert back to rupees
    } else {
        tax = 0.3 * income * 100000;
    }
    cout <<"tax = " << tax << endl;
    return 0;
}
