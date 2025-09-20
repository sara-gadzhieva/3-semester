#include <iostream>
using namespace std;	
class class1 {
	int a,b;
	public:
	void set_a(int num1);
	void set_b(int num2);
	int get_a();
	int get_b();
	};
void class1::set_a(int num1) {
	a=num1;
	}
int class1::get_a() {
	return a;
	}
void class1::set_b(int num2) {
	b=num2;
	}
int class1::get_b() {
	return b;
	}
int main () {
	class1 ob;
	ob.set_a(20);
	ob.set_b(2);
	///cout<<ob.a; 
	cout<<ob.get_a()<<endl;
	cout<<ob.get_b()<<endl;
	return 0;
	}
