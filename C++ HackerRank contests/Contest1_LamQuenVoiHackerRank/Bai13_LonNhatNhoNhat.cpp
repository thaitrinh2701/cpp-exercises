#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int x, y, z, t; cin >> x >> y >> z >> t;
	
	cout << max({x, y}) << endl;
	cout << min({z, t}) << endl;
	cout << max({x, y, z}) << endl;
	cout << min({x, y, z, t});
}
