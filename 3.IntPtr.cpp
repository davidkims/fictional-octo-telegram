#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 100;
    int *ptr = &a;  // ��: ������ ptr�� ������ �Ŀ� a�� �ּҸ� �ִ´�.
    cout << "ptr�� ����Ű�� ���� �� : " << *ptr << endl;  // ��: ptr�� ����Ű�� ���� ���� ���
    *ptr = 20;  // ��: ptr�� ����Ű�� ���� 20�� ����
    cout << "���� a�� �� : " << a << endl;
    ptr = &b;  // ��: ptr�� b�� ����Ű�� ��
    cout << "���� b�� �� : " << *ptr << endl;
    return 0;
}
