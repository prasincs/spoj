/*
 * =====================================================================================
 *
 *       Filename:  onp.cpp
 *
 *    Description:  Reverse Polish Notation
 *
 *        Version:  1.0
 *        Created:  01/29/2011 02:34:19 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Prasanna Gautam (mn), prasanna.gautam@trincoll.edu
 *        Company:  Trinity College
 *
 * =====================================================================================
 */


#include	<iostream>
#include	<cstdlib>
#include	<string>
#include	<sstream>
#include	<stack>
#include	<vector>

using namespace std;
  int
main ( int argc, char *argv[] )
{
  int tests;
  stack<char> st;
  cin >> tests;
  string s;
  char c;
  for ( int i = 0; i < tests ; i++ ) {
    cin >> s;
    //cout << s<<endl;

    for ( unsigned int j = 0; j< s.size() ; j++) {
      switch  (s[j]){
      case '(':
        st.push('(');
        break;
      case '+':
        st.push('+');
        break;
      case '-':
        st.push('-');
        break;
      case '*':
        st.push('*');
        break;
      case '/':
        st.push('/');
        break;
      case '^':
        st.push('^');
        break;
      case ')':
        c =')';
        while ((c = st.top()) != '('){
          cout << c;
          st.pop();
        }
        st.pop();
        break;
      default:
        cout << s[j];

      }
    }
    cout << endl;
  }
  return 0;
}				/* ----------  end of function main  ---------- */
