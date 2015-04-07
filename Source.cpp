#include<iostream>
#include<stdint.h>
#include<string>

using namespace std;

class A{};
class B{};
class C :public A{};
class D :public A, public B{};
class E : public virtual A{};

class Base{
public:
	Base(){ cout << "base" << endl; }
	~ Base(){ cout << "base" << endl; }
	virtual void f(int){ cout << "base v" << endl; }
	virtual void f(double){ cout << "base xx" << endl; }
};
class Base1{
public:
	Base1(){ cout << "base" << endl; }
	~Base1(){ cout << "base" << endl; }
};
class Base2:public Base{
public:
	Base2(){ cout << "base" << endl; }
	~Base2(){ cout << "base" << endl; }
};
void print_size(int32_t a[10]){
	cout << sizeof(a) << endl;
}
int main(){
	int32_t a[10];
	cout << sizeof(a) << endl;
	print_size(a);
	string s="sdc";
	cout << sizeof(s) << endl;
	string str[] = { "dsf", "sdgdfe", "gdsgerertd" };
	cout << sizeof(str) << endl;
	

	cout<< sizeof(A) << endl;
	cout<< sizeof(C) << endl;
	cout<< sizeof(D) << endl;
	cout<< sizeof(E) << endl;

	cout << sizeof(Base) << endl;
	cout << sizeof(Base1) << endl;
	cout << sizeof(Base2) << endl;
	system("pause");
}