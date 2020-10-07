class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        priority_queue<pair<int,char>>maxh;
        string ans="";
        for(int i=0;i<s.length();i++){
            mp[s[i]]+=1;
        }
        for(auto i:mp){
            maxh.push({i.second,i.first});
        }
        while(maxh.size()!=0){
            int freq=maxh.top().first;
            char ele=maxh.top().second;
            maxh.pop();
            for(int i=1;i<=freq;i++){
                ans+=ele;
            }
        }
        return ans;
    }
};
