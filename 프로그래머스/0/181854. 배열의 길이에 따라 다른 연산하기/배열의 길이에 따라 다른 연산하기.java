class Solution {
    public int[] solution(int[] arr, int n) {
        int[] answer = new int[arr.length];
        boolean flag = arr.length%2==0? true:false;
        if(flag) {
            for(int i=0; i<arr.length; i++) {
                if(i%2!=0)
                    answer[i] = arr[i] + n;
                else answer[i] = arr[i];
            }
        } else {
            for(int i=0; i<arr.length; i++) {
                if(i%2==0)
                    answer[i] = arr[i] + n;
                else answer[i] = arr[i];
            }
        }
        return answer;
    }
}