#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
	int x ; cin >> x;
	long long y ; cin >> y;
	char c ; cin >> c;
	float f ; cin >> f;
	double d ; cin >> d;
	
	cout << x << endl;
	cout << y << endl;
	cout << c << endl;
	cout << fixed << setprecision(2) << f << endl;
	cout << fixed << setprecision(9) << d << endl;
}
