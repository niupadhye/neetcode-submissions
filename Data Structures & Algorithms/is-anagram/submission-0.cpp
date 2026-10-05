class Solution {
public:
    bool isAnagram(string s, string t) {
        int ssize = s.size();
        int tsize = t.size();
        if(ssize != tsize)
            return false;

        map<char,int> countS;
        map<char,int> countT;

        for(int i=0; i<ssize; i++){
            countS[s[i]]++;
            countT[t[i]]++;
        }

        return countS == countT;
    }
};
