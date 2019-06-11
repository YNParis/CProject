#include <stdio.h>


/*
在一个长度为10的整型数组里面，保存了班级10个学生的考试成绩。
要求编写5个函数，分别实现计算考试的总分，最高分，最低分，平均分和考试成绩降序排序。
*/

//声明函数 
void initArr();

//总分 
int getSum(int arr[]){
	int sum=0,i;
	for(i=0;i<10;i++){
		sum+=arr[i];
	}
	return sum;
}

//最低分 
int getMin(int arr[]){
	int min=arr[0],i;
	for(i=0;i<10;i++){
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	return min;
}

//最高分 
int getMax(int arr[]){
	int max=arr[0],i;
	for(i=0;i<10;i++){
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	return max;
}

//平均分 
float getAver(int arr[]){
	float aver;
	aver=getSum(arr)/10.0;
	return aver;
}

//试成绩降序排序
void order(int arr[]){
	int i,j,temp;
	for(i=0;i<10;i++){
		for(j=0;j<10-i-1;j++)
		{
			if(arr[j]<arr[j+1])
		{
			temp=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
		}
		} 
		
	}
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main()
{
	int score[10]={67,98,75,63,82,79,81,91,66,84};
	printf("排序：\n");
	order(score);
	printf("最高分：%d\n",getMax(score));
	printf("最低分：%d\n",getMin(score));
	printf("总分：%d\n",getSum(score));
	printf("平均分：%f\n",getAver(score));
	return 0;
} 

void initArr(){
	//定义多维数组 
	int arr1[][2]={{10,20},{30,40}};
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",arr1[i][j]);
		}	
		printf("\n");
	}
	int arr2[2][2];
	arr2[0][0]=10;
	arr2[0][1]=20;
	arr2[1][0]=30;
	arr2[1][1]=40;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",arr2[i][j]);
		}	
		printf("\n");
	}
} 




