#include<stdio.h>

void sort(int a[],int len);

int main(void)

{
	//int a [100]={0};
	int i = 0;
	int a[]={1,3,54,353,452,4535,3,5,6,4,2,67,7,98};

	//printf("sizeof(a)=%ld,%ld",sizeof(a),sizeof(a[1]));
	int len = (sizeof(a)/sizeof(int));
	sort(a,len);
	for(i=0;i<(len);i++)
	{
	printf("a = %d\t\n",*(a+i));
	}
	return 0;
}
void sort(int a[],int len)
{	
	
	int i = 0;
	int j = 0;
	int temp = 0;
   for(i=0;i<len-1;i++)
{
	temp = a[i];
	for(j=i;j<len-1;j++)
	{
	if(a[i]<a[j+1])
	{
	a[i] = a[j+1];
	a[j+1] = temp;
	}
	}
}
}



