/*
        1
    2   3   2
3   4   5   4   3
    2   3   2
        1
*/
#include<iostream>     
using namespace std;

int main(){
    int n,sp,st,val,cval;
    cout<<"enter the number n:";
    cin>>n;
    sp=n/2;
    val=1;
    st=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sp;j++){
            cout<<"     ";
        }
        cval=val;
        for(int j=1;j<=st;j++){
            cout<<cval<<"    ";

            if(j <=st/2){
                cval++;
            }
            else{
                cval--;
            }
        }
        
        if(i<=n/2){
            sp--;
            st+=2;
            val++;
        }
        else{
            sp++;
            st-=2;
            val--;
        }
        cout<<endl;
        
        
    }
    return 0;
}

