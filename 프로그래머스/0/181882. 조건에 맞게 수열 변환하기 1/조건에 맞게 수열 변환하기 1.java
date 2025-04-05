import java.util.*;
class Solution {
    public int[] solution(int[] arr) {
        int[] answer = {};
        List<Integer> li = new ArrayList<>();
        for(int i=0; i<arr.length; i++) {
            if (arr[i]>=50 && arr[i]%2==0) {
                li.add(arr[i]/2);
            } else if (arr[i]<50 && arr[i]%2!=0) {
                li.add(arr[i]*2);
            } else li.add(arr[i]);
        }
        answer = new int[li.size()];
        for(int i=0; i<li.size(); i++) {
            answer[i] = li.get(i);
        }
        return answer;
    }
}