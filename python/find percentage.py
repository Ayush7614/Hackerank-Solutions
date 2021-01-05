if __name__ == '__main__':
    n = int(input())
    # dictionary to store the marks, key = name, value = list of scores
    student_marks = {}
    # read in all the records and store in the dictionary
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    # query_name is the key value to retrieve
    query_name = input()
print('{0:.2f}'.format(sum(student_marks[query_name])/len(student_marks[query_name])))