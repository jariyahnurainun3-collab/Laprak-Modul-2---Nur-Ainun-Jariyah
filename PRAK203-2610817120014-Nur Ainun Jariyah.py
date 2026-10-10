data = input().split() 
if len(data) < 6: 
    a = float(data[0]) 
    b = float(input()) 
    i = float(input()) 
    j = float(input()) 
    x = float(input())    
    y = float(input()) 
else :
    a = float(data[0])    
    b = float(data[1])    
    i = float(data[2])     
    j = float(data[3])     
    x = float(data[4])     
    y = float(data[5]) 

    hasil = (a - b) * i / j - (x + y) 

    print(f"{hasil:.3f}") 