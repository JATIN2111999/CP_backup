l=[7, 10, 4, 3, 20, 15]
k=4
for i in range(k):
    for j in range(1,len(nums)):
        if(nums[j-1]>nums[j]):
            nums[j-1],nums[j]=nums[j],nums[j-1]
print(nums[-k-1])    