import java.util.*;
class Solution {
    public int[] solution(String myString) {
        List<Integer> li = new ArrayList<>();
        int cnt = 0;
        for(int i=0; i<myString.length(); i++){
            if (myString.charAt(i) == 'x') {
                li.add(cnt);
                cnt = 0;
            }
            else cnt++;
        }
        li.add(cnt);
        int[] answer = new int[li.size()];
        for(int i=0; i<li.size(); i++) {
            answer[i] = li.get(i);
        }
        return answer;
    }
}