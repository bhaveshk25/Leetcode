class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>ss;
        stack<char>tt;
        for(char c : s){
            if(c != '#'){
                ss.push(c);
            }else{
                if(!ss.empty())
                    ss.pop();
            }
        }
        for(char c : t){
            if(c != '#'){
                tt.push(c);
            }else{
                if(!tt.empty())
                    tt.pop();
            }
        }
        if(ss.size() != tt.size()){
            return false;
        }
            while(!ss.empty()){
               if(ss.top() != tt.top()){
                return false;
               }
               ss.pop();
               tt.pop(); 
            }
        
        return true;
    }
};