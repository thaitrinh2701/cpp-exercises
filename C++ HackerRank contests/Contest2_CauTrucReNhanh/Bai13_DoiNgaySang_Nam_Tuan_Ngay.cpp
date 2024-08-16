#include <bits/stdc++.h>
using namespace std;

int main(){
	unsigned n; cin >> n;
	
	//doi sang nam
	int nam = n / 365;
	
	//doi sang tuan
	int tuan = (n % 365) / 7;
	
	//doi sang ngay
	int ngay = n % 365 % 7;
	
	cout << nam << " " << tuan << " " << ngay;
	
}
