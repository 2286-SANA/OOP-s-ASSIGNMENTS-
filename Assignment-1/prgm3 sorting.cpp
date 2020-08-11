#include<iostream>
using namespace std;
int main()
{
    int size,i,j,temp;
    cout<<"enter array size: ";
    cin>>size;
    cout<<"\nenter array elements for sorting: ";
    int arr[50];
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
   // cout<<"sorting of array:  ";
    for(i=1;i<size;i++)
    {
        temp=arr[i];
        j=i-1;
        while((temp<arr[j])&&(j>=0))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
    arr[j+1]=temp;
}
cout<<"\nafter sorting: \n";
for(i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
return 0;

}
