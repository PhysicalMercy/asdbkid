#include<iostream>
#include<stack>
using namespace std;

int ackermann(int m, int n) {
    stack<int> s;
    s.push(m);             //將初始的m值推入堆疊

    while (!s.empty()) {
        m = s.top();
        s.pop();          //將堆疊頂部的值彈出並把值給 m, 模擬了每次從遞歸中返回上一層的情況,

        if (m == 0) {
            n = n + 1;   
        }
        else if (n == 0) {
            s.push(m - 1); 
            n = 1;       //如果達成條件就會把 m-1 推入堆疊 and 把n設為1, 這模擬了遞歸的情況 ack(m - 1, 1)
        }
        else {
            s.push(m - 1);  
            s.push(m);      
            n = n - 1;  //先將 m - 1 推入堆疊，然後將當前的 m 也推入堆疊，並減少 n。這對應於 ack(m - 1, ack(m, n - 1)) 的情況。
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