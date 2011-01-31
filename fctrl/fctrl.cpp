/*
 * =====================================================================================
 *
 *       Filename:  fctrl.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/31/2011 01:03:21 AM
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
typedef long long llong;

llong num_of_xs (llong num, llong x){
  llong n = 0;
  while (num > 0){
    num = (llong)num/x;
    n += (llong) num;
  }
  return n;
}
llong z(llong num){
  llong twos = num_of_xs(num, 2);
  llong fives = num_of_xs(num,5);
  if (twos < fives) return twos;
  else return fives;
}


  int
main ( int argc, char *argv[] )
{
  llong t,n;
  cin >> t;

  for ( llong i = 0; i < t ; i++ ) {
    cin >> n;
    cout<< z(n)<<endl; 
  }
  return 0;
}				/* ----------  end of function main  ---------- */

