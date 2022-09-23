def checkSubArraySum(arr, n, sum):
    curr_sum = arr[0]
    start = 0
    ans = []
   # Add elements one by one to curr_sum and if the curr_sum exceeds the sum, then remove starting element 
    while i <= n:# If curr_sum exceeds the sum, then remove the starting elements while curr_sum > sum and start < i-1:
       
           curr_sum = curr_sum - arr[start]
           start += 1# If curr_sum becomes equal to sum, then return trueif curr_sum == sum:
           ans.append(start+1)
           ans.append(i)
           return ans
       # Add this element to curr_sumif i < n:
           curr_sum = curr_sum + arr[i]
           i += 1# If no subarray return -1
           ans.append(-1)
           return ans



arr = [15, 2, 4, 8, 9, 5, 10, 23]
n = len(arr)
sum = 21
  
print(checkSubArraySum(arr, n, sum))

