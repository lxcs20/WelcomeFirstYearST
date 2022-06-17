from random import randrange as rdrange
import numpy as np
import time

lst = [53, 57, 56, 48, 57, 48, 50, 53]

temp = []
for i in lst:
    for j in range(8):
        temp.append(rdrange(10))

temp2 = np.reshape(temp, (8, 8))
for j in range(8):
    temp2[j][j] = chr(lst[j])

time.sleep(60)
print('Phone Number:')
print(temp2)

print('  _ _ _ _ _ _ _ _')
