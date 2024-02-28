class Solution {
public:
    bool isPalindrome(int x) {
        
        long num = x;
        int rem;
        long rev=0;
        if (x < 0) {
            return false;
        }
    
        while(x!=0){
           rem = x%10;
           rev = (rev*10)+rem;
           x=x/10;
        }
    
        if(rev==num){
           return true;
        }
        else{
           return false;
        }
        
    }
};