/*
 * =====================================================================================
 *
 *       Filename:  testcase-gen.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/31/2011 06:12:14 AM
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
#include	<time.h>
  
  
  int
main ( int argc, char *argv[] )
{
  //char* c = (char*) malloc(200);
  srand(time(NULL));
  int  col = rand()%18+2;
  int row = 5;
  printf("%d\n", col);
  int i,j;
  for (i = 0; i < row; i++){
    for (j = 0; j< col; j++){
      printf("%c",rand()%26+97);
    }
  }
  printf("\n");
  return 0;
}				/* ----------  end of function main  ---------- */
