class Solution {
    public int lengthOfLongestSubstring(String s) {
        int ml = 0;
        for (int r = 0, l = 0; r < s.length(); r++) {
            int inS = s.indexOf(s.charAt(r), l);
            if (inS != r) {
                l = inS + 1;
            }

            ml = Math.max(ml, r - l + 1);
        }
        return ml;
    }
}