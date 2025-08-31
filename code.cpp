class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),-1);
        stack<int> s1;
        for(int i=temperatures.size()-1;i>=0;i--){
            while(!s1.empty() && temperatures[s1.top()]<=temperatures[i]){
                s1.pop();
            }
            if(s1.empty()){
                ans[i] = 0;
            }
            else{
                ans[i] = s1.top()-i;
            }
            s1.push(i);
        }
        return ans;
    }
};
