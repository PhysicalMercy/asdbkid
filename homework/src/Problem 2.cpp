#include <iostream>
using namespace std;

void func(char word[], int count[], int n, int index) {
    // 當處理完所有元素時，輸出結果
    if (index == n) {
        cout << "{ ";
        for (int i = 0; i < n; i++) {
            if (count[i] == 1) {
                cout << word[i] << " ";
            }
        }
        cout << "}" << endl;
        return;
    }

    // 不選擇當前索引位置的字元
    count[index] = 0;
    func(word, count, n, index + 1);

    // 選擇當前索引位置的字元
    count[index] = 1;
    func(word, count, n, index + 1);
}

int main() {
    // 定義字元集合
    char word[3] = { 'a', 'b', 'c' };
    // 用來標記每個字元是否被選中
    int count[3] = { 0, 0, 0 };

    // 調用函數生成子集
    func(word, count, 3, 0);

    return 0;
}