//displaying the digits of a nuumber in a reverse order line  wise.
#include <iostream>
using namespace std;
int main(){
    int num,parityDigit;
    cout<<"enter the number:";
    cin>>num;
    cout<<"the number in reverse order is:"<<endl;
    while(num>0){
        //num/=10;
        int parityDigit=num%10;
        num/=10;
        cout<<parityDigit<<endl;
        
    }
    
return 0;
} 
