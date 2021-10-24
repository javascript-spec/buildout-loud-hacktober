a=[10,8,2,12,6,5,3,7]
def quick(arr,l,r):
    if l>=r:
        return
    pivot=arr[l]
    left=l+1
    right=r
    
    while(left<right):
        while(left<=right and arr[right]>=pivot):
            right-=1
        while(left<=right and arr[left]<=pivot ):
            left+=1
        
        if(left<=right):
            arr[left],arr[right]=arr[right],arr[left]
    
    arr[l],arr[right]=arr[right],arr[l]
    p=right
    quick(arr,l,p-1)
    quick(arr,p+1,r)
    

quick(a,0,6)

print(a)
