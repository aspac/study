#!/bin/python
import sys

n = int(raw_input().strip())
a = map(int,raw_input().strip().split(' '))

swap = 0

for j in range(n):
	for i in range(n-1):
		if a[i] > a[i+1]:
			curr_a = a[i]
			a[i] = a[i+1]
			a[i+1] = curr_a
			swap+=1

print "Array is sorted in %d swaps." %swap
print "First Element: %d" %a[0]
print "Last Element: %d"  %a[len(a)-1]

