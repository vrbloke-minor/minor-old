#array_count9

def array_count9(nums):
    counter = 0
    for number in nums:
        counter += number == 9
    return counter


