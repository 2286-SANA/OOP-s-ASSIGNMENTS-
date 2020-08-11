#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0,temp;
    cout<<"enter the number to check palindrome: ";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    if(temp==s)
        cout<<"number is palindrome: ";
    else
        cout<<"number is not palindrome: ";
}
