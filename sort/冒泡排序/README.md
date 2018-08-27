### 冒泡排序原理(Bubble Sort)
冒泡排序是一种基本的常用算法，对于小量的数据序列来说速度还是可观的。简单的说冒泡排序可以理解为队伍里面比个子(从第一个逐一去比，遇到小的就进行交换，让小个子到前面，当然可以让大个子到前面，这取决于实际的需求)。

#### 算法步骤
1. 比较相邻的两个元素，进行交换
2. 对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对；这步做完后，最后的元素变成最大的数。
3. 针对所有的元素重复以上的步骤，除了最后一个。
4. 持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。

#### 动图演示
![bubble](https://github.com/usthooz/algorithm/blob/master/sort/img/bubbole.gif)

#### 实现示例
1. [C语言实现](https://github.com/usthooz/algorithm/blob/master/sort/%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F/bubble.c)  
2. [C++实现](https://github.com/usthooz/algorithm/blob/master/sort/%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F/bubble.cpp)  
3. [Golang实现](https://github.com/usthooz/algorithm/blob/master/sort/%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F/bubble.go)  
4. [Java实现](https://github.com/usthooz/algorithm/blob/master/sort/%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F/bubble.java)  
5. [Lua实现](https://github.com/usthooz/algorithm/blob/master/sort/%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F/bubble.lua)  
6. [Python实现](https://github.com/usthooz/algorithm/blob/master/sort/%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F/bubble.py)  
