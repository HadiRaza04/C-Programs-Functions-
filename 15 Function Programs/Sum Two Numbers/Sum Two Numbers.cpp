#include <iostream>
using namespace std;
int addFunc(int, int);
int main() {
	int x, y, sum;
	cout << "Enter two numbers with space: ";
	cin >> x >> y;
	sum = addFunc(x, y);
	cout <<"The sum of "<<x<< " and " <<y<<" is: "<<sum;
	return 0;
}
int addFunc(int num1, int num2) {
	int addFunc;
	addFunc = num1 + num2;
	return addFunc;
}
