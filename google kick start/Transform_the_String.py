import sys
import string

def main():
    def findshortestLength(query_,parameter):
        a=string.ascii_lowercase.index(query_)
        b=string.ascii_lowercase.index(parameter)
        a_=abs(a-b)
        b_=abs(a_-26)
        return min(a_,b_)
    def compute(value_,key_):
        if value_==key_:
            return 0
        count=0
        for i in range(len(value_)):
            current_lowest=100000000
            for j in range(len(key_)):
                if value_[i]==key_[j]:
                    current_lowest=0
                    break
                check=findshortestLength(key_[j],value_[i])
                current_lowest=min(current_lowest,check)
            count+=current_lowest
        return count
    print(compute("zzy","a"))

if __name__ == "__main__":
    main()