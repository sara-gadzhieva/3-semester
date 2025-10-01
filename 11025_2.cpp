#include <iostream>
using namespace std;

class myclass{
	int size, *mas;
	public:
	myclass(int size):size(size) {
		mas=new int [size];
		}
	void put(int i, int num) {
		mas[i]=num;
		}
	void show() {
		for(int i=0;i<size;i++) {
			cout<<i<<" "<<mas[i]<<endl;
			}
		}
	~myclass() {
		delete [] mas;
		}
	myclass(const myclass &ob):size(ob.size) {
		mas=new int[size];
		for(int i=0;i<size;i++) {
			mas[i]=ob.mas[i];
			}
		}
	};
	
int main() {
	myclass ob1(8);
	for(int i=0;i<10;i++) {
		ob1.put(i,i);
		}
	ob1.show();
	myclass ob2=ob1;
	for(int i=0;i<10;i++) {
		ob1.put(i,i);
		}
	ob2.show();
	return 0;
	}
