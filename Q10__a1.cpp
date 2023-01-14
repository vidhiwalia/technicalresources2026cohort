#include<iostream>
using namespace std;
int main(){
    int nm,i=1,j,count;
    cout<<"enter the number";
    cin>>nm;
    while(i<=nm){
        count=0;
        if(nm%i==0){
            j=1;
            while(j<=i){
                if(i%j==0){
                    count++;

                }
                j++;
            }
            if(count==2){
                cout<<i<<"prime factors"<<endl;

            }
        }
        i++;
    }
return 0;
}
