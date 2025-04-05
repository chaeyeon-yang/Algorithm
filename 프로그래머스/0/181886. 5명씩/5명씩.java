import java.util.*;
class Solution {
    public String[] solution(String[] names) {
        String[] answer = {};
        List<String> li = new ArrayList<>();
        for(int i=0; i<names.length; i+=5) {
            li.add(names[i]);
        }
        answer = new String[li.size()];
        for(int i=0; i<li.size(); i++) {
            answer[i] = li.get(i);
        }
        return answer;
    }
}