def double_fact(x):
    res = 1
    for i in range(x, 0, -2):
        res *= i
    return res

def t(x):
    a = 0
    b = 0
    for k in range(11):
        a += (x**(2*k + 1)) / double_fact(2*k + 1)
        b += (x**(2*k)) / double_fact(2*k)
    return a / b

def res(y):
    a = 7*t(0.25) + 2*t(1 + y)
    b = 6 - t(y**2 - 1)
    return a / b

file = open('test_data.txt')
    
for s in file:
    number, cpp = map(float, s.split())
    py = round(res(number), 5)
    if cpp != py: print(f'Error: {cpp} != {py}')
print('Done')