#include <iostream>
#include <functional>

class Base {};
class Child1{};
class Child2{};

void f(Child1 c) { std::cout << "void f(Child1)\n"; }
void f(Child2 c) { std::cout << "void f(Child2)\n"; }
void f(std::function<void(Child1)> f) { std::cout << "void f(std::function<void(Child1)>)\n"; }
void f(std::function<void(Child2)> f) { std::cout << "void f(std::function<void(Child2)>)\n"; }

int main(int argc, char** argv)
{
	std::cout << "Hello world!\n";
	Child1 c1;
	Child2 c2;
	f(c1);
	f(c2);

	std::function<void(Child1)> f1;
	std::function<void(Child2)> f2;

	f1 = [](Child1){};
	f2 = [](Child2){};

	std::cout << "K thx bai!\n";
	return 0;
}