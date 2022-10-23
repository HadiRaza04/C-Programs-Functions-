#include <iostream>
#include <conio.h>
using namespace std;
int division(int,int);   //function prototype / declaration
int main()
{
    int num1,num2,result;
    cout<<"Enter two numbers with space to find division\n";
    cin>>num1>>num2;  //numbers receive from the user
    result=division(num1,num2);//assign the output to variable result
    //function call
     cout << "Division of "<<num1<<" and "<<num2<<" is: " << result<<endl;
    getch();
    return 0;
}
int division(int a, int b)
{
        return a/b;
    }
