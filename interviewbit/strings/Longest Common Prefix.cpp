int findminLength(vector<string>& strs){
        int n=strs.size();
        int min = strs[0].length();
        for(int i=1;i<n;i++){
            if(strs[i].length()<min) min = strs[i].length();
        }
        return min;
    }

string Solution::longestCommonPrefix(vector<string> &A) {
    if(A.size()==0) return "";
    if(A.size()==1) return A[0];
    int n = A.size();
    string result;char current;
    int minimumLength = findminLength(A);
    for(int i=0;i<minimumLength;i++){
        current=A[0][i];

        for(int j=1;j<n;j++){
            if(A[j][i]!=current) return result;
        }
        result.push_back(current);
    }
    return result;
}
