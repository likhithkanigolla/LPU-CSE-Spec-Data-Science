def main():
    f=open('file2.txt','w')
    f.write('Bharat\n')
    f.write('Karnani\n')
    f.close()
def read():
    f=open('file2.txt','r')
    print(f.read())
    f.close()
main()
read()

