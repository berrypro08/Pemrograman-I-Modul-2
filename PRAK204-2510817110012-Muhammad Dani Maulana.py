import math
r = float(input("Masukkan Jari-Jari: "))
h = float(input("Masukkan Tinggi: "))
V = (22 * pow(r,2) * h)/7
L = (2*22*r*(r + h))/7
K = 2*22*r/7

print("%.2f"%V)
print("%.2f"%L)
print("%.2f"%K)