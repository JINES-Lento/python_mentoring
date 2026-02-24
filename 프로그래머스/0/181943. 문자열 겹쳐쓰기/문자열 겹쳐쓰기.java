class Solution {
    public String solution(String my_string, String overwrite_string, int s) {
        String answer = "";
        StringBuilder sb = new StringBuilder();
        
        for (int i = 0; i < my_string.length(); i++){
            char m_c = my_string.charAt(i);
            
            if (i >= s && (i - s) < overwrite_string.length()){
                sb.append(overwrite_string.charAt(i-s));
                continue;
            }
            
            sb.append(m_c);
        }
        answer = sb.toString();
        return answer;
    }
}