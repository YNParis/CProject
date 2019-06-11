//基础练习

#include <stdio.h>

int printTower();
int printTable();
int useOfGoto();
int printPrimeNumber();
int countToday(int year,int month,int day);
int countPeach(int n);
int detectAge(int n);
float taxiCost(int time,int distance); 

//int main() int main(void)都是可以的 
int main(){	
printTower(); 
	return 0;
}

int useOfGoto(){
	printTower();
printTable();
	 int sum = 0;
    int i;
    for(i=1; i<=10; i++)
    {
        printf("%d\n", i);
        if(i==3){
            goto LOG;
        }              
    }
    LOG:printf("结束for循环了....\n");  //打印完3之后，结束循环 
	return 0;
}

int printTower(){
	//打印*组成的金字塔 
 	int i, j, k;
    for(i=1; i<5; i++)
    {
    	
    	//4行 
        for(j=i; j<4;j++)  
        {
            printf(" ");    //输出空格
        }
        /* 观察每行*号的数量 */
        for( k=0;  k<i*2-1;k++ ) 
        {
            printf("*");   //每行输出的*号
        }
        printf("\n");     //每次循环换行
    }
	return 0;
} 

int printTable()
{
	//打印99乘法表 
	int i,j,result;
	for(i=9;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%d  ",i,j,i*j);
		}
		printf("\n");
	} 
	return 0;
}

int printPrimeNumber()
{
	//找50以内的全部素数
	int m, n;
    for(m=2; m<=50; m++)
    {
		for(n=2; n<m; n++)
        {
            if(m%n==0)       //什么条件下跳出当前循环
              break;                 //这里应该退出当前循环了
		}	
        if(m == n)   //n循环结束后，如果m=n的话就输出m
            printf("%d  ", m);
	}
	printf("\n");
	return 0;
}

int countToday(int year,int month,int day){
	/* 定义需要计算的日期 */
    int result=0;
    switch(month-1)
    {
    	case 11:
    		result+=30;
		case 10:
    		result+=31;
    	case 9:
    		result+=30;
    	case 8:
    		result+=31;
    	case 7:
    		result+=31;
    	case 6:
    		result+=30;
    	case 5:
    		result+=31;
    	case 4:
    		result+=30;
    	case 3:
    		result+=31;
    	case 2:
			if(year%4==0&&year%100!=0||year%400==0){
				result+=29;
			}else{
				result+=28;
			}  
    	case 1:
    		result+=31; 
    	case 0:
    		result+=day; 				
    		break;
    }
    printf("今天是本年中的第%d天",result);
    return 0;
}

int countPeach(int n ){
	/*
	猴子第一天摘下N个桃子，当时就吃了一半，还不过瘾，就又多吃了一个。
	第二天又将剩下的桃子吃掉一半，又多吃了一个。
	以后每天都吃前一天剩下的一半零一个。
	到第10天在想吃的时候就剩一个桃子了,问第一天共摘下来多少个桃子？
	并反向打印每天所剩桃子数。*/
	int num;    //定义所剩桃子数
    if(n==10)
    {
          return 1;//递归结束条件        
    } 
    else
    {
        num = (countPeach(n+1)+1)*2;   //这里是不应该用递归呢？
        printf("第%d天所剩桃子%d个\n", n, num); //天数，所剩桃子个数
    }
    return num;
	
}

int detectAge(int n){
	//第五个人开始，每一个人都比前一个人大2岁，第一个人10岁，问第5个人几岁 
	int age;
	if(n==1){
		age=10;
	}else{
		age=detectAge(n-1)+2;
	}
	return age;
}

/*
北京市出租车打车计费规则如下：

1. 每公里单价计费2.3元

2. 起步价13元(包含3公里)

3. 晚上23点(含)至次日凌晨5点(不含)打车，每公里单价计费加收20%。

4. 每次乘车加收1元钱的燃油附加税。

小明每天上下班都要打车，公司和家的距离为12公里，上午上班时间为9点，下午下班时间为6点。

请编写一个小程序计算小明每天打车的总费用。*/
float taxiCost(int hour,int distance){
	float cost;
	if(distance<=3){
		cost=13;
	}else{
		cost=13+((hour>5&&hour<=23) ? 2.3:(2.3*1.2))*(distance-3);
	}
	return cost;
} 
