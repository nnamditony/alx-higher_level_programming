#!/usr/bin/python3
def number_keys(a_dictionary):
    num = 0
    listkeys = list(a_dictionary.keys())
    for i in listkeys:
        num += 1

    return num

