class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
        return false;
    }
       unordered_map<char, int> s_th;
       unordered_map<char, int>t_th;
    
       for(int i = 0; i< s.length(); i++){
        s_th[s[i]]++;
        t_th[t[i]]++;
       }

    for(int i = 0; i< s.length(); i++){
        if(s_th[t[i]] != t_th[t[i]]){
            return false;
        }
    }
        return true;


    }
};
