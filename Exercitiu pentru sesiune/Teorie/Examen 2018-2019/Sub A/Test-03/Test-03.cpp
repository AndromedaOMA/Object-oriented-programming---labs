#include <iostream>

#pragma pack (8)
class A { int x[1]; virtual void f_A() {} };
class B { int x[3]; virtual void f_B() {} };
class C : public A { int x[1]; virtual void f_C() {} };
class D : public B, public A { int x[1]; virtual void f_D() {} };
class E : public C, public D { int x[3]; virtual void f_E() {} };

int main()
{
	std::cout <<"A: "<< sizeof(A) << '\n';
	std::cout <<"B: "<< sizeof(B) << '\n';
	std::cout <<"C: "<< sizeof(C) << '\n';
	std::cout <<"D: "<< sizeof(D) << '\n';
	std::cout <<"E: "<< sizeof(E) << '\n';
	return 0;
}