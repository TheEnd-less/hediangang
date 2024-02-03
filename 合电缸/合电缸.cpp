#include <stdio.h>
#include <stdlib.h>
#include<Windows.h>

static int percent()
{
    for (int i = 0; i <= 10; i++)
    {
        printf("%d%%\b\b", i);
        Sleep(30);
    }
    printf("\b");
    for (int i = 11; i <= 100; i++)
    {
        printf("%d%%\b\b\b", i);
        Sleep(30);
    }
    printf("\n");
    return 0;
}
int main()
{
    int a;
    printf("合电缸 V0.17   Powered By The_Endless\n");
    printf("加载中。。。\n");
    percent();
    printf("加载完成！\n");
    system("PAUSE");
    printf("请选择突变路线（1,2）\n");
    scanf_s("%d", &a);
    printf("已加入反应物：王明上\n");
    Sleep(300);
    if (a==1)
    {
        printf("已加入反应基底：⚡病毒⚡\n");
    }
    else
    {
        printf("已加入反应基底：♂病毒♂\n");
    }
    Sleep(300);
    printf("正在突变。。。");
    percent();
    printf("正在通电。。。（220KV 50KHz）");
    percent();
    printf("正在加入浓硫酸（98%%）。。。");
    percent();
    if (a == 2)
    {
        printf("正在加入Bro♂杰の * *");
        percent();
        printf("（Bro ♂杰：“啊！！！”）\n");
        Sleep(500);
    }
    printf("正在离心。。。（114514r/s）");
    percent();
    if (a==1)
    {
        printf("突变成功！得到产物：王电上！\n");
    }
    else
    {
        printf("突变成功！得到产物：王♂上！\n");
    }
    
    system("PAUSE");
    return 0;
}
