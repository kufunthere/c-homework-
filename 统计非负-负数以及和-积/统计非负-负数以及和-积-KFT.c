// c语言，用函数实现从键盘输入10个整数，统计非负数个数，负数个数，并计算非负数之和，负数之和，非负数之积
#include <stdio.h> 
void func() {
    int i = 0;
    int arr[10] = { 0 };
    int count_a = 0; // 非负整数数量
    int count_b = 0; // 负数数量
    int sum_a = 0; // 非负整数之和
    int sum_b = 0; // 负数之和
    long long pro = 1; // 非负数之积
 
    // 读取 10 个整数, 并计算
    for (; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 0) { // 负数
            count_b++;
            sum_b += arr[i];
        } else { // 非负数
            count_a++;
            sum_a += arr[i];
            pro *= arr[i];
        }
    }
    printf("非负数个数:\t%d.\n", count_a);
    printf("负数个数:\t%d.\n", count_b);
    printf("非负整数之和:\t%d.\n", sum_a);
    printf("负数之和:\t%d.\n", sum_b);
    printf("非负数之积:\t%d.\n", pro);
}
