class Solution {
public:
    
    double dfs(string x, string y, map<string, vector<pair<string,double>>>&p, set<string>&st) {
        if(p.find(x) == p.end() || p.find(y) == p.end())
            return -1.0;
        if(x == y)
            return 1.0;
        st.insert(x);
        
        for(auto i:p[x]) {
            if(st.find(i.first) == st.end()) {
                double a = dfs(i.first,y,p,st);
                if(a != -1.0)
                    return a * i.second;
            }
        }
        return -1.0;
    }
    
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        map<string,vector<pair<string,double>>> f;
        
        for(int i = 0; i < equations.size(); i++) {
            f[equations[i][0]].push_back({equations[i][1], values[i]});
            f[equations[i][1]].push_back({equations[i][0], 1 / values[i]});
        }
        
        vector<double>ans(queries.size()); // 결과 vector 생성
        for(int j = 0; j < queries.size(); j++) {
            set<string>st;
            ans[j] = dfs(queries[j][0], queries[j][1], f, st);
        }
        return ans;
    }
};