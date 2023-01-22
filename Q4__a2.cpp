/*
* * * *
  * * *
    * *
      *
*/
#include<iostream>
using namespace std;

int main(){
    int n,sp,st;
    sp=0;
    
    cout<<"enter the number n:";
    cin>>n;
    st=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sp;j++)
        {
            cout<<"     ";
        }
        for(int j=1;j<=st;j++){
            cout<<"*    ";
        }
        sp++;
        st--;
        cout<<endl;
        
        }
        
       // cout<<endl;
        
    

return 0;
}

