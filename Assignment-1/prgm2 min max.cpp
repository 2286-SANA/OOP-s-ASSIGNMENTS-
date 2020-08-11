#include<iostream>
using namespace std;
int main()
{
int arr[20],i,j,n,temp;
cout<<"enter the size of array; ";
cin>>n;
cout<<"enter elements of array for finding 2nd max and min; ";
for(i=0;i<n;i++)
cin>>arr[i];
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(arr[i]<arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

}
cout<<"2nd max number: "<<arr[1];
cout<<"\n2nd min number: "<<arr[n-2];
return 0;
}
