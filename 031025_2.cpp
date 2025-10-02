#include <iostream>
using namespace std;

class truck;
class car {
	int passenger, speed;
	public:
	car(int p, int s):passenger(p), speed(s) {}
	friend int sp_greater(car c, truck t);
	};

class truck {
	int weight, speed;
	public:
	truck(int w, int s):weight(w), speed(s) {}
	friend int sp_greater(car c, truck t);	
	};
	
int sp_greater(car c, truck t) {
	return c.speed-t.speed;
	}

int main () {
	int t;
	car c1(4,90), c2(5,70);
	truck t1(2000,20), t2(7000,80);
	t=sp_greater(c1, t1);
	if(t<0) {
		cout<<"грузовик быстрее"<<endl;
		}
	else if(t==0) {
		cout<<"скорости равны"<<endl;
		}
    else {
		cout<<"легковая машина быстрее"<<endl;
		}
    t=sp_greater(c2, t2);  
	if(t<0) {
		cout<<"грузовик быстрее"<<endl;
		}
	else if(t==0) {
		cout<<"скорости равны"<<endl;
		}
    else {
		cout<<"легковая машина быстрее"<<endl;
		}
	return 0;
	}
