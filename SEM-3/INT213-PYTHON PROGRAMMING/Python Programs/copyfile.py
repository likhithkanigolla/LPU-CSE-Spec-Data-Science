def main():
    f=open('file2.txt','r')
    g=open('file1.txt','w')
    count=0
    chars=0
    for line in f:
        count+=1
        chars+=len(line)
        g.write(line)
    
    print(count,chars)
    f.close()
    g.close()

main()
    
