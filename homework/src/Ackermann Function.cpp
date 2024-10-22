#include<iostream>

using namespace std;

int ack(int m, int n) {
	if (m == 0)
		return n + 1;       // Ackermann ��ƪ��Ĥ@�Ӱ򥻱��p if m=1 ��ƭ� n+1
	else if ((m>0)&&(n == 0))
		return ack(m - 1, 1);         // Ackermann ��ƪ��ĤG�Ӱ򥻱��p if m>0 and n=0, ��^ack(m - 1, 1)
	else if ((m > 0) && (n > 0))
		return ack(m - 1, ack(m, n - 1)); //Ackermann ��ƪ����k���p�G�p�G m&&n>0 �h��^ack(m - 1, ack(m, n - 1))
}
int main() {
	int n, m,a;
	cin >> m >> n;   //��Jm,n��
	a = ack(m, n);    //��a = ackermann function ������
	cout << a << endl;
	return 0;
}
