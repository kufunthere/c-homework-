// c���ԣ��ú���ʵ�ִӼ�������10��������ͳ�ƷǸ�������������������������Ǹ���֮�ͣ�����֮�ͣ��Ǹ���֮��
#include <stdio.h> 
void func() {
    int i = 0;
    int arr[10] = { 0 };
    int count_a = 0; // �Ǹ���������
    int count_b = 0; // ��������
    int sum_a = 0; // �Ǹ�����֮��
    int sum_b = 0; // ����֮��
    long long pro = 1; // �Ǹ���֮��
 
    // ��ȡ 10 ������, ������
    for (; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 0) { // ����
            count_b++;
            sum_b += arr[i];
        } else { // �Ǹ���
            count_a++;
            sum_a += arr[i];
            pro *= arr[i];
        }
    }
    printf("�Ǹ�������:\t%d.\n", count_a);
    printf("��������:\t%d.\n", count_b);
    printf("�Ǹ�����֮��:\t%d.\n", sum_a);
    printf("����֮��:\t%d.\n", sum_b);
    printf("�Ǹ���֮��:\t%d.\n", pro);
}
