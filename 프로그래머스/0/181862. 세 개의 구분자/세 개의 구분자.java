import java.util.*;

class Solution {
    public String[] solution(String myStr) {
        String[] s = myStr.split("[abc]");
        String[] answer = Arrays.stream(s)
                                .filter(a -> !a.isEmpty())
                                .toArray(String[]::new);
        
        if (answer.length == 0) {
            return new String[]{"EMPTY"};
        }
        
        return answer;
    }
}