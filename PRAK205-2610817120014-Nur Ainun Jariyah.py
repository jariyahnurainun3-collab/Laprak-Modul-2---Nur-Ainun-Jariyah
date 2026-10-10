import math

A = float(input())
B = float(input())

C = math.sqrt((B ** 2) - (A ** 2))

alas = round(C)
tinggi = round(A)
sisi_miring = round(B)

keliling = alas + tinggi + sisi_miring
luas = 0.5 * alas * tinggi

print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas:.0f} cm^2")