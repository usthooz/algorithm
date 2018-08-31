### 选择排序(Selection sort)
#### 原理
选择排序的原理是每次从元素中选出一个最大或最小的数据存放在全部数据的起始位置，直到全部的元素都排完；选择排序的时间复杂度都是O(n²)，所以适合较小的序列。

#### 算法步骤
1. 首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置  
2. 再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾  
3. 重复第二步，直到所有元素均排序完毕  

#### 算法演示
![selection](https://github.com/usthooz/algorithm/blob/master/sort/img/selection.gif)

#### 实现示例
1. [C语言实现](https://github.com/usthooz/algorithm/tree/master/sort/%E9%80%89%E6%8B%A9%E6%8E%92%E5%BA%8F/section.c)  
2. [C++实现](https://github.com/usthooz/algorithm/tree/master/sort/%E9%80%89%E6%8B%A9%E6%8E%92%E5%BA%8F/section.cpp)  
3. [Golang实现](https://github.com/usthooz/algorithm/tree/master/sort/%E9%80%89%E6%8B%A9%E6%8E%92%E5%BA%8F/section.go)  
4. [Java实现](https://github.com/usthooz/algorithm/tree/master/sort/%E9%80%89%E6%8B%A9%E6%8E%92%E5%BA%8F/section.java)  
5. [Lua实现](https://github.com/usthooz/algorithm/tree/master/sort/%E9%80%89%E6%8B%A9%E6%8E%92%E5%BA%8F/section.lua)  
6. [Python实现](https://github.com/usthooz/algorithm/tree/master/sort/%E9%80%89%E6%8B%A9%E6%8E%92%E5%BA%8F/section.py)  