#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    for (int T=0; T<t; T++)
    {
        int a, b, n; cin >> n >> a >>b;

        for (int i=0; i<n; i++)
        {
            if (i%a < b) cout << (char)('a'+i%a);
            else cout << 'a';

        }
        cout << endl;

    }
}
