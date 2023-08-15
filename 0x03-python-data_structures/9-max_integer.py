#!/usr/bin/python3

def max_integer(my_list=[]):
    biggest_integer = my_list[0]
    if len(my_list) == 0:
        return None

    for num in my_list:
        if num > biggest_integer:
            biggest_integer = num
    return biggest_integer
