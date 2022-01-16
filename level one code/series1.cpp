
#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n,i,s=0;
    cout << "number";
    cin >> n;
    /* even sathi*/
/*
    for (i = 0 ; i <= n ; i++){
        
        if( i % 2 == 0){
            s = s+i;
            break;
        }
        
    }
    */
   /* odd sathi */
   for (i = 1 ; i < n; i=i+2){
       s = s +i;
   }
    cout << "sum "<<s;
    cout << "power " << pow(2,3);
}





