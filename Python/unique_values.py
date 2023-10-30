my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 2}
unique_values = set()
for value in my_dict.values():
  unique_values.add(value)
print(unique_values)


my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 2}
unique_values = set([value for value in my_dict.values()])
print(unique_values)


my_dict = {'a': [1, 2, 3], 'b': [2, 3, 4], 'c': [3, 4, 5]}
unique_values = set([value for values in my_dict.values() for value in values])
print(unique_values)

import itertools
my_dict = {'a': [1, 2, 3], 'b': [2, 3, 4], 'c': [3, 4, 5]}
unique_values = set(itertools.chain(*my_dict.values()))
print(unique_values)