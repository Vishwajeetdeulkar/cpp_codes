int Solution::strStr(const string haystack, const string needle) {
    if(needle =="" || haystack=="") return -1;
    int m = haystack.length(),n=needle.length();
    if(m < n) return -1;

    for(int i=0;i<=m-n;i++){
        int j;
        for(j=0;j<n;j++){
            if(haystack[i+j]!=needle[j]) break;
        }
        if(j==n) return i;
    }
    return -1;
}
