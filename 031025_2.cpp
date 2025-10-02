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
	
	
	
	};
	
int sp_greatter(car c, truck t) {
	return c.speed-t.speed;
	}
