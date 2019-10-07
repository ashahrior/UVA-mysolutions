# -*- coding: utf-8 -*-
"""
Created on Sun Oct  6 23:56:10 2019

@author: ashah
"""

from sys import stdin
import math

def calc_centerRadius(x1,y1,x2,y2,x3,y3):
    h = x1*x1*(y2 - y3) + x2*x2*(y3 - y1) + x3*x3*(y1 - y2)    
    h = h - (y1 - y2)*(y2 - y3)*(y3 - y1)
    h = h/(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2))
    h = h/2
    
    k = y1*y1*(x2 - x3) + y2*y2*(x3 - x1) + y3*y3*(x1 - x2)
    k = k - (x1 - x2)*(x2 - x3)*(x3 - x1)
    k = k/(y1*(x2 - x3) + y2*(x3 - x1) + y3*(x1 - x2))
    k = k/2
    
    r = math.sqrt((x1 - h)*(x1 - h) + (y1 - k)*(y1 - k))
    
    return h,k,r

def checkSigns(h,k,c):
    
    s1 = '-' if h>0 else '+'
    s2 = '-' if k>0 else '+'
    s3 = '+' if c>0 else '-'
    
    return s1,s2,s3


def processResult(h,k,r,c):
    
    s = "x^2 + y^2"
    
    s1,s2,s3 = checkSigns(h,k,c)
    
    if h==0:
        a = "x^2"
    else:
        a = ("(x %c %.3f)^2"%(s1,abs(h)))
        s = s + (" %c %.3fx"%(s1,abs(2*h)))
    
    if k==0:
        b = "y^2"
    else:
        b = ("(y %c %.3f)^2"%(s2,abs(k)))
        s = s + (" %c %.3fy"%(s2,abs(2*k)))
    
    if c != 0:
        s = s + (" %c %.3f"%(s3,abs(c)))
    
    print(a,"+",b,"= %.3f^2"%r)
    
    print(s,"= 0")
    
    print()
    
    
    

if __name__ =='__main__':
    for line in stdin:
        line = line.split()
        points = [float(x) for x in line]
        x1,y1 = points[0], points[1]
        x2,y2 = points[2], points[3]
        x3,y3 = points[4], points[5]
        
        h,k,r = calc_centerRadius(x1,y1,x2,y2,x3,y3)
        
        c = h*h + k*k - r*r
        
        processResult(h,k,r,c)
        
        #print("(x %c %.3f)^2 + (y %c %.3f)^2 = %.3f^2"%(s1,abs(h),s2,abs(k),r))
        
        #print("x^2 + y^2 %c %.3fx %c %.3fy %c %.3f = 0"%(s1,abs(2*h),s2,abs(2*k),s3,abs(c)))
        
        #print()
   
        
'''
Sample Input
7.0 -5.0 -1.0 1.0 0.0 -6.0
1.0 7.0 8.0 6.0 7.0 -2.0
Sample Output
(x - 3.000)^2 + (y + 2.000)^2 = 5.000^2
x^2 + y^2 - 6.000x + 4.000y - 12.000 = 0

(x - 3.921)^2 + (y - 2.447)^2 = 5.409^2
x^2 + y^2 - 7.842x - 4.895y - 7.895 = 0
'''
