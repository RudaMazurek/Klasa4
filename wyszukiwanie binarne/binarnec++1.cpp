#include <iostream>
using namespace std;
int wyszukiwanie(int l, int p, int szukana);
int main(){
	int l = 0;
	int p = 15;
	int szukana = 29;
	cout << "Liczba "<< szukana << " wystepuje w zbiorze w komorce o indeksie "<< wyszukiwanie(l, p, szukana);

return 0;
}



int wyszukiwanie(int l, int p, int szukana){
	int sr = (l+p)/2;
	int tablica[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
while(l <= p){
		if(szukana == tablica[sr]){
			return sr;	
		}
		if(szukana < tablica[sr]){
			p = sr - 1;
		}else{
			l = sr + 1;
		}
		sr = (l+p)/2;
		}
		
	
	return -1;
}