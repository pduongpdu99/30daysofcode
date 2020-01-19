# Enter your code here. Read input from STDIN. Print output to STDOUT

n = int(input())
arr = []
ar  = []
for i in range(0,n):
    temp = input().split(' ')
    arr.append([temp[0],temp[1]])

for i in range(0,n):
    ar.append(input())

for i in arr:
    if i[0] in ar:
        print(i[0]+"="+i[1])
    else:
        print("Not found")
