#include <iostream>
using namespace std;
int main(){
	int a;
	int n;
	int w = 1;
	cout << "podaj podstawe ";
	cin >> a;
	cout << "podaj wykladnik ";
	cin >> n;
while(n > 0){
	if(n % 2 == 1){
	w = w * a;	
	}
	a = a * a;
	n = n / 2;
}
cout << "wynik to: " << w;
}
