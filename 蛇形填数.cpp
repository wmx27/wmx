#include<stdio.h>
#include<string.h>
int arr[20][20];//��Χ����һ���ϴ�Ķ�ά���飨�����Ƚϴ������ݴ��ʣ� Ϊ������������ 
int main()
{
	int n,x,y,tot=0;//���ý׳��� 
	scanf("%d",&n); 
	memset(arr,0,sizeof(arr));//Ϊ�����ά���� 
	tot=arr[x=0][y=n-1]=1;//���ÿ�ͷ 
	
	while(tot<n*n)//ѭ��  ��һ���ı� 
	{
		while(x+1<n&&!arr[x+1][y])arr[++x][y]=++tot;//******�Ƚ����ж�****** x+1Ϊ��Ϊ�߽� Ȼ���ж�x+1��λ���ǲ����������ˣ�
		//���û��������ôΪ���λ�ø�ֵ��Ȼ���ƶ��ж���һ��λ�ã�ֱ������߽缴n-1 
		while(y-1>=0&&!arr[x][y-1])arr[x][--y]=++tot;
		while(x-1>=0&&!arr[x-1][y])arr[--x][y]=++tot;
		while(y+1<n&&!arr[x][y+1])arr[x][++y]=++tot; 
	
    }
	
	
	for(x=0;x<n;x++)//����ö�ά���� 
	{
	  for(y=0;y<n;y++)
	    {
	      printf("%3d",arr[x][y]);
        }
	  printf("\n");
    }
return 0;
}
