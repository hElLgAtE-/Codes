/*
improved version of bubble sort
hElLgAtE's implementation
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

void impBubblesort(int arr[],int n)
{
	int temp,swapped=1;
	for(int i=0; i<n-1 ; i++)
	{
		swapped=0;
		for(int j=0 ; j<n-i-1 ;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swapped=1;
			}
		
		}
	if(!swapped){break;}
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
	impBubblesort(arr,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
