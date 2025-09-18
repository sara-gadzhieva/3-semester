#include <iostream>
using namespace std;

namespace calculator1{
	int plus(int a,int b){
		return a+b;
		}
	int minus(int a,int b) {
		return a-b;
		}
	}
namespace calculator2{
	int umnoj(int a,int b){
		return a*b;
		}
	
	void sravn(int a,int b){
		if (a>b) {
			cout<<a<<">"<<b<<endl;
			}
		if (a<b) {
			cout<<a<<"<"<<b<<endl;
			}
		if (a==b) {
			cout<<a<<"="<<b<<endl;
			}
		}
	}
int main() {
	int a,b;
	cout<<"введите два числа "<<endl;
	cin>>a>>b;
	cout<<endl;
	cout<<"1) "<<a<<"+"<<b<<"="<<calculator1::plus(a,b)<<endl;
	cout<<"2) "<<a<<"-"<<b<<"="<<calculator1::minus(a,b)<<endl;
	cout<<endl;
	cout<<"3) "<<a<<"*"<<b<<"="<<calculator2::umnoj(a,b)<<endl;
	cout<<"4) "; calculator2::sravn(a, b);

	return 0;
	}

