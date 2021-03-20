#include<stdio.h>
#include<string.h>
int arr[20][20];//外围创建一个较大的二维数组（长宽都比较大，增加容错率） 为程序运行良好 
int main()
{
	int n,x,y,tot=0;//设置阶长宽 
	scanf("%d",&n); 
	memset(arr,0,sizeof(arr));//为清零二维数组 
	tot=arr[x=0][y=n-1]=1;//设置开头 
	
	while(tot<n*n)//循环  走一个四边 
	{
		while(x+1<n&&!arr[x+1][y])arr[++x][y]=++tot;//******先进行判断****** x+1为不为边界 然后判断x+1的位置是不是有数字了，
		//如果没有数字那么为这个位置赋值，然后移动判断下一个位置，直到到达边界即n-1 
		while(y-1>=0&&!arr[x][y-1])arr[x][--y]=++tot;
		while(x-1>=0&&!arr[x-1][y])arr[--x][y]=++tot;
		while(y+1<n&&!arr[x][y+1])arr[x][++y]=++tot; 
	
    }
	
	
	for(x=0;x<n;x++)//输出该二维数组 
	{
	  for(y=0;y<n;y++)
	    {
	      printf("%3d",arr[x][y]);
        }
	  printf("\n");
    }
return 0;
}
