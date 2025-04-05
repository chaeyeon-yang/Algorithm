class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        int hol = 0;
        int zzak = 0;
        for(int i=0; i<num_list.length; i++) {
            if(i%2 == 0) hol+=num_list[i];
            else zzak += num_list[i];
        }
        if(hol>zzak) answer = hol;
        else if (hol<zzak) answer = zzak;
        else answer = hol;
        return answer;
    }
}