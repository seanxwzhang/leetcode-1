# 406. Queue Reconstruction by Height

## 分类
* 排序

## 解法
首先对输入的数组排序，以`h`作为主要索引，从大到小，再以`k`作为次要索引，从小到大。排序完成以后，遍历数组，把每个元素以`k`作为下标插入到新的一个数组里。这么做的思想是，从`h`最大的开始插入，相同的`h`就按照`k`的顺序插入，这样能保证相同`h`的元素满足`k`的条件。遍历过程中`h`逐渐减小，新插入的元素总是小于或等于新数组中现有的元素的，这样不会破坏已有的数据的`k`的关系。

* 时间复杂度：`O(n)`
* 空间复杂度：`O(1)`

## 边界条件
无

## 备注
无

## 参考文献
无