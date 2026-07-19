class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // return s==t;

        if (s.size() != t.size()) return false;
        vector<int> arr(26, 0);
        for(char ch : s){
            arr[ch - 'a'] +=1;
        }
        for(char ch : t){
            arr[ch - 'a'] -=1;
        }

        for(int i=0; i<arr.size(); i++){
            if(arr[i] != 0) return false;
        }
        return true;
    }
};
