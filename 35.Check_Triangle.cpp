#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the angles:\n";
    cin>>a>>b>>c;
    if(a+b+c==180 && a>0 && b>0 && c>0)
        cout<<"Valid Triangle";
    else
        cout<<"Invalid Triangle";
    return 0;
}

