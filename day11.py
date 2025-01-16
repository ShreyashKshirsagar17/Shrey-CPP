x={'name':'shreyash','age':'21','city':'pune'}
y={'fathername':'shrikant kshirsagar','vay':'59','taluka':'jath'}
# how to calculate the length of dict 
# print(len(x))


# how to read dict with differnt way 
# print(list(x.keys()))         # this is only read keys in the from of list 
# print(x.values())             #this is for get the value 
# print(x['age'])               #this is for get single value
# print(x.items())              #we get keys and values by using item() method 

# how to update dict
# x['name']='shreyash shrikant kshirsagar'
# print(x)

# x['age']=22
# print(x)

# x.update({'city':'sangli'})
# print(x)
# print(y)

# z=x.copy()
# z.update(y)
# print(z)
# print(x)
# print(y)

# how to remove items 

# x.pop('age')
# print(x)

# x.popitem()
# print(x)

# x.clear()
# print(x)

del x['age']
print(x)