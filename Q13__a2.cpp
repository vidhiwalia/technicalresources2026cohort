/*
1
1   1
1   2   1
1   3   3   1
1   4   6   4   1
*/
#include <iostream>
using namespace std;     
int main(){
    int n,icj;
    cout<<"enter the number pls:";
    cin>>n;
    for(int i=0;i<n;i++){
        int icj=1;
        for(int j=0;j<=i;j++){
            cout<<icj<<"    ";
            int icjp1 = (icj * (i-j))/(1+j);
            icj=icjp1;

        }
        cout<<endl;
    }
    return 0;
}
