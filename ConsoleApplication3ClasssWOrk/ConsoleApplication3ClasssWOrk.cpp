#include <iostream>
#include <ctime>
#include <math.h>
#include <string>	
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int a[100];//podrazdelenia
class ppl
{
public:
	string DATA;
	string FIO;
	string number;
	void setData(int n) {
		cin.ignore();
		for (int i = 0; i < n; i++) {
			getline(cin, this[i].DATA);
		}
	}
	void getData(int n) {
		for (int i = 0; i < n; i++){
			cout << this[i].DATA << endl;
		}
	}
	void getFIO(int n) {
		for (int i = 0; i < n; i++) {
			this[i].FIO=this[i].DATA.substr(0, this[i].DATA.find(" "));
			this[i].DATA.erase(0, this[i].DATA.find(" ")+1);
			string temp;
			this[i].FIO += " ";
			temp=this[i].DATA.substr(0, this[i].DATA.find(" "));
			this[i].FIO+=temp;
			this[i].DATA.erase(0, this[i].DATA.find(" ")+1);
			temp = "";
		}
	}
	void setMassiveA(int n){
		for (int i = 0; i < n; i++) {
			this[i].DATA.erase(0,7);
			cout << this[i].DATA << endl;
			
		}
		for (int i = 0; i < n; i++) {
			a[atoi(this[i].DATA.c_str())]++;
		}
		for (int i = 0; i < 100; i++) {
			if (a[i] != 0) {
				cout << a[i] << ",i=" << i << endl;
			}
		}
	}
	double avrgSize = 0;
	void getAverageSize() {
		int smth = 0;
		for (int i = 0; i < 100; i++) {
			avrgSize += a[i];
			if (a[i] > 0) {
				smth++;
			}
		}
		avrgSize /= smth;
		cout << "AVGcountOfEmpl =" << avrgSize;
	}
};
int main() {
	int n;
	cin >> n;
	ppl employers[100];
	employers->setData(n);
	employers->getData(n);
	employers->getFIO(n);
	employers->setMassiveA(n);
	employers->getAverageSize();
	system("pause");
}