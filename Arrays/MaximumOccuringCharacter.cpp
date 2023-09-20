class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i]))
            {
                ans.push_back(tolower(s[i]));  
            }
        }
        
        
        int start=0,end=ans.size()-1;
        cout<<ans;
        
        while(start<=end)
        {
            if(ans[start]!=ans[end])
            {
                return false;
            }else{
                start++;
                end--;
            }
        }
        return true;
        
        
    }
};  

//Using map 

char getMaxOccuringChar(string s)
{
        map<char,int> m;
        for(int i=0;i<s.length();i++)
            m[s[i]]++;
        int max_ele=0;
        char c;
        for(auto i=m.begin();i!=m.end();i++)
            if(max_ele < i->second){
                max_ele = i->second;
                c = i->first;
        }
        return c;
}
