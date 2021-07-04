def fibo_iterative(n):
    if(n == 0):
        return 0
    else:
        fibo_ant = 1
        fibo_act = 1
        for i in range(2, n+1):
            fibo_prox = fibo_act + fibo_ant
            fibo_ant = fibo_act
            fibo_act = fibo_prox
        return fibo_act

for i in range(10):
    print(fibo_iterative(i))