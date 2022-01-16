
#include<iostream>
using namespace std;
int main(){

    int n,pattern;
    cout<<"right angle triangle =1"<<"\n"<<"square =2"<<"\n"<<"input the number  = ";
    cin>> n;
    //pattern = n;

    switch (pattern = n)
    {
    case 1:

        for(int i = 1 ; i<= 5 ; i++){
            for(int j = 1 ; j <= i ; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        break;
    case 2:

        for(int i = 1 ; i<= 5 ; i++){
            for(int j = 1 ; j <= 5 ; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        break;
    
    default:
    cout<<"furrrr";
        break;
    }

} 







