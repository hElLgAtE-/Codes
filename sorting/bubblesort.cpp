/* 
simple bubble sort 
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

void Bubblesort(int arr[],int N)
{
	int temp;
	for(int i=0; i <N-1 ; i++)
	{
		for( int j=0 ; j < N-i-1 ; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n,k;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
/*	for(int i=0; i<n ; i++)
	{
		printf("%d ",arr[i]);
	}
*/
	Bubblesort(arr,n);
	for(int i=0; i<n ; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
