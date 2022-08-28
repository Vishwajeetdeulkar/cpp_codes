#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;

using namespace __gnu_pbds;

typedef long long ll;


double EPS = 1e-9;
int INF = 1000000005;
long long INFF = 1000000000000000005LL;
double PI = acos(-1);

#define FAST_IO  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define x first
#define y second
#define mp make_pair
#define pb push_back
#define sqr(a) ((a)*(a))
#define all(a) (a).begin(), (a).end()
#define endl '\n'

void init_code()
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

typedef tree<int,null_type,less_equal<int>,rb_tree_tag, tree_order_statistics_node_update> order_set;

int main(){
    time_t start, end;
    time(&start);
    FAST_IO
    init_code();
    
    int n,c,d;
    cin>>n>>c>>d;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    
    order_set s;
    int ans=0;  
    for(int i=0;i<n;i++)
    {
        s.insert(b[i]-a[i]+d-c);
        
        ans+=(s.size()-(s.order_of_key(b[i]-a[i]+d-c)+1));
    }
    cout<<ans<<endl;



    
    time(&end);
    double time_taken = double(end - start);
    #ifndef ONLINE_JUDGE
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    #endif
    return 0;
}