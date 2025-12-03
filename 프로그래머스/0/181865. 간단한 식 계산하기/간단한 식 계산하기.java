class Solution {
    public int solution(String binomial) {
        String []s=binomial.split(" ");
        int answer=0;
        
        switch(s[1]) {
            case "+":
                answer=Integer.parseInt(s[0])+Integer.parseInt(s[2]);
                break;
            case "-":
                answer=Integer.parseInt(s[0])-Integer.parseInt(s[2]);
                break;
            case "*":
                answer=Integer.parseInt(s[0])*Integer.parseInt(s[2]);
                break;
            default:
                break;
        }
        
        return answer;
    }
}