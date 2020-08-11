#include<iostream>
using namespace std;


class Rectangle
{
private:
    double length;
    double width;
public:
    Rectangle(double=1.0, double=1.0);
        double perimeter(void);
        double area(void);
        void setWidth(double w);
        double getWidth(void);
        void setLength(double l);
        double getLength(void);
    };
    Rectangle::Rectangle(double w, double l)
    {
        setWidth(w);
        setLength(l);
    }
    double Rectangle::perimeter(void)
    {
        return 2*(width+length);
    }
    double Rectangle::area(void)
    {
        return width*length;
    }
    void Rectangle::setWidth( double w)
    {
        width=w>0 && w<20.0 ? w:1.0;
    }

    void Rectangle::setLength(double l)
    {
       length =l>0 &&l<20.0 ? l:1.0;
    }
    double Rectangle::getWidth(void )
    {
        return width;
    }
    double Rectangle::getLength(void)
    {
        return length;
    }


   int main()
    {
        Rectangle a,b(4.0,5.0),c(30.0 ,100.0);
        //output rectangle of a
        cout <<"a: length = "<<a.getLength();
        cout <<"\t\ta: width= "<<a.getWidth();
        cout <<"\t\ta: perimeter= "<<a.perimeter();
        cout <<"\t\ta: area= "<<a.area();
        cout <<"\n";
       //output rectangle of b
        cout<<"b: length= "<<b.getLength();
        cout<<"\t\tb: width= "<<b.getWidth();
        cout<<"\t\tb: perimeter= "<<b.perimeter();
        cout<<"\tb: area = "<<b.area();
        cout<<"\n";
       //output rectangle of c;bad value attempted
        cout<<"c: length= "<<c.getLength();
        cout<<"\t\tc: width= "<<c.getWidth();
        cout<<"\t\tc: perimeter"<<c.perimeter();
        cout<<"\t\tc: area"<<c.area();
        cout<<endl;
        return 0;


}

