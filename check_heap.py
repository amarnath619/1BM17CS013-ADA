def check(arr,n):
    for i in range(int(n/2-1)):
        if arr[i]>=max(arr[2*i],arr[2*i+1]):
            continue
        return False
    return True

n=int(input("Enter the no of elements:"))
print("Enter the elements")
arr=[]

for i in range(n):
    arr.append(int(input()))
print(check(arr,n))
    
    
    
