/*
 * =====================================================================================
 *
 *       Filename:  sieve.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/28/2011 06:34:21 PM
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
#include	<vector>
#include	<cstdlib>

using namespace std;
vector<int>* sieve (int upperBound) {
  vector<int>* primes = new vector<int>();
  int upperBoundSquareRoot = (int)sqrt((double)upperBound);
  bool *isComposite = new bool[upperBound + 1];
  memset(isComposite, 0, sizeof(bool) * (upperBound + 1));
  for (int m = 2; m <= upperBoundSquareRoot; m++) {
    if (!isComposite[m]) {
      primes->push_back(m);
      //cout << m << " ";
      for (int k = m * m; k <= upperBound; k += m)
        isComposite[k] = true;
    }
  }
  for (int m = upperBoundSquareRoot; m <= upperBound; m++)
    if (!isComposite[m])
      primes->push_back(m);
      //cout << m << " ";
  delete [] isComposite;
  return primes;
}
  int
main ( int argc, char *argv[] )
{
  bool[] primes = new bool[3201];
  for (int i = 0; i <= 3200; i++) primes = true;
  int prime = 3;
  return 0;
}				/* ----------  end of function main  ---------- */
