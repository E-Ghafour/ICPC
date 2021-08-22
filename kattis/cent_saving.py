INT_MAX=1e10
INT_MIN=1e-10
def fill(d):
    sum_price.append(0)
    for _ in range(d):
        sum_price.append(INT_MAX)
def round(x):
    return ((x+5)//10*10)

n,d = map(int , input().split())
price=list(map(int , input().split()))
sum_price=list()
fill(d)
for i in range(n):
    sum_price[0] += price[i]
    for j in range(d):
        #c_price = round(price[j])
        c_price=round(sum_price[j])
        f_price=sum_price[j+1]
        # if c_price<f_price:
        #     break
        if c_price > f_price+price[i] :
            sum_price[j + 1] = f_price + price[i]
            #sum_price[j+1]=c_price
        else:
            sum_price[j + 1] = c_price
            #sum_price[j+1]=f_price+price[i]
    #print(sum_price[j],price[i])
else:
    print(round(sum_price[d]))
