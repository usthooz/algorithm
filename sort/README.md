## Sort 排序算法
本章节内主要为排序相关内容，包括快速排序、冒泡排序、选择排序等。

### 概述
排序算法是日常开发中比较常用的一种基本算法。

#### 分类

1. 根据使用介质  
	排序计算需要使用内存，数据量较小时可以使用内存进行排序，当数据量较大(根据机器配置不一样)时候，使用外部存储进行辅助计算。
	- 内部排序
	使用内部存储进行排序计算。
	- 外部排序
	使用外部存储进行排序，例如使用Redis、Mysql等外部介质进行计算。

2. 根据时间复杂度
    - 非线性时间比较类排序
    通过比较来决定元素间的相对次序，由于其时间复杂度不能突破O(nlogn)，因此称为非线性时间比较类排序。

    - 线性时间非比较类排序
    不通过比较来决定元素间的相对次序，它可以突破基于比较排序的时间下界，以线性时间运行，因此称为线性时间非比较类排序。 
现行排序分类：
![分类](https://github.com/usthooz/algorithm/blob/master/img/sort.png)

### 目录
1. [冒泡排序](https://github.com/usthooz/algorithm/tree/master/sort/%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F)  
2. [快速排序]()
3. [选择排序](https://github.com/usthooz/algorithm/tree/master/sort/%E9%80%89%E6%8B%A9%E6%8E%92%E5%BA%8F)  
4. [插入排序](https://github.com/usthooz/algorithm/tree/master/sort/%E6%8F%92%E5%85%A5%E6%8E%92%E5%BA%8F)
5. [希尔排序]()
6. [归并排序]()
7. [堆排序]()
8. [计数排序]()
9. [桶排序]()
10. [基数排序]()

### 算法复杂度比较
![复杂度](https://github.com/usthooz/algorithm/blob/master/img/on.png)
