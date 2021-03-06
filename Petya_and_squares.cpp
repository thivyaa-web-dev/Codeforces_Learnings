/******************************************************************************
Little Petya loves playing with squares. Mum bought him a square 2nb 	Cb 	2n in size. Petya marked a cell inside the square and now he is solving the following task.

The task is to draw a broken line that would go along the grid lines and that would cut the square into two equal parts. The cutting line should not have any common points with the marked cell and the resulting two parts should be equal up to rotation.

Petya wants to determine whether it is possible to cut the square in the required manner given the sizes of the square side and the coordinates of the marked cell. Help him.

Input
The first line contains three space-separated integers 2n, x and y (2b 	b	$b 	2nb 	b	$b 	100,b 	1b 	b	$b 	x,b 	yb 	b	$b 	2n), representing the length of a square's side and the coordinates of the marked cell. It is guaranteed that 2n is even.

The coordinates of the marked cell are represented by a pair of numbers x y, where x represents the number of the row and y represents the number of the column. The rows and columns are numbered by consecutive integers from 1 to 2n. The rows are numbered from top to bottom and the columns are numbered from the left to the right.

Output
If the square is possible to cut, print "YES", otherwise print "NO" (without the quotes).
*******************************************************************************/
#include <stdio.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
using namespace std;

int
main ()
{
  int n, x, y;
  scanf ("%d %d %d", &n, &x, &y);	//it is used to read the data from the input 
  if ((x == n / 2 || x == n / 2 + 1) && (y == n / 2 || y == n / 2 + 1))
    {
      printf ("NO\n");
    }
  else
    {

    }
  printf ("yes\n");
  return 0;
}
