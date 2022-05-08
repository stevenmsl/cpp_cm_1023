
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>

using namespace std;
namespace sol1032
{

  class Solution
  {
  private:
    bool _match(const string &q, const string &pattern);

  public:
    vector<bool> match(vector<string> &qs, string pattern);
  
  };
}
#endif