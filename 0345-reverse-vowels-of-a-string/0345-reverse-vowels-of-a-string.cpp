class Solution {
public:
 bool isvowel(char ch){
    if((ch=='a'||ch=='o'||ch=='i'||ch=='e'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')){
        return true;
    }
    return false;
 }
    string reverseVowels(string s) {
       int start=0;
       int end=s.length()-1;
       for(int i=0;i<s.length();i++){
          while(start<end){
        if(!isvowel(s[start])){
            start++;
        }
        else if(!isvowel(s[end])){
            end--;
        }
        else{
            swap(s[start],s[end]);
             start++;
       end--;
        }
        
       } 
      
       }
      return s;
    }
   
};