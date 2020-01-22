#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    mx = []

    for i in range(6-2):
    	for j in range(6-2):
    		mx.append(sum([	arr[i+0][j+0],	arr[i+0][j+1],	arr[i+0][j+2],
    										arr[i+1][j+1],
    						arr[i+2][j+0],	arr[i+2][j+1],	arr[i+2][j+2]]))
    print(mx)
