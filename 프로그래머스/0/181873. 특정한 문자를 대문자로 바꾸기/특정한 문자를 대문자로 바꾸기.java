class Solution {
    public String solution(String my_string, String alp) {
        String answer = "";
        
        for(int i=0;i<my_string.length();i++) {
            char c=my_string.charAt(i);
            
            if(String.valueOf(c).equals(alp)) {
                answer+=alp.toUpperCase();
            } else {
                answer+=String.valueOf(c);
            }
        }
        
        return answer;
    }
}