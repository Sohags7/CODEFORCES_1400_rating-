#include<bits/stdc++.h>
#define ll  long long 
#define ld  long double 
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define vec vector
#define min_heap priority_queue <ll, vector<ll>, greater<ll> >
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),vine present(container, element)(container.find(element) != container.end())
#define cpresent(container, element)(find(all(container), element) != container.end())
#define gcd(a,b) __gcd(a,b)
#define     max3(a,b,c)     max(a,max(b,c))
#define     max4(a,b,c,d)   max(max3(a,b,c),d)
#define     min3(a,b,c)     min(a,min(b,c))
#define     min4(a,b,c,d)   min(a,min3(b,c,d))
#define er cout<<-1<<endl;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define  mod 1000000007     // 1e9+7
#define pi 3.1415926536
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define fset(n) __builtin_ffs(n)
#define trailzerobit(n) __builtin_ctz(n)
using namespace std;
 void solve()
{
  ll n;
  cin>>n;
  ll a[n+5];

  ll c=0;
  for(int i=1;i<=n;i++)cin>>a[i];
    ll color[n+5]={0};

   ll col=1;
   ll p[]={2,3,5,7,11,13,17,19,23,29,31,37};

    for(int i=0;i<11;i++)
    {
      bool ok=0;
      for(int j=1;j<=n;j++)
      {
      if(color[j]==0 && a[j]%p[i]==0)
        {
          ok=1;
          
          color[j]=col;

        }
      }
      if(ok==1)col++;

    }
   

    
ll mx=0;
for(int i=1;i<=n;i++)
    {
     mx=max(color[i],mx);

    }
    cout<<mx<<endl;


    for(int i=1;i<=n;i++)
    {
      cout<<color[i]<<' ';

    }
    cout<<endl;

   
}
  
int main ()
{
  #ifndef ONLINE_JUDGE
freopen ("input.txt","r", stdin);
freopen ("output.txt","w", stdout);
 
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
 
 
int t;
 
cin>>t;for(int i=1;i<=t;i++) 
solve();
return 0;
 
}
