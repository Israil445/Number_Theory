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

#define N 101
 ll arr[N][N];
 ll I[N][N];
 void Mul(ll a[][N],ll b[][N],ll n)
 {
    ll R[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        R[i][j]=0;
        for(int k=1;k<=n;k++){
            ll x=a[i][k] * b[k][j];
            R[i][j]=(R[i][j] + x);
        }
        }
    } 
    for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
           a[i][j]=R[i][j];
       }
    }

 }

void power(ll arr[][N],ll n,ll p)
{
     for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
           if(i==j){
               I[i][j]=1;
           }
           else{
               I[i][j]=0;
           }   
   }
     }

     while(p){
         if(p&1){
             Mul(I,arr,n);
             p--;
         }
         else{
             Mul(arr,arr,n);
             p/=2;
         }
     }

     for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
       cout<<arr[i][j]<<" ";
       }
       cout<<nl;
     }


}

int main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(0),cout.tie(0);
    
   ll n;cin>>n;//n*n size matrix;
  
   ll p;cin>>p;//p is power;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
           cin>>arr[i][j];
       }
   }
   power(arr,n,p);


	return 0;
}