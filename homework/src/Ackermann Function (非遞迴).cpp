#include<iostream>
#include<stack>
using namespace std;

int ackermann(int m, int n) {
    stack<int> s;
    s.push(m);             //�N��l��m�ȱ��J���|

    while (!s.empty()) {
        m = s.top();
        s.pop();          //�N���|�������ȼu�X�ç�ȵ� m, �����F�C���q���k����^�W�@�h�����p,

        if (m == 0) {
            n = n + 1;   
        }
        else if (n == 0) {
            s.push(m - 1); 
            n = 1;       //�p�G�F������N�|�� m-1 ���J���| and ��n�]��1, �o�����F���k�����p ack(m - 1, 1)
        }
        else {
            s.push(m - 1);  
            s.push(m);      
            n = n - 1;  //���N m - 1 ���J���|�A�M��N��e�� m �]���J���|�A�ô�� n�C�o������ ack(m - 1, ack(m, n - 1)) �����p�C
        }
    }

    return n;
}

int main() {
    int m, n, a;
    cin >> m >> n;
    a = ackermann(m, n);
    cout << "Ackermann(" << m << ", " << n << ") = " << a << endl;
    return 0;
}