#array_front9

def array_front9(nums):
  for number in (nums[1:4] if len(nums) > 4 else nums):
    if number == 9:
      return True
  return False


