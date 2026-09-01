def common_member(a, b): 
  a_set = set(a) 
  b_set = set(b) 
  if (a_set & b_set): 
    return True 
  else: 
    return False

a = [1, 2, 3, 4, 5] 
b = [5, 6, 7, 8, 9] 
print(common_member(a, b))