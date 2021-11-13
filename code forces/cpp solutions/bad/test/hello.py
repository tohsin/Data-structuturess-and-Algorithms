print("hello")
# f = open("hello.in", 'r')
T = int(f.readline())
for _ in range(T):
    x, y = f.readline().split(" ")
    print("sum = %d" % (int(x) + int(y)))