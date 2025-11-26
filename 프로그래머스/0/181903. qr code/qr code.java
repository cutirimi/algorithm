class Solution {
    public String solution(int q, int r, String code) {
        int []d=new int[code.length()];
        String answer="";
        
        for(int i=0;i<d.length;i++) {
            d[i]=i%q;
        }
        for(int i=0;i<d.length;i++) {
            if(d[i]==r) {
                answer+=code.charAt(i);
            }
        }
        
        return answer;
    }
}