n=int(input())

if n==1:
    print(1)
else: 
    ring=1
    max_room=1
    while max_room<n:
        max_room+=6*ring
        ring+=1
    print(ring)