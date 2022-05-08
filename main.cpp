#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1032;

/*
Input: queries = ["FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"],
pattern = "FB"
Output: [true,false,true,true,false]
Explanation:
"FooBar" can be generated like this "F" + "oo" + "B" + "ar".
"FootBall" can be generated like this "F" + "oot" + "B" + "all".
"FrameBuffer" can be generated like this "F" + "rame" + "B" + "uffer".
*/

tuple<vector<string>, string, vector<bool>>
testFixture1()
{
  auto queries = vector<string>{"FooBar", "FooBarTest",
                                "FootBall", "FrameBuffer", "ForceFeedBack"};
  auto output = vector<bool>{true, false, true, true, false};
  return make_tuple(queries, "FB", output);
}

/*
Input: queries = ["FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"], pattern = "FoBa"
Output: [true,false,true,false,false]
Explanation:
"FooBar" can be generated like this "Fo" + "o" + "Ba" + "r".
"FootBall" can be generated like this "Fo" + "ot" + "Ba" + "ll".
*/

tuple<vector<string>, string, vector<bool>>
testFixture2()
{
  auto queries = vector<string>{"FooBar", "FooBarTest", "FootBall", "FrameBuffer", "ForceFeedBack"};
  auto output = vector<bool>{true, false, true, false, false};
  return make_tuple(queries, "FoBa", output);
}

/*
Input: queries = ["FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"], pattern = "FoBaT"
Output: [false,true,false,false,false]
Explanation:
"FooBarTest" can be generated like this "Fo" + "o" + "Ba" + "r" + "T" + "est".
*/

tuple<vector<string>, string, vector<bool>>
testFixture3()
{
  auto queries = vector<string>{"FooBar", "FooBarTest", "FootBall", "FrameBuffer", "ForceFeedBack"};
  auto output = vector<bool>{false, true, false, false, false};
  return make_tuple(queries, "FoBaT", output);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << Util::toString(get<2>(f)) << endl;
  Solution sol;
  cout << Util::toString(sol.match(get<0>(f), get<1>(f))) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Expect to see: " << Util::toString(get<2>(f)) << endl;
  Solution sol;
  cout << Util::toString(sol.match(get<0>(f), get<1>(f))) << endl;
}
void test3()
{
  auto f = testFixture3();
  cout << "Expect to see: " << Util::toString(get<2>(f)) << endl;
  Solution sol;
  cout << Util::toString(sol.match(get<0>(f), get<1>(f))) << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}