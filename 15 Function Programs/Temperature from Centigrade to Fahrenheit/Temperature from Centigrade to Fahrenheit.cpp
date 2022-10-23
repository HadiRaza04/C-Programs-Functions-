#include<iostream>
using namespace std;
float convert(float);
int main()
{
        float cel, fah;
        cout<<"\n Enter Temperature in Celsius : ";
        cin>>cel;
        fah=convert(cel);
        cout<<"\n Temperature in Fahrenheit : "<<fah;
        return 0;
}
float convert(float cel)
{
        return(1.8 * cel) + 32;
}
