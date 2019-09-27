#include<stdio.h>

int main()
{
    int a,b;
    int t,z;
    int f[200]={0};
    printf("请输入一个分数，以a/b的形式");
    scanf("%d/%d",&a,&b);
        printf("0.");
    for(int i=0;i<200;i++){
          //a*10对b取余
        z=a*10/b;   //计算a/b的商
        t=a*10%b;//把商赋值给数组
        printf("%d",z);
        a=t;       //将余数赋给a
        if (t==0)
            break;           
    }
    return 0;
}
