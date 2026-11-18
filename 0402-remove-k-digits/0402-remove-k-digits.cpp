class Solution {
public:
    string removeKdigits(string s, int k) {

        //Keep edge cases in mind
        //1. If size of string is equal to k we end up returning all so it need to be zero
        //If we get any leading zeros we need to trim them 
        //Reverse st the end

        stack<char>st;
        if(s.size() == k) return "0";

        for(int i  = 0; i<s.size(); i++){
            while(!st.empty() && k>0 && (st.top() - '0')>(s[i]-'0')){
                st.pop();
                k--;
            }
            st.push(s[i]);
        }
        while(k>0){
            st.pop();
            k--;
        }

        string res ="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }

        //Remove leading zeros
        while(res.size()!=0 && res.back()=='0'){
            res.pop_back();
        }

        reverse(res.begin(), res.end());
        if(res == "") return "0";
        return res;

        
    }
};