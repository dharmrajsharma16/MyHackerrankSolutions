/*
Project Euler #1: Multiples of 3 and 5
 
Natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below NN. 

For Complete problem description visit

https://www.hackerrank.com/contests/projecteuler/challenges/euler001

*/

#include <iostream>

using namespace std;

    long SumDivisbleBy(long a, long n)
    {
        return a*(n/a)*((n/a)+1)/2;
    }


    int main()
    {
         int T; 
         cin>>T;
         for(int i=0; i<T;i++)
         {
              long N;
              cin>>N;
              long result=SumDivisbleBy(3,N-1)+SumDivisbleBy(5,N-1)-SumDivisbleBy(15,N-1);
              cout<<result<<endl;
        }
        return 0;
    }
