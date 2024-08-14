#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int x, y; cin >> x >> y;
	double hamF = 5 * x + 2 * y + x * y;
	cout << hamF;
}
