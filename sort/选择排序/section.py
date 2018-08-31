# input: [4, 1, 5, 2, 3]
# output: [1, 2, 3, 4, 5]

def sectionSort(nums):
    for i in range(len(nums)-1):
        min = i
        for j in range(i+1,len(nums)):
            if nums[j] < nums[min]:
                min = j
        nums[i], nums[min] = nums[min], nums[i]
    return nums

nums = [4,1,5,2,3]
print "input:",nums
print "output:",sectionSort(nums)