/*
mergesort implementation
hElLgAtE
*/

#include<iostream>        
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
using namespace std;
 
typedef long long LL;
typedef unsigned long long ULL;
typedef unsigned int UINT;
int gcd( int a, int b ) {  if( !b ) return a;  return gcd( b, a % b ); }

int arr[100006];
int temp[100006];

void merge(int arr[],int temp[] , int left , int mid ,int right)
{
	int i,left_end,size,temp_pos;
	left_end=left;
	int m=mid+1;
	temp_pos=left;
	while((left_end<=mid)&&(m<=right))
	{
		if(arr[left_end]<=arr[m])
		{
			temp[temp_pos++]=arr[left_end];
			left_end++;
		}
		else
		{
			temp[temp_pos++]=arr[m];
			//temp_pos++;
			m++;
		}
	}
	if(left_end>mid){
		for(int k=m;k<=right;k++)
		{
			temp[temp_pos++]=arr[k];
		}
	}
	else
	{
		for(int k=left_end;k<=mid;k++)
		{
			temp[temp_pos++]=arr[k];
		}
	}
	for(i=left;i<=right;i++)
	{
		arr[i]=temp[i];
	}
}

void mergesort(int arr[],int temp[],int left,int right)
{
	if(right>left)
	{
		int mid=(right+left)/2;
		mergesort(arr,temp,left,mid);
		mergesort(arr,temp,mid+1,right);
		merge(arr,temp,left,mid,right);
	}
}


int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	mergesort(arr,temp,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
