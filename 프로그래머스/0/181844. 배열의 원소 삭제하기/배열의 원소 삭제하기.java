import java.util.*;

class Solution {
    public int[] solution(int[] arr, int[] delete_list) {
        int[] answer = new int[100];
        List<Integer> tmp = new ArrayList<>();
        for(int i: delete_list) {
            for(int j=0; j<arr.length; j++) {
                if (i == arr[j]) {
                    tmp.add(i);
                    break;
                }
            }
        }
        // for(int i:tmp) {
        //     System.out.println(i+" ");
        // }
        int k=0;
        for(int i=0; i<arr.length; i++) {
            boolean flag = true;
            for(int j=0; j<tmp.size(); j++) {
                if(arr[i] == tmp.get(j)) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                answer[k] = arr[i];
                k++;
            }
        }
        return Arrays.copyOf(answer, k); // 필요한 만큼만 배열 복사
    }
}