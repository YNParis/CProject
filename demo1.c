//������ϰ

#include <stdio.h>

int printTower();
int printTable();
int useOfGoto();
int printPrimeNumber();
int countToday(int year,int month,int day);
int countPeach(int n);
int detectAge(int n);
float taxiCost(int time,int distance); 

//int main() int main(void)���ǿ��Ե� 
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
    LOG:printf("����forѭ����....\n");  //��ӡ��3֮�󣬽���ѭ�� 
	return 0;
}

int printTower(){
	//��ӡ*��ɵĽ����� 
 	int i, j, k;
    for(i=1; i<5; i++)
    {
    	
    	//4�� 
        for(j=i; j<4;j++)  
        {
            printf(" ");    //����ո�
        }
        /* �۲�ÿ��*�ŵ����� */
        for( k=0;  k<i*2-1;k++ ) 
        {
            printf("*");   //ÿ�������*��
        }
        printf("\n");     //ÿ��ѭ������
    }
	return 0;
} 

int printTable()
{
	//��ӡ99�˷��� 
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
	//��50���ڵ�ȫ������
	int m, n;
    for(m=2; m<=50; m++)
    {
		for(n=2; n<m; n++)
        {
            if(m%n==0)       //ʲô������������ǰѭ��
              break;                 //����Ӧ���˳���ǰѭ����
		}	
        if(m == n)   //nѭ�����������m=n�Ļ������m
            printf("%d  ", m);
	}
	printf("\n");
	return 0;
}

int countToday(int year,int month,int day){
	/* ������Ҫ��������� */
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
    printf("�����Ǳ����еĵ�%d��",result);
    return 0;
}

int countPeach(int n ){
	/*
	���ӵ�һ��ժ��N�����ӣ���ʱ�ͳ���һ�룬������񫣬���ֶ����һ����
	�ڶ����ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ����
	�Ժ�ÿ�춼��ǰһ��ʣ�µ�һ����һ����
	����10������Ե�ʱ���ʣһ��������,�ʵ�һ�칲ժ�������ٸ����ӣ�
	�������ӡÿ����ʣ��������*/
	int num;    //������ʣ������
    if(n==10)
    {
          return 1;//�ݹ��������        
    } 
    else
    {
        num = (countPeach(n+1)+1)*2;   //�����ǲ�Ӧ���õݹ��أ�
        printf("��%d����ʣ����%d��\n", n, num); //��������ʣ���Ӹ���
    }
    return num;
	
}

int detectAge(int n){
	//������˿�ʼ��ÿһ���˶���ǰһ���˴�2�꣬��һ����10�꣬�ʵ�5���˼��� 
	int age;
	if(n==1){
		age=10;
	}else{
		age=detectAge(n-1)+2;
	}
	return age;
}

/*
�����г��⳵�򳵼Ʒѹ������£�

1. ÿ���ﵥ�ۼƷ�2.3Ԫ

2. �𲽼�13Ԫ(����3����)

3. ����23��(��)�������賿5��(����)�򳵣�ÿ���ﵥ�ۼƷѼ���20%��

4. ÿ�γ˳�����1ԪǮ��ȼ�͸���˰��

С��ÿ�����°඼Ҫ�򳵣���˾�ͼҵľ���Ϊ12��������ϰ�ʱ��Ϊ9�㣬�����°�ʱ��Ϊ6�㡣

���дһ��С�������С��ÿ��򳵵��ܷ��á�*/
float taxiCost(int hour,int distance){
	float cost;
	if(distance<=3){
		cost=13;
	}else{
		cost=13+((hour>5&&hour<=23) ? 2.3:(2.3*1.2))*(distance-3);
	}
	return cost;
} 
