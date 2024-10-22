#include<iostream>

using namespace std;

int ack(int m, int n) {
	if (m == 0)
		return n + 1;       // Ackermann 函數的第一個基本情況 if m=1 函數值 n+1
	else if ((m>0)&&(n == 0))
		return ack(m - 1, 1);         // Ackermann 函數的第二個基本情況 if m>0 and n=0, 返回ack(m - 1, 1)
	else if ((m > 0) && (n > 0))
		return ack(m - 1, ack(m, n - 1)); //Ackermann 函數的遞歸情況：如果 m&&n>0 則返回ack(m - 1, ack(m, n - 1))
}
int main() {
	int n, m,a;
	cin >> m >> n;   //輸入m,n值
	a = ack(m, n);    //讓a = ackermann function 的答案
	cout << a << endl;
	return 0;
}
