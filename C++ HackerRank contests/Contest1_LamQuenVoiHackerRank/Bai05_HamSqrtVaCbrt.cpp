#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int n; cin >> n;
	
//	double canbac2 = sqrt(n), canbac3 = cbrt(n);
	cout << fixed << setprecision(2) << sqrt(n) << endl;
	cout << fixed << setprecision(3) << cbrt(n) << endl;
}
