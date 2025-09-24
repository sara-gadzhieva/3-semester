#include <iostream>
using namespace std;

class myclass {
	int x,y;
	public:
	myclass(int a, int b);
	void show (){
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
		}
	};
	
myclass::myclass(int a,int b) : x(a), y(b) {
	cout<<"в конструкторе"<<endl;
	}

int main () {
	myclass ob1(5, 8);
	ob1.show();
	return 0;
	}
