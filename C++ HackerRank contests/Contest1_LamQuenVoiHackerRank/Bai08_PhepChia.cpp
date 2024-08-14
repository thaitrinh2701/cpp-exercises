#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int a,b; cin >> b >> a;
	double c = (float)a / b;
	
	cout << a / b << endl;
	cout << fixed << setprecision(2) << c << endl;
}
