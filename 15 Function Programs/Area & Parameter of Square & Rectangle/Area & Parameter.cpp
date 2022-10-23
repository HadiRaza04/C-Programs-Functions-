#include<iostream>
using namespace std;

int area(int);
int area(int,int);
float peri(float);
float peri(float,float);
int main()
{
        int side, length, breadth;
        cout<<"\n Enter Side of a Square : ";
        cin>>side;
        cout<<"\n Enter Length and Breadth of Rectangle : ";
        cin>>length>>breadth;
        cout<<"\n Area of Square : "<<area(side);
        cout<<"\n Area of Rectangle : "<<area(length,breadth);
        cout<<"\n Perimeter of Square : "<<peri(side);
        cout<<"\n Perimeter of Rectangle : "<<peri(length,breadth);
}
int area(int s)
{
        return(s*s);
}
int area(int l,int b)
{
        return(l*b);
}
float peri(float s)
{
        return(4*s);
}
float peri(float l,float b)
{
        return(2*(l+b));
}
