#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int n; cin >> n;
	
	cout << setw(6) << setfill('0') << n << endl;
	cout << setw(6) << setfill('#') << n;
}
