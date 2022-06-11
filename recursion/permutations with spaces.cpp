void solve(string ip,string op,vector<string> &vc){
    if(ip.length()==0){
        vc.push_back(op);
        return;
    }
    
    char c1 = ip[0];
    solve(ip.substr(1),op+" "+c1,vc);
    solve(ip.substr(1),op+c1,vc);
}
    vector<string> permutation(string s){
        // Code Here
        vector<string> vc;
        string op="";
        op.push_back(s[0]);
        s.erase(s.begin()+0);
        solve(s,op,vc);
        return vc;
    }