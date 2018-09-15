### 插入排序(Insertion sort)
#### 原理
插入排序的基本操作就是将一个数据插入到已经排好序的有序数据中，从而得到一个新的、个数加一的有序数据；简单来说插入排序是基于比较的排序，就是通过比较数组中的元素，看谁大谁小，根据结果来调整元素的位置；插入排序时间复杂度为O(n^2),适用于少量数据的排序。
- 基本思想
每一步将一个待排序的记录，插入到前面已经排好序的有序序列中去，直到插完所有元素为止，其实可以理解为打扑克牌的时候整理牌。

#### 算法步骤
1. 把数据序列(a)分为两部分，第一部分为序列的第一个元素(a1)，此时默认第一个元素是有序序列；第二部分是序列的第二个元素到最后一个元素(a2...an)，此时第二部分是无序序列。
2. 从头到尾扫描未排序序列(a2,an)，并且将元素放到有序序列的适当位置（如果元素与有序序列中的某个元素相等，则将待插入元素插入到相等元素的后面。）

#### 算法演示
![insertion](https://github.com/usthooz/algorithm/blob/master/sort/img/insertion.gif)

#### 实现示例
1. [C语言实现](https://github.com/usthooz/algorithm/blob/master/sort/%E6%8F%92%E5%85%A5%E6%8E%92%E5%BA%8F/insertion.c)  
2. [C++实现](https://github.com/usthooz/algorithm/tree/master/sort/%E6%8F%92%E5%85%A5%E6%8E%92%E5%BA%8F/insertion.cpp)  
3. [Golang实现](https://github.com/usthooz/algorithm/tree/master/sort/%E6%8F%92%E5%85%A5%E6%8E%92%E5%BA%8F/insertion.go)  
4. [Java实现](https://github.com/usthooz/algorithm/tree/master/sort/%E6%8F%92%E5%85%A5%E6%8E%92%E5%BA%8F/insertion.java)  
5. [Lua实现](https://github.com/usthooz/algorithm/tree/master/sort/%E6%8F%92%E5%85%A5%E6%8E%92%E5%BA%8F/insertion.lua)  
6. [Python实现](https://github.com/usthooz/algorithm/tree/master/sort/%E6%8F%92%E5%85%A5%E6%8E%92%E5%BA%8F/insertion.py)  