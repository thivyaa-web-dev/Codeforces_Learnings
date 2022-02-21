/******************************************************************************
https://codeforces.com/contest/112/problem/A
Little Petya loves presents. His mum bought him two strings of the same size for his birthday.
The strings consist of uppercase and lowercase Latin letters. 
Now Petya wants to compare those two strings lexicographically. 
The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.
*******************************************************************************/
//1. convert it into lowercase letters
//lexicographically means in the dictionary order 

#include <iostream>
#include<algorithm>
using namespace std;
string a, b;
int
main ()
{
  cin >> a >> b;
  for (int i = 0; i < a.size (); i++)
    {
      if (a[i] < 92)
	a[i] += 32;
      if (b[i] < 92)
	b[i] += 32;

    }
  if (a < b)
    cout << -1;
  else if (a > b)
    cout << 1;
  else if (a == b)
    cout << 0;

}
