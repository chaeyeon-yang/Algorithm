class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        int now=1;
        if(num_list.length >= 11) {
            for(int j: num_list) answer+=j;
        } else {
            for(int j: num_list) now*=j;
            answer = now;
        }
        return answer;
    }
}