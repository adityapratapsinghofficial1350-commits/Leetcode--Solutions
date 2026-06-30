class Solution {
public:
bool isalpha(char ch){

    if(('a' <= ch && ch <= 'z') || 
       ('A' <= ch && ch <= 'Z')){
        return true;
    }

    return false;
}
    string reverseOnlyLetters(string s) {
        int start=0;
        int end=s.length()-1;
        for(int i=0;i<s.length();i++){
            while(start<end){
                if(!isalpha(s[start])){
                    start++;
                }
                else if(!isalpha(s[end])){
                    end--;
                }else{
                    swap(s[start],s[end]);
                    start++;
                    end--;
                }
            }
        }
        return s;
    }
};