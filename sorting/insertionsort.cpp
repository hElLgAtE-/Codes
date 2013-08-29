/*
insertionsort mplementation
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

void insertionsort(int arr[] , int N)
{
	int temp,i,j;
	for( i=2 ; i<=N-1 ; i++)
	{
		temp=arr[i];
		j=i;
		while(arr[j-1]>temp && j>=1)
		{
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=temp;
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
	insertionsort(arr,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
