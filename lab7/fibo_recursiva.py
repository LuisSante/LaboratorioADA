def recur_fibo(n):
   if n <= 1:
       return n
   else:
       return(recur_fibo(n-1) + recur_fibo(n-2))

n = 2<<29
for i in range(n+1):
    print("fibo ",i,":",recur_fibo(i), end = "\n")
