/*
 * =====================================================================================
 *
 *       Filename:  fctrl2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/30/2011 04:47:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Prasanna Gautam (mn), prasanna.gautam@trincoll.edu
 *        Company:  Trinity College
 *
 * =====================================================================================
 */

#include	<iostream>

using namespace std;
long  fctrl2(long n){
  long  res = 1;
  for (int i = 1; i <=n; i++){
    res*=i;
  }
  return res;
}


  int
main ( int argc, char *argv[] )
{
  int t,n;
  cin >> t;
  for (int i = 0; i < t; i++){
    cin >>n;
    cout << fctrl2(n)<<endl;
  }
  return 0;
}				/* ----------  end of function main  ---------- */
