#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number:\n";
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0)
            sum+=i;
    }
    if(sum==n)
        cout<<"Perfect Number";
    else
        cout<<"Not Perfect Number";
    return 0;
}

