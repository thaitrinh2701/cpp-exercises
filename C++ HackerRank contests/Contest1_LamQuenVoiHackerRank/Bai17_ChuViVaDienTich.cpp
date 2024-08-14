#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int cd, cr; cin >> cd >> cr;
	
	cout << "Chu vi HCN la : " << (long long)(cd+cr)*2 << endl;
	cout << "Dien tich HCN la : " << (long long)(cd*cr);
}
