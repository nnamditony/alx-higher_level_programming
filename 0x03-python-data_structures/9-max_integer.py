#!/usr/bin/python3

def max_integer(my_list=[]):
    if len(my_list) == 0:
        return None

    biggest_integer = my_list[0]
    for num in my_list:
        if num > biggest_integer:
            biggest_integer = num
    return biggest_integer
