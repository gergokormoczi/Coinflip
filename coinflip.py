import random
head = 0
tail = 0
dif = 0
time = int(input("how many flips do you need?: "))
#flipping the coin
for i in range(time):
    ran = random.randint(0,1)
    if ran == 0:
        head += 1
    else:
        tail += 1
if head > tail:
    dif = head - tail
    cond = "head wins"
elif tail > head:
    dif = tail - head
    cond = "tail wins"
else:
    cond = "draw"
print("Number of heads:" + str(head))
print("Number of tails:" + str(tail))
print(cond)
print("difference: " + str(dif))