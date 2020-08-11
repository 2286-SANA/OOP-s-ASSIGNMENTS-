#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class Rectangle
{
private:
    double point1[2];
    double point2[2];
    double point3[2];
    double point4[2];

public:
    Rectangle(double *,double *,double *,double *);
    void setCoordinate(double *,double *, double *,double *);
    void perimeter(void);
    void area(void);
    void square(void);
};
Rectangle::Rectangle(double *a, double *b, double *c, double *d )
{
    setCoordinate(a,b,c,d);
}
void Rectangle::setCoordinate( double *p1, double *p2, double *p3, double *p4)
{
    const int x=0, y=1;
    //arrangement of points; validate allpoints
    point1[x]=(p1[x]>20.0 || p1[x] < 0.0) ? 0.0:p1[x];
    point1[y]=(p1[y]>20.0 || p1[y] < 0.0) ? 0.0:p1[y];
    point2[x]=(p2[x]>20.0 || p2[x] < 0.0) ? 0.0:p2[x];
    point2[y]=(p2[y]>20.0 || p2[y] < 0.0) ? 0.0:p2[y];
    point3[x]=(p3[x]>20.0 || p3[x] < 0.0) ? 0.0:p3[x];
    point3[y]=(p3[y]>20.0 || p3[y] < 0.0) ? 0.0:p3[y];
    point4[x]=(p4[x]>20.0 || p4[x] < 0.0) ? 0.0:p4[x];
    point4[y]=(p4[y]>20.0 || p4[y] < 0.0) ? 0.0:p4[y];
   //verify thats points form a reactangle
    if(p1[y]==p2[y] && p1[x]==p4[x] && p2[x]==p3[x] && p3[y]==p4[y])
    {
        perimeter();
        area();
        square();
    }
    else
        cout<<"coordinates do not form a rectangle!\n ";
}
void Rectangle::perimeter(void)
{
    double l= fabs(point4[1] - point1[1]);
    double w= fabs(point2[0] - point1[0]);
    cout<<setiosflags(ios::fixed | ios::showpoint);
    cout<<"length= "<< setprecision(1)<<( l>w ? l:w );
    cout<<"\t\twidth= "<<( l>w ? w:l );
    cout<<"\n perimeter: "<< 2*(l+w);
    cout<<resetiosflags(ios::fixed | ios::showpoint)<<"\n\n";
}
    void Rectangle::area(void)
    {
    double l= fabs(point4 [1] - point1[1]);
    double w=fabs(point2 [0] - point1[0]);
    cout<<"area: "<< setprecision(1)<< w*l;
    cout<<"\n\n";
    }
void Rectangle::square(void)
{
    const int x=0,y=1;
    if( fabs(point4[y] - point1[y]) == fabs(point2[x] - point1[x]))
        cout<<"the rectangle is square..\n\n";
}
int main()
{
    double w[2] = {1.0, 1.0}, x[2] = {5.0, 1.0};
    double y[2] = {5.0, 3.0}, z[2] = {1.0, 3.0};
    double j[2] = {0.0, 0.0}, k[2] = {1.0, 0.0};
    double m[2] = {1.0, 1.0}, n[2] = {0.0, 1.0};
    double v[2] = {99.0, -2.3};
           Rectangle a(z,y,x,w), b(j,k,m,n), c(w,x,m,n), d(v,x,y,z);
           return 0;
}
