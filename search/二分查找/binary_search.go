package main

import ozlog "github.com/usthooz/oozlog/go"

func main() {
	number := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
	key := 2
	ozlog.Infof("Input: %v", number)
	ozlog.Infof("Key: %d", key)
	ozlog.Infof("Result Index: %d", BinarySearch(number, key))
}

/*
	BinarySearch 二分查找
	input: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 1
	output: 1 or -1 (if key !exists result=-1)
*/
func BinarySearch(array []int, key int) int {
	low, hight := 0, len(array)-1
	for low <= hight {
		m := (low + hight) >> 1
		if array[m] < key {
			low = m + 1
		} else if array[m] > key {
			hight = m - 1
		} else {
			// 相等
			return m
		}
	}
	return -1
}
