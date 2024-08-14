#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int n; cin >> n;
	cout << (double)n*2 << endl;
	cout << (double)n*10 << endl;
	cout << n/2 << endl;
	cout << fixed << setprecision(3) << (float)n/2; 
}
