#include <iostream>
using namespace std;

class myclass{
	int n,d;
	public:
	myclass(int i, int j):n(i), d(j) {}
	friend bool isfactor(myclass ob);
	};
	
bool isfactor(myclass ob) {
	return ob.n%ob.d==0;
	}
int main () {
	myclass ob1(9,2), ob2(6,2);
	if (isfactor(ob1)) {
		cout<<"9 делится на 2 без остатка"<<endl;
		}
	else {
		cout<<"9 делится на 2 с остатком"<<endl;
		}
	if (isfactor(ob2)) {
		cout<<"6 делится на 2 без остатка"<<endl;
		}
	else {
		cout<<"6 делится на 2 с остатком"<<endl;
		}
	}
