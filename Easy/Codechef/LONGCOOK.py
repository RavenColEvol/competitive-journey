from sys import stdin, stdout 

def is_leap(year):
	if year % 100 == 0:
		return false
	elif year % 400 == 0 or year % 4 == 0:
		return true


# main program
m0,y0,m1,y1 = map(int, input().split())

k = (y1-y0)//400
count = 101*k
y0 += k*400

