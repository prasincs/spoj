/*
 * =====================================================================================
 *
 *       Filename:  palin.cpp
 *
 *    Description:  Palindrome problem
 *
 *        Version:  1.0
 *        Created:  01/29/2011 03:26:34 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Prasanna Gautam (mn), prasanna.gautam@trincoll.edu
 *        Company:  Trinity College
 *
 * =====================================================================================
 */

#include	<iostream>
#include	<algorithm>
using namespace std;
  bool
isPalindrome (int n  )
{
  int k = n;
  int i = 0;
  int u = 0;
  while (k > 0){
    i = k % 10;
    k = (int) k/10;
    u = u* 10+i;
  }
  return (u==n);
}		/* -----  end of function isPalindrome  ----- */

/*bool isPalin(string s){
  return (reverse(s.begin(), s.end()) == s);
}*/

  int
main ( int argc, char *argv[] )
{
  int t,n;
  cin >> t;
  string s;
  for ( int i = 0; i < t ;i++ ) {
    cin >> n;
    bool done = false;
    while (!done){
      n++; 
      done = isPalindrome(n);
    }
    cout << n << endl;
    //cout << isPalindrome(n)<<endl;
  }
  return 0;
}				/* ----------  end of function main  ---------- */
