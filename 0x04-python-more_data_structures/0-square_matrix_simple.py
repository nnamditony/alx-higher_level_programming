#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    newMatrix = matrix.copy()
    for x in range(len(matrix)):
        newMatrix[x] = list(map(lambda x:x**2, matrix[x]))
    return newMatrix
