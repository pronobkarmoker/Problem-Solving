
// Definition for singly-linked list.
public class AddTwoNumbers {
    int val;
    AddTwoNumbers next;

    AddTwoNumbers() {
    }

    AddTwoNumbers(int val) {
        this.val = val;
    }

    AddTwoNumbers(int val, AddTwoNumbers next) {
        this.val = val;
        this.next = next;
    }
}

class Solution {
    public AddTwoNumbers addTwoNumbers(AddTwoNumbers l1, AddTwoNumbers l2) {
        AddTwoNumbers result = new AddTwoNumbers(0);
        AddTwoNumbers ptr = result;

        int carry = 0;

        while (l1 != null || l2 != null) {

            int sum = 0 + carry;

            if (l1 != null) {
                sum += l1.val;
                l1 = l1.next;
            }

            if (l2 != null) {
                sum += l2.val;
                l2 = l2.next;
            }

            carry = sum / 10;
            sum = sum % 10;
            ptr.next = new AddTwoNumbers(sum);
            ptr = ptr.next;
        }

        if (carry == 1)
            ptr.next = new AddTwoNumbers(1);

        return result.next;
    }
}
