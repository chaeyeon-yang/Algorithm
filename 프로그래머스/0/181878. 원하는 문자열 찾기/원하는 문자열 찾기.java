class Solution {
    public int solution(String myString, String pat) {
        int answer = 0;
        String tmp1 = myString.toLowerCase();
        String pat1 = pat.toLowerCase();
        if (tmp1.contains(pat1)) answer = 1;
        return answer;
    }
}