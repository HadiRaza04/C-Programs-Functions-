#include<iostream>
using namespace std;

int table(int n);

int main()
{
  int n=0;

  cout<<"Enter Number: ";
  cin>>n;

  table(n);

}
int table(int n)
{
    int t=1;
   
  cout<<"Table of " <<n << " is: " <<endl;
 
  for(int i=1; i<=10; i++)
  {
     t=n*i;
   
     cout<<n <<" * " <<i <<" = " <<t <<endl;
  }
  return 0;
}
