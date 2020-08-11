#include<iostream>
using namespace std;
int main()
{
    int n,i,m,flag=0;
    cout<<"enter the number to check prime: ";
    cin>>n;
    m=n/2;
    for(i=2;i<=m;i++)
    {
            if(n%i==0)
        {
        cout<<"number is not prime: "<<endl;
        flag=1;
        break;
    }
}
if(flag==0)
cout<<"\nnumber is prime"<<endl;
return 0;
}
