#include <iostream>
using namespace std;
 
// Function declaration
double cube(double num);
 
 
int main()
{
    int num;
    double c;
 
    //Inputting number from user
    cout<<"Enter any number: "<<endl;
    cin>>num;
 
    c = cube(num);
 
    cout<<"Cube of " <<num << " is "<<c;
 
    return 0;
}
 
//Function to find cube of any number
double cube(double num)
{
    return (num * num * num);
}
