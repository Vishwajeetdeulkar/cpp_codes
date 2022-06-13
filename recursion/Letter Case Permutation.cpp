class Solution {
public:
    void solve(string ip,string op,vector<string>& v){
        if(ip.length()==0){
            v.push_back(op);
            return;
        }
        if(!isalpha(ip[0])){
            char ch=ip[0];
            solve(ip.substr(1),op+ch,v);
            return;
        }
        else{
            char ch1=tolower(ip[0]);
            char ch2=toupper(ip[0]);
            solve(ip.substr(1),op+ch1,v);
            solve(ip.substr(1),op+ch2,v);
            return;
        }
        
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string op="";
        solve(s,op,ans);
        return ans;
    }
};