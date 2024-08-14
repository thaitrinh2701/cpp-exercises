#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
	int x; cin >> x;
	int y; cin >> y;
	int z; cin >> z;
	int t; cin >> t;
	
	long long tong = x + y + z + t;
	long long bieu_thuc = x - y + z * t;
	printf("%d,%d,%d,%d\n",x ,y ,z ,t);
	printf("%ld\n",tong);
	printf("%ld", bieu_thuc);
}
