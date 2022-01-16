
#include<iostream>
using namespace std;

int main(){

    int number , rev = 0 , r;

    cin >> number;
    while (number != 0 ){
        r =  number % 10 ;
        rev = rev * 10 + r;
        number = number / 10 ;

    }
    cout << "reverse number " << rev;
}


