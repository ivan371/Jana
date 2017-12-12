#include <assert.h>
#include "complex.hpp"
#include <iostream>

void test1 (){
	Complex* c1 = new Complex(1, 2);
	assert(c1 -> re == 1);
	assert(c1 -> im == 2);
	Complex* c2 = new Complex(1);
	assert(c2 -> im == 0);
	Complex* c3 = new Complex(*c1);
	assert(c3 -> re == 1);
	assert(c3 -> im == 2);
}

void test2 () {
	Complex c1 (1, 2);
	Complex c2 (7, 8);
	Complex c3 = c1;
	assert((c1 + c2).re == 8);
	assert((c1 + c2).im == 10);
	assert((c2 - c1).re == 6);
	assert((c2 - c1).im == 6);
	assert((c1 * c2).re == -9);
	assert((c1 * c2).im == 22);
	assert(c3.re == 1);
	assert(c3.im == 2);
}

void test3 () {
	Complex c1(3, 4);
	assert(c1.abs() == 5.0);
}

int main() {
	test1();
	test2();
	test3();
}