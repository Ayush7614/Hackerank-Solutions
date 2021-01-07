if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    sort=(sorted(set(arr))[::-1])
    print(sort[1])
