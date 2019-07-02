#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>


// #include "../utils/VectorUtils.hpp"
#include "../utils/TreeUtils.hpp"

#include "../utils/PrintUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto _no_sync_ = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    void inorder(TreeNode* r, int& prev, int& diff) {
        if (!r) return;
        inorder(r->left, prev, diff);
        if (prev >= 0) {
            int d = r->val - prev;
            if (d < diff) diff = d;
        }
        prev = r->val;
        inorder(r->right, prev, diff);
    }
    int getMinimumDifference(TreeNode* root) {
        if(!root) return 0;
        int diff = INT_MAX;
        int parent = -1;
        inorder(root, parent, diff);
        return diff;
    }
};

void test1() {
//    vector<int> v1{1, -1, 3, -1, -1, 2};
//    TreeNode *t1 = new TreeNode(v1, -1);
//
//    cout << "1 ? " << Solution().getMinimumDifference(t1) << endl;
//
//    vector<int> v2{236,104,701,-1,227,-1,911};
//    TreeNode *t2 = new TreeNode(v2, -1);
//    cout << t2 << endl;
//    cout << "9 ? " << Solution().getMinimumDifference(t2) << endl;
//
//    vector<int> v3{1, -1, 7, -1, -1, 2};
//    TreeNode *t3 = new TreeNode(v3, -1);
//    cout << t3 << endl;
//    cout << "1 ? " << Solution().getMinimumDifference(t3) << endl;

    vector<int> v4{10, 5, 15, 3, 9};
    TreeNode *t4 = new TreeNode(v4);
    cout << t4 << endl;
    cout << "1 ? " << Solution().getMinimumDifference(t4) << endl;
//    cout << " ? " << Solution().func() << endl;
//    cout << " ? " << Solution().func() << endl;
}

void test2() {

}

void test3() {

}