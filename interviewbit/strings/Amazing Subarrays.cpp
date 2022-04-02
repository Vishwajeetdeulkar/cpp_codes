bool isVowel(char ch){
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'
    || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
}

int Solution::solve(string A) {
    int n=A.length();
    const int MOD = 10003;
    if(n==0) return 0;
    if(n==1){
        if(isVowel[A[0]]) return 1;
        else return 0;
    }
    long long int ans=0;
    for(int i=0;i<n;i++){
        if(isVowel(A[i])){
            ans = ( ans + (n-i) )%MOD;
        }
    }
    return ans;

}