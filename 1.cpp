#include <iostream>
using namespace std;
int sum1_100(int n)
{
	if(n == 1){
		return 1;
	}else{
		return sum1_100(n-1)+n;
	}
}
int main()
{
	cout << sum1_100(10) << endl;
}
