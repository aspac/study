class Calculator:

    def power(self,a, b):
	if a<0 or b<0:
		raise Exception("n and p should be non-negative")
	else:
		ans = a**b
		return ans


myCalculator=Calculator()
T=int(raw_input())
for i in range(T):
    n,p = map(int, raw_input().split())
    try:
        ans=myCalculator.power(n,p)
        print ans
    except Exception,e:
        print e    
