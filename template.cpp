#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define ll long long
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(x) scanf("%s",&x)
#define all(x) x.begin(), x.end()

const double pi = 2*acos(0.0);

using namespace std;

int binEx(int a, int b){
    if(b == 0) return 1;
    int temp = binEx(a, b/2);
    int result = temp * temp;
    if(b&1) result *= a;
    return result;
}

void show(int a[], int alength)
{
    for (int i = 0; i < alength; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void show(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        printf("%d ", vec[i]);
    }
    printf("\n");
}

void solve(){
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
