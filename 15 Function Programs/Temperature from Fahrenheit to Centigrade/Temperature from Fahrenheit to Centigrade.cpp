#include<iostream>
using namespace std;
float convert(float);
int main()
{
        float fah, cel;
        cout<<"\n Enter Temperature in Fahrenheit : ";
        cin>>fah;
        cel=convert(fah);
        cout<<"\n Temperature in Celsius : "<<cel;
        return 0;
}
float convert(float fah)
{
        return ((fah-32) / 1.8);
}
