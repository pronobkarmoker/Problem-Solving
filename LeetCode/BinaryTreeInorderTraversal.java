import java.util.ArrayList;
import java.util.List;

public class BinaryTreeInorderTraversal {

    // Definition for a binary tree node.
    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode() {
        }

        TreeNode(int val) {
            this.val = val;
        }

        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

    class Solution {
        /**
         * @param root
         * @return
         */
        public List<Integer> inorderTraversal(TreeNode root) {
            final List<Integer> res = new ArrayList();
            dfs(res, root);
            return res;
        }

        void dfs(List<Integer> res, TreeNode tree) {
            if (tree != null) {
                if (tree.left != null) {
                    dfs(res, tree.left);
                }

                res.add(tree.val);
                if (tree.right != null) {
                    dfs(res, tree.right);
                }
            }
        }
    }
}
