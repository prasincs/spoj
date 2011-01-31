/*
 * =====================================================================================
 *
 *       Filename:  toandfro.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/31/2011 01:33:29 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Prasanna Gautam (mn), prasanna.gautam@trincoll.edu
 *        Company:  Trinity College
 *
 * =====================================================================================
 */

#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>


  int
main ( int argc, char *argv[] )
{
  char* c;
  c = (char*) malloc(200);
  int n;
  scanf("%d\n",&n);
  char* c2;
  c2 = (char *) malloc(200);
  while (n!= 0){
    scanf("%s",c);
    //printf("%s\n",c);
    int len = strlen(c),k;
    char* start;
    char* end;
    char tmp;
    for (k = 0; k<len/n; k++){
      if ((k+1)%2 ==0){
        start = c+k*n;
        end = c+n*(k+1)-1;
        //printf("%c %c\n",*start,*end);
        while(start<=end){
          tmp = *start;
          *start = *end;
          *end = tmp;
          start++; end--;
        }
      }
    }
    int i,j;
    /*for (j = 0; j < len/n; j++){
      for (i = 0; i < n ; i++){
        printf ("%c ", *(c+j*n+i));
      }
      printf("\n");
    }*/

    for (i = 0; i < n; i++){
      for (j = i; j < len; j+=n){
        printf("%c", *(c+j));
      }


    }
    printf("\n");
    scanf("%d", &n);
  }
  return 0;
}				/* ----------  end of function main  ---------- */
