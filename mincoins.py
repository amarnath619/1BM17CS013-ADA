import sys

def mincoins(coins,v,m):
    table=[0 for i in range(v+1)]
    table[0]=0
    for i in range(1,v+1):
        table[i]=sys.maxsize

    for i in range(1,v+1):
        for j in range(m):
            if coins[j]<=i:
                sub=table[i-coins[j]]
                if (sub!=sys.maxsize and sub+1<table[i]):
                    table[i]=sub+1
    return table[v]
if __name__=='__main__':
    coins=[int (x) for x in input("enter the available coins").split()]
    m=len(coins)
    v=int (input("enter amount to convert int change"))
    print("minimum coins required is",mincoins(coins,v,m))
          
