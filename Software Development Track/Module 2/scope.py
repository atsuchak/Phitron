balance = 3000

def buy(item, price):
    global balance

    print(f'Balance before buy {item}:', balance)
    balance = balance - price
    print(f'Balance after buy {item}:', balance)

buy('glasses', 1000)