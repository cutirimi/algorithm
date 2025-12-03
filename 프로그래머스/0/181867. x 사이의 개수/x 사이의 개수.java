class Solution {
    public int[] solution(String myString) {       
        String[] answer = myString.split("x", -1);
        int[] result = new int[answer.length];
        
        for(int i=0;i<result.length;i++) {
            result[i]=answer[i].length();
        }

        return result;
    }
}