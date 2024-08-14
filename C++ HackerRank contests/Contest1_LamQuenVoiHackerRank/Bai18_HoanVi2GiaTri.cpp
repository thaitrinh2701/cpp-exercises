#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int a, b; cin >> a >> b;
	swap(a,b);
	long long kq = 128 * a + 97 * b + 1000;
	cout << kq;
}
