#include <iostream>
#include <cstdlib>
using namespace std;
///ссылка нужна для того, чтобы работать не с копией символа, а напрямую с элементом массива, потому что нам нужно изменять сами элементы массива, 
///без сыллки мы бы пытались изменять копии, что было бы неправильно и бессмысленно, потому что мы бы уже не работали бы с самим массивом
class Array {
    int size;
    char *p;
	public:
    Array(int num);
    ~Array() { delete[] p; }
    char &put(int i); 
    char get(int i);
};

Array::Array(int num) {
    p=new char[num];
    if (!p) {
        cout<<"ошибка выделения памяти\n";
        exit(1);
    }
    size=num;
}
char &Array::put(int i) {
    if (i<0 || i>=size) {
        cout<<"ошибка, нарушены границы массива\n";
        exit(1);
    }
    return p[i];
}

char Array::get(int i) {
    if (i<0 || i>=size) {
        cout<<"ошибка, нарушены границы массива\n";
        exit(1);
    }
    return p[i]; 
}

int main() {
    Array a(10);
    a.put(3)='X';
    a.put(2)='R';
    cout<<a.get(3)<<a.get(2);
    cout<<"\n";
    a.put(11)='!'; 
    return 0;
}
