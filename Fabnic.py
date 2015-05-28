#!/usr/bin/env python
# File Name: Fabnic.py

def F(n):
    x, y = 1, 1
    if n < 0:
        return 
    if n < 3:
        return 1
    for i in range(3, n + 1):
        tmp = x + y
        x, y = tmp, x
    return tmp

if __name__ == '__main__':
    print F(6)
    print F(3)
    print F(-1)

