/*
Project Euler #3: Largest prime factor

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of a given number N?

For complete problem description Visit
https://www.hackerrank.com/contests/projecteuler/challenges/euler003

*/



#include<stdio.h>
#include<math.h>

int main()
{
  int T;
  scanf("%d",&T);
  while(T--){
	long long int N;
	long long int LPF=0;
	long long int i,j;
	int f=0;
	scanf("%lld",&N);
	long long M=N;
	
	for(i=2,j=1;i<=sqrt(N);)
	{
		while(N%i==0)
		{
			N/=i;
			LPF=i;
		}
		if(f==0)
		{
			i=4*j-1;
			f=1;
		}
		else
		{
			i=4*j+1;
			f=0;
			j++;
		}
	}
	
	if((M%N==0)&& N!=1)
		printf("%lld\n",N);
	else
		printf("%lld\n",LPF);
    }
	
}
