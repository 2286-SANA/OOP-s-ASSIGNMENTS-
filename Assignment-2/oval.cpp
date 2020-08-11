#include<iostream>
#include<math.h>
using namespace std;
void oval(int r)
{
    float d;
    int i,j;
        for(i=0;i<=2*r;i++)
        {
            for(j=0;j<=2*r;j++)
            {
                d=sqrt((i-r)*(i-r)+(j-r)*(j-r));
                if(d>r-0.5&&d<r+0.5)
                    cout<<"*";
                else
                    cout<<" ";
            }
            cout<<"\n";
        }
}
int main()
{
    int r;
    cout<<"enter the radius: ";
    cin>>r;
    oval(r);
    return 0;
}
