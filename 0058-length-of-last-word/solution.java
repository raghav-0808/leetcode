class Solution {
    public int lengthOfLastWord(String s) {
     s=s.strip();
    return s.length()-1-s.lastIndexOf(' ');
    }
}
