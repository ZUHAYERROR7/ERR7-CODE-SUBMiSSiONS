#include <bits/stdc++.h>
using namespace std;

//-------------------DEFiNiTiONS HERE-------------------//

#define _E                     ios_base
#define __R                    ::
#define ___R                   sync_with_stdio(0);
#define ____O                  cin.tie(0),
#define _____R                 cout.tie(0);

//------------------------------------------------------//

#define ull                    unsigned long long
#define uin                    unsigned int
#define ll                     long long
#define db                     double

//------------------------------------------------------//

#define MIN                    INT_MIN
#define MAX                    INT_MAX

//------------------------------------------------------//

#define str                    string
#define ins                    insert
#define pb                     push_back
#define pf                     push_front
#define fs                     first
#define sc                     second
#define ft                     front()
#define bk                     back()
#define brk                    break
#define con                    continue

//------------------------------------------------------//

#define gcd(X, Y)              __gcd(X, Y)
#define lb(X, Y)               lower_bound(every(X), Y)
#define ub(X, Y)               upper_bound(every(X), Y)
#define src(X, Y)              binary_search(every(X), Y)

//------------------------------------------------------//

#define en                     endl
#define sz                     size()
#define C(X)                   cout << X
#define CE(X)                  cout << X << en
#define every(X)               X.begin(), X.end()
#define f(X)                   for (int i = 0; i < X; i++)

//------------------------------------------------------//

#define ___TESTCASE            ll t; cin >> t
#define ___TESTCASE_SOLUTiON   while (t--) error()
#define ___SOLUTiON_ONE        error()
#define ___THE_END             return 0

//----------------USER DEFiNED FUNCTiONS----------------//

void error()
{
    int n;
    cin >> n;
    vector<int> v(5);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    int sum = v[4];
    v[4] = 0;
    if (v[1] < v[3])
    {
        sum += v[3];
        v[1] = 0;
        v[3] = 0;
    }
    else
    {
        sum += v[3];
        v[1] = v[1] - v[3];
        v[3] = 0;
    }
    if (v[2] % 2 == 0)
    {
        sum += v[2] / 2;
        v[2] = 0;
    }
    else
    {
        sum += v[2] / 2;
        v[2] = 1;
        sum += v[2];
        if (v[1] >= v[2])
            v[1] = v[1] - 2;
        else
            v[1] = 0;
    }
    sum += ceil(v[1] / 4.0);
    cout << sum;
}

//------------------MAiN FUNCTiON HERE------------------//

int main()
{
    _E
    __R
    ___R
    ____O
    _____R

    ___SOLUTiON_ONE;

    ___THE_END;
}
