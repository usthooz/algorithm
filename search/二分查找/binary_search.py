def binarySearch(nums,key):
    low = 0
    hight = len(nums)-1
    while low <=hight:
        m = (low + hight) // 2
        if nums[m]<key:
            low = m + 1
        elif nums[m]>key:
            hight = m-1
        else:
            return m
    return

nums = [1,2,3,4,5,6,7,8,9,10]
key = 2
print "Input:",nums
print "Key:", key
print "Result Index:",binarySearch(nums,key)