#include <iostream>
using namespace std;

void func(char word[], int count[], int n, int index) {
    // ��B�z���Ҧ������ɡA��X���G
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

    // ����ܷ�e���ަ�m���r��
    count[index] = 0;
    func(word, count, n, index + 1);

    // ��ܷ�e���ަ�m���r��
    count[index] = 1;
    func(word, count, n, index + 1);
}

int main() {
    // �w�q�r�����X
    char word[3] = { 'a', 'b', 'c' };
    // �ΨӼаO�C�Ӧr���O�_�Q�襤
    int count[3] = { 0, 0, 0 };

    // �եΨ�ƥͦ��l��
    func(word, count, 3, 0);

    return 0;
}