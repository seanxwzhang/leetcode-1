# 3. Longest Substring Without Repeating Characters

## 分类
* 双指针

## 解法
这道题是典型的两个指针类型的问题。用快慢指针划定字串的范围。快指针在前，依次遍历字符，并加入到一个集合中。若遇到集合中已经存在的元素，则说明字串从当前位置出现了重复。此时更新最大长度，并将慢指针所指向的字符从集合中删除，同时向前移动慢指针。快指针到达字符串结尾之际，即可跳出循环，返回结果。

## 复杂度
* 时间复杂度：`O(n)`
* 空间复杂度：`O(n)`

## 边界条件
边界条件

## 备注
无

## 参考文献
无
