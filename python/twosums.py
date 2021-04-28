arr1 = [3,9,0,6,4]
target1 = 10

arr2 = [1,3,6,4,5,2]
target2 = 3

arr3 = [3,2,4]
target3 = 6

def twoSums(arr, target):
    for number in arr:
        complement = target - number
        
        if complement in arr and (arr.index(number) != arr.index(complement)):
            ret = [arr.index(number), arr.index(complement)]
            break
    print(ret)

if __name__ == "__main__":
    #twoSums(arr1, target1)
    #twoSums(arr2, target2)
    twoSums(arr3, target3)