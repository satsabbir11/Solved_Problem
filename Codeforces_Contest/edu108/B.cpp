// سْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include<bits/stdc++.h>
using namespace std;

#define pi acos(-1)
#define FastRead ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ull unsigned long long
#define con (f?"YES":"NO")
#define inf 10002
#define MOD 1000000007

int main()
{
    FastRead;
    // #ifndef sabbir
    // freopen("/CP_OJ/input.txt", "r", stdin);
    // freopen("/CP_OJ/output.txt", "w", stdout);
    // #endif

    long long t;
    cin>>t;
    while(t--)
    {
      long long n,m,k;
      cin>>n>>m>>k;
      if(n*m-1!=k) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
}