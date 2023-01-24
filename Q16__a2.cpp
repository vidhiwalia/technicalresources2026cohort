/*
1                       1
1   2               2   1
1   2   3       3   2   1
1   2   3   4   3   2   1

*/
#include<iostream>     
using namespace std;

int main(){
    int n,sp,st,val,cval;
    cout<<"enter the number n:";
    cin>>n;
    sp=2*n-3;
    st=1;
    for(int i=1;i<=n;i++){
        int val=1;
        for(int j=1;j<=st;j++){
            cout<<val<<"    ";
            val++;

        }
        for(int j=1;j<=sp;j++){
            cout<<"     ";
        }
        if(i==n){
            st--;
            val--;
        }
        for(int j=1;j<=st;j++){
            val--;
            cout<<val<<"    ";
        }
        st++;
        sp-=2;
        cout<<endl;

    }
    return 0;
}
