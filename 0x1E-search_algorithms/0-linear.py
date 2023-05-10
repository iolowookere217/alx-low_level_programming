#!/usr/bin/python3

def binary_search(arr, search):
    lower_index = 0
    upper_index = len(arr)-1
    while (lower_index <= upper_index):
        print (arr[lower_index:upper_index+1])
        mid_index = (lower_index + upper_index) // 2
        current =  arr[mid_index]
        if current < search:
            lower_index = mid_index + 1
        elif current > search:
            upper_index = mid_index - 1
        elif current == search:
            return mid_index
    return -1

arr = [0,1,2,3,5,6,4,5,4,4,5,6]
print(arr)

search = int(input("enter a value to search: "))

print("Answer: {}".format(binary_search(arr, search)))

