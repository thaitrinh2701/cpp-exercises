#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b; cin >> a >> b;
	
	long long tong = a + b;
	long long hieu = a - b;
	long long tich = a * b;
	double thuong = (float)a / b;
	
	cout << tong << endl;
	cout << hieu << endl;
	cout << tich << endl;
	if ( b != 0 ){
		cout << fixed << setprecision(4) << thuong << endl;
	}else {
		cout << "INVALID";
	}
}
