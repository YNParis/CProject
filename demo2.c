#include <stdio.h>


/*
��һ������Ϊ10�������������棬�����˰༶10��ѧ���Ŀ��Գɼ���
Ҫ���д5���������ֱ�ʵ�ּ��㿼�Ե��ܷ֣���߷֣���ͷ֣�ƽ���ֺͿ��Գɼ���������
*/

//�������� 
void initArr();

//�ܷ� 
int getSum(int arr[]){
	int sum=0,i;
	for(i=0;i<10;i++){
		sum+=arr[i];
	}
	return sum;
}

//��ͷ� 
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

//��߷� 
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

//ƽ���� 
float getAver(int arr[]){
	float aver;
	aver=getSum(arr)/10.0;
	return aver;
}

//�Գɼ���������
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
	printf("����\n");
	order(score);
	printf("��߷֣�%d\n",getMax(score));
	printf("��ͷ֣�%d\n",getMin(score));
	printf("�ܷ֣�%d\n",getSum(score));
	printf("ƽ���֣�%f\n",getAver(score));
	return 0;
} 

void initArr(){
	//�����ά���� 
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




