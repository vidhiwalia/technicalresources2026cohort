#include <iostream>
using namespace std;
int main(){
    int low,high,i;
    cout<<"enter the lower range of number";
    cin>>low;
    cout<<"enter the upper range of number";
    cin>>high;
    for (int i=low;i<=high;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
return 0;
}


