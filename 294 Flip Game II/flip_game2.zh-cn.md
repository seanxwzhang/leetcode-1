# 294. Flip Game II

## 分类
* 哈希表
* 回溯

## 解法
用深度优先搜索配合剪枝。搜索所有连续两个加号的位置，然后试图把它们改为减号，然后递归地搜索。如果在某一次递归中发现字符串里已经没有连续的两个加号了，那么就返回`false`。上层函数接收到返回值为`false`时，即可返回`true`。因为下一步对手败了，那么就意味着处在这一步的玩家胜了。再往上层，如果下层返回了`true`那么说明对手可以取胜，那么就意味处在这一步的玩家当前的操作会导致自己失败，所以要尝试另一种不同的走法（即更改加号的位置）。如果全都尝试过以后仍然没有取胜的方法，那么就说明这一步一定会失败。

* 时间复杂度：?
* 空间复杂度：?

## 边界条件
输入小于两个字符的时候都是失败的。

## 备注
回溯过程中，会出现之前搜索过的情况，所以可以用哈希表把中间结果保存下来，以便后续可以查询，以改善时间复杂度。

## 参考文献
无