#include<iostream>
using namespace std;
int main()
{
    int arrow_head=7, arrow_length=9, arrow_tail=3;
    char outputchar='*';
   /* cout<<"enter the parameters arrow_head_width: ";
    cin>>arrow_head;
    cout<<" arrow_length: ";
    cin>>arrow_length;
    cout<<"and arrow_tail_width: ";
    cin>>arrow_tail;
    cout<<"\n\n";*/
//arrow head
//loop to keep running until the heigth has been met
for(int i=1;i<=arrow_head;i+=2)
{
    for(int space=arrow_head;space>i;space-=2)   //loop to output the space
    {
        cout<<" ";
    }
    for(int star=0;star<i;star++)    //loop to output the character for the body of the arrow
    {
        cout<<outputchar;
    }
    cout<<endl;
}
int arrow_tail_length = arrow_length - (arrow_head/2)-1;
//arrow tail
for(int r=0;r<arrow_tail_length;r++)
{
    for(int c=0;c<arrow_tail;c++)
    {
        cout<<"*";
    }
    cout<<endl;
}
}


