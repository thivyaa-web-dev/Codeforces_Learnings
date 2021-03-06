/******************************************************************************
Imagine that you have a twin brother or sister. Having another person that looks exactly like you seems very unusual. It's hard to say if having something of an alter ego is good or bad. And if you do have a twin, then you very well know what it's like.

Now let's imagine a typical morning in your family. You haven't woken up yet, and Mom is already going to work. She has been so hasty that she has nearly forgotten to leave the two of her darling children some money to buy lunches in the school cafeteria. She fished in the purse and found some number of coins, or to be exact, n coins of arbitrary values a1,b 	a2,b 	...,b 	an. But as Mom was running out of time, she didn't split the coins for you two. So she scribbled a note asking you to split the money equally.

As you woke up, you found Mom's coins and read her note. "But why split the money equally?" b  you thought. After all, your twin is sleeping and he won't know anything. So you decided to act like that: pick for yourself some subset of coins so that the sum of values of your coins is strictly larger than the sum of values of the remaining coins that your twin will have. However, you correctly thought that if you take too many coins, the twin will suspect the deception. So, you've decided to stick to the following strategy to avoid suspicions: you take the minimum number of coins, whose sum of values is strictly more than the sum of values of the remaining coins. On this basis, determine what minimum number of coins you need to take to divide them in the described manner.

Input
The first line contains integer n (1b 	b	$b 	nb 	b	$b 	100) b  the number of coins. The second line contains a sequence of n integers a1, a2, ..., an (1b 	b	$b 	aib 	b	$b 	100) b  the coins' values. All numbers are separated with spaces.

Output
In the single line print the single number b  the minimum needed number of coins.

*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

int
main ()
{
  int n;
  cin >> n;
  int arr[n];
  int sum = 0;
  int counter = 0;
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      sum += arr[i];
    }
  sum = sum / 2;
  sort (arr, arr + n);
  int sum2 = 0;
  for (int i = n - 1; i >= 0; i--)
    {
      sum2 += arr[i];
      ++counter;
      if (sum2 > sum)
	{
	  break;
	}


    }

  cout << counter;

  return 0;
}

/******************************************************************************
It's obvious that you should take the most valueable coins. so sort values in non-decreasing order, then take coins from the most valueable to the least, until you get strictly more than half of total value.

Time complexity depends on the sorting algorithm you use. O(n^2) is also acceptable, but if you use bogosort which runs in O(n!)...

*******************************************************************************/
