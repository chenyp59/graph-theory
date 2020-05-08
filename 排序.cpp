#include <iostream>
using namespace std;
 
int main()
{
	int a[10],m;
	for(int i = 0;i < 10;++i)
		cin >> a[i];
	
	for(int i = 0;i < 9;++i)
		for(int j = i+1;j < 10;++j)
			if(a[i] < a[j]){
				m = a[i];
				a[i] = a[j];
				a[j] = m;
			}
			
	cout << a[0];
	for(int i = 1;i < 10;++i)
		cout << " " << a[i];
	return 0;
 } 
