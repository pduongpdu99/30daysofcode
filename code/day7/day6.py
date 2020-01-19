# Enter your code here. Read input from STDIN. Print output to STDOUT
line = int(input())
for i in range(0,line):
    st,f,l = input(),"",""
    j = 0
    while j < len(st):
        f+= st[j]
        j+=2

    j = 1
    while j < len(st):
        l+= st[j]
        j+=2

    print(f + " " + l)