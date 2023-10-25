#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int y, m, d;
	printf("输入一个日期(yyyy-dd-mm)");
	scanf("%d-%d-%d", &y, &m, &d);
	if (y < 1 || y>9999 == 1)
	{
		printf("年份错误\n");//年份正确与否判断
	
	}
	else
		if (m < 1 || m>13 == 1)
		{
			printf("月份错误\n");//月份判断

		}
		else
		{
			if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)//闰年判断
			{
				if (m ==2)
				{
					if (d < 1 || d>29 == 1)
					{
						printf("日期错误\n");
					}
					else
					{
						printf("输入的日期是：%d年%d月%d日", y, m, d);
					}
				}//2月判断
				else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) == 1)
				{
					if (d < 1 || d>31 == 1)
					{
						printf("日期错误");
					}
					else
					{
						printf("输入的日期是：%d年%d月%d日", y, m, d);
					}
				}//大月判断
				else
				{
					if (d < 1 || d>30 == 1)
					{
						printf("日期错误");
					}
					else
					{
						printf("输入的日期是：%d年%d月%d日", y, m, d);
					}
				}//小月判断
			}
			else
			{
				if (m == 2)
				{
					if (d < 1 || d>28 == 1)
					{
						printf("日期错误\n");
					}
					else
					{
						printf("输入的日期是：%d年%d月%d日", y, m, d);
					}
				}
				else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) == 1)
				{
					if (d < 1 || d>31 == 1)
					{
						printf("日期错误");
					}
					else
					{
						printf("输入的日期是：%d年%d月%d日", y, m, d);
					}
				}
				else
				{
					if (d < 1 || d>30 == 1)
					{
						printf("日期错误");
					}
					else
					{
						printf("输入的日期是：%d年%d月%d日", y, m, d);
					}
				}
			}
		}
return 0;
}
