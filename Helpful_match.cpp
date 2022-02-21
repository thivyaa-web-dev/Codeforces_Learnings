/******************************************************************************
A.Helpful math

*******************************************************************************/
#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  string ans, new_ans;
  cin >> ans;
  for (int i = 0; i < ans.length (); i = i + 2)
    {
      new_ans.push_back (ans[i]);
    }
  sort (new_ans.begin (), new_ans.end ());
  for (int i = 0; i < new_ans.length () - 1; i++)
    {
      cout << new_ans[i] << "+";
    }
  cout << new_ans[new_ans.length () - 1] << endl;

  return 0;
}
