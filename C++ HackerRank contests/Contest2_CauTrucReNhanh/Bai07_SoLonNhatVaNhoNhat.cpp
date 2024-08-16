#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b; cin >> a >> b;
	
	double tong = a + b;
	double hieu = a - b;
	double tich = a * b;
	double thuong = (float)a / b;
	
	cout << tong << endl;
	cout << hieu << endl;
	cout << tich << endl;
	if ( b != 0 ){
		cout << thuong << endl;
	}else {
		cout << "INVALID";
	}
}
