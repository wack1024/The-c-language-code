//2018.1.12
//鸡兔同笼问题
//by wack

/**
*问题：
*已知鸡和兔的总数量为n,总腿数为m。输入n和m,依次输出鸡的数目和兔的数目。如果无解，则输出No answer。
*样例输入:
*14 32
*样例输出:
*12 2
*样例输入:
*10 16
*样例输出:
*分析：
*设鸡有a只，兔有b只，则a+b=n,2a+4b=m,联立解得a= (4n-m)/2,b=n-a。在什么情况下此解“不算数”呢? 首先，a和b都是整数;其次，a和b必须是非负的。
**/



//解答：

#include<stdio.h>

int main(void)
 {
  int n;	//鸡兔总量
  int m;	//鸡兔总腿数
  int a;	//鸡的数量
  int b;	//兔的数量

  printf("请输入鸡兔的数量和总腿数：\n");
  scanf("%d%d", &n, &m);

  a = (4 * n - m) / 2;
  b = n - a;
  
  if ( m % 2 == 1 || a < 0 || b < 0)
    printf("NO answer!\n");
  else
    printf("%d %d\n", a, b);

  return 0;
	}
