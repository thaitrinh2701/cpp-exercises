#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	float F; cin >> F;
	float phanThuc = F - floor(F);
	cout << (int)F << endl;
	cout << phanThuc << endl;
}
