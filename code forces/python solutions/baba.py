t=int(input())
for i in range(t):
    n=int(input())
    q=int(input())
    values=[]
    for i in range(1,n):
	    v=int(input())
	    values.append(v)
	    
    for i in range(1,q):
		a=int(input())
    	b=int(input())
    	solve(values,a,b)

def solve(values,l,r):
	br=values[l:r].copy()
	br.sort()
	if br[0]!=1:
		return 1;
	else:
		for i in range(len(values)-1):
			if br[i]+1 != br[i+1]:
				return br[i]+1
		return br[-1]+1