## 二分查找(Binary Search)
二分查找也称折半查找（Binary Search）,是一种效率较高的查找方法,但是二分查找要求线性表必须采用顺序存储结构，而且表中元素按关键字有序排列。
- 时间复杂度为O(h)=O(log2n).

### 算法步骤
1. 将序列从中间分成两块.
2. 对比元素与中间数，如果中间数小于元素，那么将中间数之后的数字分为两块，继续对比查找.

### 图解
![binar_search](https://github.com/usthooz/algorithm/blob/master/img/binarysearch.png)

### 
1. [C语言实现](https://github.com/usthooz/algorithm/blob/master/search/%E4%BA%8C%E5%88%86%E6%9F%A5%E6%89%BE/binary_search.c)
2. [C++实现](https://github.com/usthooz/algorithm/blob/master/search/%E4%BA%8C%E5%88%86%E6%9F%A5%E6%89%BE/binary_search.cpp)
3. [Go语言实现](https://github.com/usthooz/algorithm/blob/master/search/%E4%BA%8C%E5%88%86%E6%9F%A5%E6%89%BE/binary_search.go)
4. [Java实现](https://github.com/usthooz/algorithm/blob/master/search/%E4%BA%8C%E5%88%86%E6%9F%A5%E6%89%BE/binary_search.java)
5. [Python实现](https://github.com/usthooz/algorithm/blob/master/search/%E4%BA%8C%E5%88%86%E6%9F%A5%E6%89%BE/binary_search.py)
6. [Lua实现](https://github.com/usthooz/algorithm/blob/master/search/%E4%BA%8C%E5%88%86%E6%9F%A5%E6%89%BE/binary_search.lua)