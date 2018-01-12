#include<iostream>
#include<string>



template <typename AnyType>
void Swap(AnyType &a, AnyType &b)
{
	AnyType temp;
	temp = a;
	a = b;
	b = temp;
}

unsigned long left(unsigned long num, unsigned int ct);
char *left(const char *str, int n = 1);
inline double squrare(double x) { return x * x; }

int main()
{
	using namespace std;
	double a, b;
	double c = 3.0;
	a = squrare(5.0);
	b = squrare(4.5 + 7.5);
	cout << left(8, 9) << endl;

	cout << left("hello word!", strlen("hello word!")) << endl;
	return 0;
}


unsigned long left(unsigned long num, unsigned int ct)
{
	return num + ct;
}


char *left(const char *str, int n)
{
	char *test = new char[n + 1];
	return test;
}