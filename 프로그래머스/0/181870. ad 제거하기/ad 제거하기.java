import java.util.*;
class Solution {
    public String[] solution(String[] strArr) {
        List<String> li = new ArrayList<>();
        for(int i=0; i<strArr.length; i++) {
            if(strArr[i].contains("ad")) continue;
            li.add(strArr[i]);
        }
        String[] answer = new String[li.size()];
        for(int i=0; i<li.size(); i++) {
            answer[i] = li.get(i);
        }
        return answer;
    }
}