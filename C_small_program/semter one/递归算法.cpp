#include <stdio.h>
void hanoi(int num, char source, char target,char auxiliary) {
    //统计移动次数
    static int i = 1;
    //如果圆盘数量仅有 1 个，则直接从起始柱移动到目标柱
    if (num == 1) {
        printf("第%d次:从 %c 移动至 %c\n", i, source, target);
        i++;
    }
    else {
        //递归调用 hanoi() 函数，将 num-1 个圆盘从起始柱移动到辅助柱上
        hanoi(num - 1, source, auxiliary, target);
        //将起始柱上剩余的最后一个大圆盘移动到目标柱上
        printf("第%d次:从 %c 移动至 %c\n", i, source, target);
        i++;
        //递归调用 hanoi() 函数，将辅助柱上的 num-1 圆盘移动到目标柱上
        hanoi(num - 1, auxiliary, target, source);
    }
}

int main()
{
    //以移动 3 个圆盘为例，起始柱、目标柱、辅助柱分别用 A、B、C 表示
    hanoi(4, 'A', 'B', 'C');
    
    return 0;
}
