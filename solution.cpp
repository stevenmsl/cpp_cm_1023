#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
#include <bitset>
using namespace sol1032;
using namespace std;

/*takeaways
  - two pointers

*/

bool Solution::_match(const string &q, const string &pattern)
{
  int i = 0, m = pattern.size(), n = q.size();

  for (auto j = 0; i < m, j < n; j++)
  {
    if (pattern[i] == q[j])
      i++;
    /* you can not have upper case letters before
      , in-between, or after any chars in the pattern
    */
    else if (isupper(q[j]))
      return false;
  }

  /* we have to make sure we exhaust the pattern */
  return i == m;
}

vector<bool> Solution::match(vector<string> &qs, string pattern)
{
  auto result = vector<bool>();
  for (auto q : qs)
    result.push_back(_match(q, pattern));

  return result;
}