#include<stdio.h>
int main()
{
	int f(int num,int array[]);
	int i,a[20],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("%d",f(n,a));
	return 0;
}
int f(int num,int array[])//好像num可以不在这里命名 
{
	int max(int p,int q);
	int b[num+1],i;//得出对num个房子进行抢劫得到最大金额 
	b[0]=0;b[1]=array[0];
	for(i=2;i<=num;i++)//num要取等 
	b[i]=max(b[i-1],b[i-2]+array[i-1]);//注意相对数量关系，不要越界 
	return b[num];
	
}
int max(int p,int q)
{
	return (p>q?p:q);
}
