count = {
  "25p": 0,
  "50p": 0,
  "Rs1": 0,
  "Rs2": 0,
  "Rs5": 0
}
count["25p"]=int(input("Enter number of 25p coins: "))
count["50p"]=int(input("Enter number of 50p coins: "))
count["Rs1"]=int(input("Enter number of Rs1 coins: "))
count["Rs2"]=int(input("Enter number of Rs2 coins: "))
count["Rs5"]=int(input("Enter number of Rs5 coins: "))
total = 0.25 * count["25p"] + 0.5 * count["50p"] + count["Rs1"] + 2 * count["Rs2"] + 5 * count["Rs5"]
print(total)