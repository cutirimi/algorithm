import java.util.*;

class Solution {
    public List<String> solution(String myString) {
        String[] answer = myString.split("x+");
        List<String>result=new ArrayList<>();
        
        for(String s : answer){
            if(!s.isEmpty()){
                result.add(s);
            }
        }
        
        Collections.sort(result);
        
        return result;
    }
}