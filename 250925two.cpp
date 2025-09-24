#include <iostream>
using namespace std;

class intt{
	int a;
	public:
	intt(int x): a(x){
		cout<<"в конструкторе \"целая часть числа\""<<endl;
		}
	};
class frac{
	int a;
	public:
	frac(int x): a(x){
		cout<<"в конструкторе \"дробная часть числа\""<<endl;
		}
	};
class number{
	intt ob1;
	frac ob2;
	public:
	number(int i, int f): ob1(i), ob2(f) {
		cout<<"в конструкторе \"число с плавающей точкой\""<<endl<<endl;
		cout<<"вещественное число: "<<i<<"."<<f<<endl;
		}
	};
int main() {
	int x,y;
	cout<<"введите целую часть"<<endl;
	cin>>x;
	cout<<"введите дробную часть (число после запятой)"<<endl;
	cin>>y;
	number(x,y);
	return 0;
	}
