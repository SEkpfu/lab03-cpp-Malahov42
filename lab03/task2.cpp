/* 2 b)
#include <iostream>
using namespace std;
int main(){
	int a,k=0;
	for (int i=1; i>=1 &&i<=7; i++ ){
		cin>>a;
		if (a<0){
			k+=1;
		}
	}

	cout<<k;
	return 0;
}
*/

/* 2b)
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,k=0;
	for (int i=1; i>=1 &&i<=7; i++ ){
		cin>>a;
		if (abs(a)>9 && abs(a)<100){
			k+=a;
		}
	}
	cout<<k;
	return 0;

}
*/

/* 2 c)
#include <iostream>
int main() {
	int n; 
	int minN; 
	cin >> n;
	minN = n; 
	for (int i = 1; i < 7; ++i) {
		cin >> n;
		if (n < minN) {
			minN = n; 
		}
	}
	cout<< minN <<endl;
	return 0;
}
*/