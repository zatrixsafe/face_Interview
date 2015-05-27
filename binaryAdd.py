#!/usr/bin/env python
# File Name: binaryAdd.py

#do not use '+' to make an adding... a+b

def getAdd(a, b):
    if b == 0:
        return a
    sum = a^b
    carry = (a&b)<<1
    return getAdd(sum, carry)

if __name__ == '__main__':
    print getAdd(10,20)
