class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> smap;
        unordered_map<int,int> tmap;
        for(char x: s){
            smap[x]++;
        }
        for(char x:t){
            tmap[x]++;
        }

        if(tmap==smap){
            return true;
        }
    return false;
    }
};
