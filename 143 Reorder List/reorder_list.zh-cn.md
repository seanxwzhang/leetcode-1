# 143. Reorder List

## 分类
* 链表

## 解法
首先通过快慢指针方法找到中点，然后把中点以后的部分反向。这样就有了两个链表，然后把这两个链表交叉合并即可。

* 时间复杂度：`O(n)`
* 空间复杂度：`O(1)`

## 边界条件
无

## 备注
这道题考了三个技能。首先是用快慢指针的方法找到单链表的中点。其次是把单链表反向。最后是交叉合并两个链表。

## 参考文献
无