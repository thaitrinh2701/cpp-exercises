#include <bits/stdc++.h>
using namespace std;

int main(){
	float PI = 3.14;
	int R; cin >> R;
	
	double CV = 2 * PI * R;
	double DT = PI * pow(R,2);
	
	cout << fixed << setprecision(4) << CV << " " << DT;
}
