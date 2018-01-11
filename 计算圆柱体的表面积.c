//2018.1.11
//求圆柱体表面积
//by wack

/*

问题：
输入底面半径r和高h,输出圆柱体的表面积，保留3位小数，格式见样例。

样例输入:
3.5 9
样例输出:
Area= 274.889

[分析]:
圆柱体的表面积由3部分组成:上底面积、下底面积和侧面积。由于上下底面积相等，完整的公式可以写成:表面积=底面积*2+侧面积。根据几何知识，底面积=πr²,侧面积=2xrh。

根据分析也就不难写出完整程序:

*/


#include<stdio.h>
#include<math.h>

int main(void) 
{
  const double PI = acos(-1.0); //定义常量PI，acos(-1.0)表示圆周率
  double r;	//半径
  double h;	//高
  double s1;	//底面积
  double s2;	//侧面积
  double Area;	//表面积

  printf("please input r and h:\n");	//提示用户输入半径和高

  scanf("%lf%lf", &r, &h);

  s1 = 2 * PI * r * r;
  s2 = 2 * PI * r * h;
  Area = s1 + s2;

  printf("Area = %.3lf", Area);

  return 0;
	}
