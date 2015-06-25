#include <iostream>
#include <functional>

class Base {};
class Child1 : public Base {};
class Child2 : public Base {};

void f(Child1 c) { std::cout << "void f(Child1)\n"; }
void f(Child2 c) { std::cout << "void f(Child2)\n"; }

int main(int argc, char** argv)
{
	std::cout << "Hello world!\n";
	Child1 c1;
	Child2 c2;
	f(c1);
	f(c2);
	std::cout << "K thx bai!\n";
	return 0;
}