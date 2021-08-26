#include <iostream>
using namespace std;

void Fibonacci(int f);
void main()
{
	setlocale(LC_ALL, "");
	int f = 0;
	cout << "До какого предела вывести ряд: "; cin >> f;
	Fibonacci(f);
}
void Fibonacci(int f)
{
	static int a = 0, b = 1, c = 1;
	if (a > f)return;
	cout << a << '\t';
	c = (a = b) + (b = c);
	Fibonacci(f);
}