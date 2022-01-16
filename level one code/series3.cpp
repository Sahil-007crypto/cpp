


// data type arrayname[size]

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter array length =";
    cin>>n;
    int a[n];

    for(int i = 0 ; i < n; i++){
        cin>>a[i];
    }
    cout<<"input number ... are "<<endl;
     for(int i = 0 ; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"reverse number are "<<endl;

    
    for(int i = n-1 ; i >= 0 ; i--){
        cout<<a[i]<<" ";
    }
    return 0;
}
// enter array length =5
// 1 2 3 4 5
// input number ... are 
// 1 2 3 4 5
// reverse number are
// 5 4 3 2 1
// 10 5 6 7 input 4 ____ 
// 7 6 5 10

// a[10] = {4,6,8,3,9,7,1,2,10,5}
//even = 5
//odd = 5




