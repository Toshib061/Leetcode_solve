class Solution {
    public String reverseWords(String s) {
        String arr[] = s.split("\\s+");
        String rev = "";
        
        for(int i=arr.length-1; i>=0;i--)
        {
            rev = rev + arr[i]+" " ;
        }
        return rev.trim();
    }
}