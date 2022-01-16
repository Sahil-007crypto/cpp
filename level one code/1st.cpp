
#include<iostream>
using namespace std;

/*
class world{
    public:
        int l;
        int b;

        int fun(){
            return l*b;
        }

    world(){
        l = 10;
        b = 20;
    }
};
int main(){

    world obj;
    cout<<obj.fun();

} 
*/



int arr[5]; 
int s = 0;
float p;
int main(){
    for(int i = 0; i < 5 ; i++){
        cin>>arr[i];
        
    }
    for(int i = 0; i < 5 ; i++){
        s = s + arr[i];
    }
    
    p = s /5;
    cout<<p<<endl;
}

/*

***** 
**** 2 ,3 ,4 ,5
*** 3,4,5
** 4,5
* 5


*/


