#include <bits/stdc++.h>
using namespace std;

int main(){
	unsigned int n; cin >> n;
	
	//Ktra so chan
	if(n % 2 == 0){
		cout << "YES" << endl;
	}else cout << "NO" << endl;
	
	//Ktra vua chia het cho 3 vua chia het cho 5
	if(n % 3 == 0 && n % 5 == 0){
		cout << "YES" << endl;
	}else cout << "NO" << endl;
	
	//Ktra vua chia het cho 3 khong chia het cho 7
	if(n % 3 == 0 && n % 7 == 0){
		cout << "YES" << endl;
	}else cout << "NO" << endl;
	
	//Ktra vua chia het cho 3 hoac chia het cho 7
	if(n % 3 == 0 || n % 7 == 0){
		cout << "YES" << endl;
	}else cout << "NO" << endl;
	
	//Ktra >30 && <50
	if(n > 30 && n <50){
		cout << "YES" << endl;
	}else cout << "NO" << endl;
	
	//Ktra so khong nho hon 30 va chia het 1 trong 3 so 2,3,5
	if(n > 30 && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)){
		cout << "YES" << endl;
	}else cout << "NO" << endl;
	
	//
	if((n >= 10 && n <= 99) && (n % 10 == 2 || n % 10 == 3 || n % 10 == 5 || n % 10 == 7)){
		cout << "YES" << endl;
	}else cout << "NO" << endl;
	
	//
	if((n >= 10 && n <= 99) && n % 23 == 0){
		cout << "YES" << endl;
	}else cout << "NO" << endl;
	
	//
	if(n < 10 || n > 20){
		cout << "YES" << endl;
	}else cout << "NO" << endl;
	
	//
	if((n % 10) % 3 == 0){
		cout << "YES" << endl;
	}else cout << "NO" << endl;
}
