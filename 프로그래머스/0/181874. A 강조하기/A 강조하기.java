class Solution {
    public String solution(String myString) {
        String answer = "";
        
        for(int i=0;i<myString.length();i++) {
            char c=myString.charAt(i);
            
            if(c=='a') {
                c='A';
                answer+=String.valueOf(c);
            } else if(c>='A' && c<='Z' && c!='A') {
                answer+=String.valueOf(c).toLowerCase();
            } else {
                answer+=String.valueOf(c);
            }
        }
        
        return answer;
    }
}