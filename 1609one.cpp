#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream fin("1.txt");
	ofstream fout("2.txt");
	 
	if (!fin.is_open()) {
		cout<<"файл 1.txt не открылся"<<endl;
		return 1;
		}
    if (!fout.is_open()) {
        cout<<"файл 2.txt не открылся"<<endl;
        return 2;
    }
    
	int g; double b; string f,i,o;
	
	while (fin>>f>>i>>o>>g>>b) {
		fout<<f<<" "<<i<<" "<<o<<" "<<g<<" "<<b<<endl;
		}
		
	if(fin.eof()) {
		cout<<"достигнут конец файла, данные продублированы в файл"<<endl;
		}
	else if(fin.fail()){
		cout<<"файл не корректен"<<endl;
	}
	fin.close();
	return 0;
	}

