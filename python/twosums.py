arr1 = [3,9,0,6,4]
target1 = 10

arr2 = [1,3,6,4,5,2]
target2 = 3

def twoSums(arr, target):
    for number in arr:
        complement = target - number
        
        if complement in arr:
            ret = [arr.index(number), arr.index(complement)]
            break
    print(ret)

if __name__ == "__main__":
    twoSums(arr1, target1)
    twoSums(arr2, target2)