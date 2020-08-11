#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

class Rectangle
{
private:
    double point1[2];
    double point2[2];
    double point3[2];
    double point4[2];
    char fillchar;
    char perichar;
    bool valid;
public:
    Rectangle(double *, double *, double *, double *, char , char );
    void setCoordinate(double *, double *, double *, double *);
    void perimeter(void);
    void area(void);
    void draw(void);
    void square(void);
    void setFillcharacter(char c)
    {
        fillchar=c;
    }
    void setPerimetercharacter(char c)
    {
        perichar=c;
    }
    bool isvalid(void)
    {
        return valid;
    }
    void setValid(bool v)
    {
        valid=v;
    }
};
Rectangle::Rectangle(double *a, double *b, double *c, double *d, char x, char y)
{
    setCoordinate(a,b,c,d);
    setFillcharacter(x);
    setPerimetercharacter(y);
}
void Rectangle::setCoordinate(double *p1, double *p2, double *p3, double *p4)
{   //arrangement of points; validate all points
      const int x=0, y=1;
    point1[x]=(p1[x]>20.0 || p1[x] < 0.0) ? 0.0:p1[x];
    point1[y]=(p1[y]>20.0 || p1[y] < 0.0) ? 0.0:p1[y];
    point2[x]=(p2[x]>20.0 || p2[x] < 0.0) ? 0.0:p2[x];
    point2[y]=(p2[y]>20.0 || p2[y] < 0.0) ? 0.0:p2[y];
    point3[x]=(p3[x]>20.0 || p3[x] < 0.0) ? 0.0:p3[x];
    point3[y]=(p3[y]>20.0 || p3[y] < 0.0) ? 0.0:p3[y];
    point4[x]=(p4[x]>20.0 || p4[x] < 0.0) ? 0.0:p4[x];
    point4[y]=(p4[y]>20.0 || p4[y] < 0.0) ? 0.0:p4[y];

    if(point1[y]==point2[y] && point1[x]==point4[x] && point2[x]==point3[x] && point3[y]==point4[y])
    {
        perimeter();
        area();
        square();
        setValid(true);    //valid set of points
    }
    else
    {
        cout<<"Coordinate do not form a rectangle!\n";
        setValid(false);   //invalid set of points
    }
}
void Rectangle::perimeter(void)
{
    double l=fabs(point4[1]-point1[1]);
    double w=fabs(point2[0]-point1[0]);
    cout<<setiosflags(ios::fixed | ios::showpoint);
    cout<<"length= "<<setprecision(1)<< (l>w ? l:w);
    cout<<"\twidth= "<<(l>w ? w:l);
    cout<<"perimeter= "<< 2*(w+1)<<"\n\n";
    cout<<resetiosflags(ios::fixed | ios::showpoint);
}
void Rectangle::area(void)
{
   double l=fabs(point4[1]-point1[1]);
    double w=fabs(point2[0]-point1[0]);
   cout<<setiosflags(ios::fixed | ios::showpoint);
    cout<<"area= "<<setprecision(1)<< w*l;
    cout<<resetiosflags(ios::fixed | ios::showpoint);
     cout<<"\n\n";
}
void Rectangle::square(void)
{
    const int x=0,y=1;
    if( fabs( point4[y]-point1[y])==fabs(point2[x]-point1[x]) )
        cout<<"the rectangle is a square.\n\n";
}
void Rectangle::draw(void)
{
    for( double y= 25.0; y>= 0.0; --y)
    {
        for(double x=0.0; x<=25.0;++x)
        {
          if((point1[0]==x && point1[1]==y) || (point4[0]==x && point4[1]==y))
          {
              while(x<=point2[0])   //print horizontal perimeter of rectangle
              {
                  cout<<perichar;
                  ++x;
              }
              cout<<".";    //print the remainder of quadrant
          }
          //print vertical perimeter of rectangle
          else if(((x<=point4[0] && x>=point1[0]))&& point4[1]>=y && point1[1]<=y)
          {
              cout<<perichar;
              //fill inside the rectangle
              for(x++;x<point2[0];){
                cout<<fillchar;
                ++x;
              }
              cout<<perichar;
          }
          else
            cout<<".";    //print quadrant backgroung
        }
        cout<<"\n";
    }
}
int main()
{
    double xy1[2]={12.0,12.0},xy2[2]={18.0,12.0},
           xy3[2]={18.0,20.0},xy4[2]={12.0,20.0};
           Rectangle a(xy1, xy2, xy3, xy4, '?', '*');
           if( a.isvalid() )
            a.draw();
           return 0;
}
