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
int f(int num,int array[])//����num���Բ����������� 
{
	int max(int p,int q);
	int b[num+1],i;//�ó���num�����ӽ������ٵõ������ 
	b[0]=0;b[1]=array[0];
	for(i=2;i<=num;i++)//numҪȡ�� 
	b[i]=max(b[i-1],b[i-2]+array[i-1]);//ע�����������ϵ����ҪԽ�� 
	return b[num];
	
}
int max(int p,int q)
{
	return (p>q?p:q);
}
