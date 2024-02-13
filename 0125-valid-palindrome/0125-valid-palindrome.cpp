class Solution {
private:
    bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }
public:
    bool isPalindrome(string s) {
        string temp = "";
        
        //removing invalid characters
        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
        
        //converting into lower case
        for(int i=0;i<temp.length();i++){
            temp[i]= tolower(temp[i]);
        }
        
        //checking palindrome
        int st=0;
        int e= temp.length()-1;
        
        while(st<=e){
            if(temp[st]!=temp[e]){
                return 0;
            }
            else{
                st++;
                e--;
            }
        }
        return 1;
              
    }
};