#define MOD 1000000007

int findSmallestString(string A)
{
    int n = A.length();
    vector<int> lps(n + 1, 0);
    int index = 0, i = 1;
    
    while(i < n)
    {
        if(A[index] == A[i])
        {
            lps[i] = index + 1;
            index++;
            i++;
        } else
        {
            if(index != 0)
            {
                index = lps[index - 1];
            } else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    
    int t1 = lps[n - 1];
    int t2 = n - t1;
    
    if(t1 < t2 || (t1 % t2 != 0)) return n;
    
    return t2;
}

int Solution::solve(vector<string> &A) {
    int n = A.size();
    vector<int> v(n);
    
    for(int i = 0; i < n; i++)
    {
        long long len = findSmallestString(A[i]);
        long long k = 1;
        while(1)
        {
            long long rotates = (k * (k + 1)) / 2;
            if(rotates % len == 0)
            {
                v[i] = k;
                break;
            }
            k++;
        }
    }
    
    long long ans = 1ll;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n && v[i] != 1; j++)
        {
            v[j] = v[j] / __gcd(v[i], v[j]);
        }
        
        ans = ((ans % MOD) * (v[i] % MOD)) % MOD;
    }
    
    return ans;
}