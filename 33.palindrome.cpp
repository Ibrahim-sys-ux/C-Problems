#include <iostream>
using namespace std;
int main(){
    int n,rev=0,temp;
    cout<<"Enter the number:\n";
    cin>>n;
    temp=n;
    while(temp>0){
        rev=rev*10+temp%10;
        temp/=10;
    }
    if(n==rev)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    return 0;
}

