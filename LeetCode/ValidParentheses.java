
import java.util.Stack;

class ValidParentheses {
    public char getVal(char ch) {
        switch (ch) {
            case ']':
                return '[';
            case '}':
                return '{';
            case ')':
                return '(';
            default:
                return ' ';
        }
    }

    public boolean isValid(String s) {
        String open = "({[";
        Stack<Character> st = new Stack<>();

        for (char ch : s.toCharArray()) {
            if (open.indexOf(ch) != -1) {
                st.push(ch);
            } else {
                if (st.size() == 0)
                    return false;
                char tmp = st.pop();
                if (getVal(ch) != tmp) {
                    return false;
                }
            }

        }
        return st.size() == 0;
    }
}