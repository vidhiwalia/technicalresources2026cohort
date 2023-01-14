#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the number pls:";
    cin>>num;
    int sum=0;
    while(num>0){
        num/=10;
        sum+=1;
        
        
    }
    cout<<"the number of digits in a given number is "<<sum;
return 0;
}
    
