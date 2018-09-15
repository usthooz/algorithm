def insertionSort(nums):
    for i in range(len(nums)):
        index = i-1
        temp = nums[i]
        while index>=0 and nums[index]>temp:
            nums[index+1] = nums[index]
            index -= 1
        nums[index+1] = temp
    return nums

nums = [4,1,5,2,3]
print "input:",nums
print "output:",insertionSort(nums)