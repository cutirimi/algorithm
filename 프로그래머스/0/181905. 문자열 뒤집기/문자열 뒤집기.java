class Solution {
    public String solution(String my_string, int s, int e) {
        String t = my_string.substring(s, e+1);
        String rev = new StringBuilder(t).reverse().toString();
        
        return my_string.substring(0, s)+rev+my_string.substring(e+1);
    }
}