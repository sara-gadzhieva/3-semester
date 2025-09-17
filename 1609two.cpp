#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char **argv) {
	if (argc<3) {
		cout<<"в программу не переданы названия файлов"<<endl;
		return -1;
		}
	ifstream fin(argv[1]);
	ofstream fout(argv[2]);
	 
	if (!fin.is_open()) {
		cout<<"файл "<<argv[1]<<" не открылся"<<endl;
		return 1;
		}
    if (!fout.is_open()) {
        cout<<"файл "<<argv[2]<<" не открылся"<<endl;
        return 2;
    }
    
	int g; double b; string f,i,o;
	
	while (fin>>f>>i>>o>>g>>b) {
		fout<<f<<" "<<i<<" "<<o<<" "<<g<<" "<<b<<endl;
		}
		
	if(fin.eof()) {
		cout<<"достигнут конец файла, данные продублированы в файл"<<argv[2]<<endl;
		}
	else if(fin.fail()){
		cout<<"файл не корректен"<<endl;
	}
	fin.close();
	return 0;
	}


