//Bismillah Hir Rehmanir Rahim
//Allah knows best
#pragma GCC optimize("Ofast")
#pragma  GCC optimize ("O3")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

#define   ll        long long
#define   lli       long long int
#define   ld        long double
#define   PI        2*acos(0.0)
#define   pb        push_back
#define   ppb       pop_back
#define   pf        push_front
#define   ppf       pop_front
#define   inf       1e18
#define   ff        first
#define   ss        second
#define   mp        make_pair
#define   vi        vector<int>
#define   si        set<int>
#define   ii        pair<int,int>
#define   all(v)    (v).begin(),(v).end()
#define   rall(v)   (v).begin(),(v).end(),greater<ll>()
#define   rall1(v)  (v).rbegin(),(v).rend()
#define   uniq(v)   (v).erase(unique(all(v)),(v).end())
#define   read(v)   for(auto &it:v) cin>>it
#define   write(v)  for(auto &it:v) cout<<it<<" "
#define   GCD(a,b)   __gcd(a,b)
#define   nl         "\n"
#define   lb         lower_bound
#define   up         upper_bound
#define   ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>

using namespace __gnu_pbds;
using namespace std;

vector<ll>v;

void seive(ll n)
{
    ll prime[100001];
    memset(prime,0,sizeof(prime));
    //fill(prime,&arr[n],0);//0 to n all value set to 0;
    for(int i=2;i*i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;

            }
        }
    }

    for(int i=2;i<=n;i++){
        v.pb(i);
    }


}

void segment(ll l,ll r)
{
    if(l==1) l++;
    ll mx=r-l+1;
    ll arr[mx];
    memset(arr,0,sizeof(arr));

    for(ll p:v){
        if(p*p<=r){
            int i=(l/p)*p;
            if(i<l) i+=p;
            for(;i<=r;i+=p){
                if(i!=p){
                    arr[i-l]=1;
                }
            }
        }
    }

    for(int i=0;i<mx;i++){
        if(!arr[i]){
            cout<<l+i<<nl;
        }
    }



}

int main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(0),cout.tie(0);

   seive(1e5);//1e5=100000;
   ll r,l; cin>>l>>r;
   segment(l,r);
   
    
   
	return 0;
}