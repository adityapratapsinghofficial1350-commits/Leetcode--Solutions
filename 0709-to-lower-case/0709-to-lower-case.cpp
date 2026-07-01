class Solution {
public:
bool tolowercaseone(char ch){
    if(('A'<=ch&&ch<='Z')){
        return true;
    }
    return false;
}
    string toLowerCase(string s) {
       for(int i=0;i<s.length();i++){
        if(tolowercaseone(s[i])){
            s[i]=tolower(s[i]);
        }
       } 
       return s;
    }
};