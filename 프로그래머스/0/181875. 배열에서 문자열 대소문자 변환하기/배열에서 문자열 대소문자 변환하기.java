import java.util.*;
class Solution {
    public String[] solution(String[] strArr) {
        String[] answer = {};
        List<String> li = new ArrayList<>();
        for(int i=0; i<strArr.length; i++) {
            if(i%2!=0) {
                li.add(strArr[i].toUpperCase());
            } else li.add(strArr[i].toLowerCase());
        }
        answer = new String[li.size()];
        for(int i=0; i<li.size(); i++) {
            answer[i] = li.get(i);
        }
        return answer;
    }
}