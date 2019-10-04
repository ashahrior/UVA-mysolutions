# -*- coding: utf-8 -*-
"""
Created on Fri Oct  4 11:29:25 2019

@author: ashah
"""

'''
In N queen problems for N=8 there are 92 solutions. I have precalculated those 92 grids and stored their index position in target
'''

global target

target = [[0, 6, 4, 7, 1, 3, 5, 2],[0, 6, 3, 5, 7, 1, 4, 2],[0, 5, 7, 2, 6, 3, 1, 4],[0, 4, 7, 5, 2, 6, 1, 3],[5, 0, 4, 1, 7, 2, 6, 3],[3, 0, 4, 7, 1, 6, 2, 5],[4, 0, 7, 3, 1, 6, 2, 5],[2, 0, 6, 4, 7, 1, 3, 5],[4, 0, 3, 5, 7, 1, 6, 2],[6, 0, 2, 7, 5, 3, 1, 4],[4, 0, 7, 5, 2, 6, 1, 3],[3, 0, 4, 7, 5, 2, 6, 1],[1, 5, 0, 6, 3, 7, 2, 4],[4, 2, 0, 6, 1, 7, 5, 3],[7, 2, 0, 5, 1, 4, 6, 3],[3, 5, 0, 4, 1, 7, 2, 6],[4, 6, 0, 3, 1, 7, 5, 2],[5, 2, 0, 7, 3, 1, 6, 4],[4, 2, 0, 5, 7, 1, 3, 6],[5, 2, 0, 7, 4, 1, 3, 6],[3, 7, 0, 2, 5, 1, 6, 4],[7, 3, 0, 2, 5, 1, 6, 4],[3, 7, 0, 4, 6, 1, 5, 2],[3, 6, 0, 7, 4, 1, 5, 2],[5, 3, 0, 4, 7, 1, 6, 2],[5, 2, 0, 6, 4, 7, 1, 3],[6, 2, 0, 5, 7, 4, 1, 3],[4, 6, 0, 2, 7, 5, 3, 1],[1, 4, 6, 0, 2, 7, 5, 3],[1, 7, 5, 0, 2, 4, 6, 3],[5, 1, 6, 0, 2, 4, 7, 3],[6, 1, 3, 0, 7, 4, 2, 5],[7, 1, 3, 0, 6, 4, 2, 5],[4, 1, 7, 0, 3, 6, 2, 5],[5, 1, 6, 0, 3, 7, 4, 2],[4, 1, 5, 0, 6, 3, 7, 2],[2, 4, 6, 0, 3, 1, 7, 5],[5, 3, 6, 0, 7, 1, 4, 2],[4, 7, 3, 0, 6, 1, 5, 2],[2, 5, 7, 0, 4, 6, 1, 3],[6, 4, 2, 0, 5, 7, 1, 3],[5, 3, 6, 0, 2, 4, 1, 7],[4, 7, 3, 0, 2, 5, 1, 6],[2, 5, 3, 0, 7, 4, 6, 1],[2, 5, 7, 0, 3, 6, 4, 1],[4, 6, 3, 0, 2, 7, 5, 1],[1, 5, 7, 2, 0, 3, 6, 4],[1, 4, 6, 3, 0, 7, 5, 2],[1, 6, 4, 7, 0, 3, 5, 2],[6, 1, 5, 2, 0, 3, 7, 4],[7, 1, 4, 2, 0, 6, 3, 5],[3, 1, 7, 5, 0, 2, 4, 6],[3, 1, 6, 4, 0, 7, 5, 2],[2, 5, 1, 6, 0, 3, 7, 4],[2, 4, 1, 7, 0, 6, 3, 5],[5, 7, 1, 3, 0, 6, 4, 2],[2, 7, 3, 6, 0, 5, 1, 4],[2, 4, 7, 3, 0, 6, 1, 5],[5, 2, 6, 3, 0, 7, 1, 4],[5, 2, 4, 6, 0, 3, 1, 7],[5, 2, 4, 7, 0, 3, 1, 6],[3, 7, 4, 2, 0, 6, 1, 5],[3, 6, 4, 2, 0, 5, 7, 1],[3, 5, 7, 2, 0, 6, 4, 1],[1, 3, 5, 7, 2, 0, 6, 4],[3, 1, 4, 7, 5, 0, 2, 6],[3, 1, 7, 4, 6, 0, 2, 5],[2, 6, 1, 7, 4, 0, 3, 5],[2, 5, 1, 4, 7, 0, 6, 3],[2, 5, 1, 6, 4, 0, 7, 3],[4, 6, 1, 5, 2, 0, 3, 7],[4, 6, 1, 5, 2, 0, 7, 3],[6, 3, 1, 4, 7, 0, 2, 5],[6, 3, 1, 7, 5, 0, 2, 4],[4, 6, 1, 3, 7, 0, 2, 5],[2, 5, 7, 1, 3, 0, 6, 4],[6, 2, 7, 1, 4, 0, 5, 3],[3, 6, 4, 1, 5, 0, 2, 7],[3, 5, 7, 1, 6, 0, 2, 4],[4, 2, 7, 3, 6, 0, 5, 1],[1, 6, 2, 5, 7, 4, 0, 3],[3, 1, 6, 2, 5, 7, 0, 4],[4, 1, 3, 5, 7, 2, 0, 6],[2, 6, 1, 7, 5, 3, 0, 4],[5, 3, 1, 7, 4, 6, 0, 2],[5, 2, 6, 1, 3, 7, 0, 4],[5, 2, 6, 1, 7, 4, 0, 3],[3, 6, 2, 7, 1, 4, 0, 5],[3, 1, 6, 2, 5, 7, 4, 0],[4, 1, 3, 6, 2, 7, 5, 0],[2, 4, 1, 7, 5, 3, 6, 0],[2, 5, 3, 1, 7, 4, 6, 0]]

if __name__ == "__main__":
    n = int(input())
    for c in range(n):
        mat = []    
        for i in range(8):
            ara = input()
            ara = ara.split()
            ara = [int(x) for x in ara]
            mat.append(ara)
        res = 0
        for t in target:
            # t = [0, 6, 4, 7, 1, 3, 5, 2]
            summ = 0
            for i in range(8):
                # i = 0, 1, 2, 3, 4, 5, 6, 7, 8
                # t[i] = 0, 6, 4, 7, 1, 3, 5, 2
                # mat[0][0], mat[1][6], mat[2][7] = 1, 15, 24
                summ += mat[i][t[i]]
            res = max(res,summ)
        print('%5d' % res)




'''
Sample Input
2
1 2 3 4 5 6 7 8
9 10 11 12 13 14 15 16
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48
48 50 51 52 53 54 55 56
57 58 59 60 61 62 63 64
Sample Output
260
'''