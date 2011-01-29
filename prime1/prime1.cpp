/*
 * =====================================================================================
 *
 *       Filename:  prime1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/28/2011 05:15:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Prasanna Gautam (mn), prasanna.gautam@trincoll.edu
 *        Company:  Trinity College
 *
 * =====================================================================================
 */

#include	<iostream>
#include	<cmath>
#include        <vector>
#include	<cstdlib>
#include	<cstring>
using namespace std;


vector<long> sieve(long n){
  vector<long> primes = vector<long>();
  long prime =2;
  char* marked;
  long i;
  marked = (char *) malloc(n+1);
  memset(marked,0, n+1);
  while (prime*prime <= n ) {
    for (i = prime*prime; i <=n; i += prime){
      marked[i]=1;
    }
    prime++;
  }
  for (i = 2; i <=n; i++){
    if (!marked[i])
      primes.push_back(i);
  }
  return primes;
}

int isPrime(int n){
  if (n==2) return 1;
  if (n%2 ==0) return 0;
  if ((((long)pow(2,n-1))%n)!= 1){
    return 0;
  } else {
    for (int i = 3; i <= (int)sqrt(n); i+=2){
      if ((n % i) == 0){
        return 0;
      }
    }
    return 1;
  }
}

  int
main ( int argc, char *argv[] )
{
  int tests;
  int m,n;
  cin >> tests;
  vector<long> primes= sieve(32001);
  for (int i =0; i < tests; i++){
    cin >> m>>n;
    int temp =n;
    if (m >n){
      n = m;
      m = temp;
    }
    //if (m < 2) m =2;
    char* marked;
    marked = (char*) malloc(n-m+1);
    memset (marked, 0, n-m+1);
    for (int j= 0; j<= (n-m)  ; j++){
      int num = (j+m);
      for (vector<long>::iterator it = primes.begin(); (it!= primes.end()) && ((*it) < sqrt(n)); ++it){
        if (num == *it) {
          break;
        }
        //cout << *it <<endl;
        if ((num%(*it))==0){
          marked[j] =1;
          break;
        }

      }
    }

    for (int j= 0; j<= (n-m); j++){
      if (!marked[j]) cout << j+m<<endl;
    }
    cout<< endl;
  }
  return 0;
}				/* ----------  end of function main  ---------- */

