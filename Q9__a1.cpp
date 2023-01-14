#include<iostream>
using namespace std;
int main()
{
    //fimding the gcd of two numbers
    int a,b,gcd=1,lcm=1;
    cout<<"enter two numbers:";
    cin>>a>>b;
    int max=a;
    if(b>max){
        max=b;

    }
    
    for(int i=1;i<max;i++){
        if(a%i==0&&b%i==0){
            gcd=i;

        }


    }
    lcm=a*b/gcd;
    cout<<"gcd of a and b is:"<<gcd<<endl;
    cout<<"lcm of a and b is:"<<lcm;
return 0;

}
