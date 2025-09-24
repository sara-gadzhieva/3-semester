#include <iostream>
using namespace std;

class myclass {
	int *a;
	public:
	myclass(int size);
	~myclass(){
		cout<<"в деструкторе"<<endl;
		delete [] a;
		}
	};
myclass::myclass(int size){
	a=new(nothrow)int[size];
	if(!a) {
		cout<<"ошибка при выделении памяти"<<endl;
		exit(1);
		}
	cout<<"выделена память для "<<size<<" элементов"<<endl;
	}
	
int main() {
	int x;
	cout<<"под какое число элементов необходимо выделить память?"<<endl;
	cin>>x;
	myclass ob1(x);
	return 0;
	}
