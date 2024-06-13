hashmap = {}
list = []
input = input("wpisz jakies slowo: ")

for i in input:
    list.append(i)

for i in list:
    if (i in hashmap):
        hashmap[i] += 1
    else:
        hashmap[i] = 1
print (hashmap)
print(list)