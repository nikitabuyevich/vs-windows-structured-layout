#include "pch/pch.h"
#include <foo/bar.h>
#include <bar/foo.h>
#include <iostream>

int main()
{
	foo::Bar();
	bar::Foo();
	std::cout << "Hello World!\n";
}
