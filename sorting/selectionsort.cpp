/*
Selection sort
hElLgAtE's implementation

*/#include<iostream>        
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

void selectionsort(int arr[],int n)
{
	int min,temp,i,j;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
}

int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0 ; i<N  ; i++)
	{
		scanf("%d",&arr[i]);
	}
	selectionsort(arr,N);
	for(int i=0 ; i<N ; i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}
