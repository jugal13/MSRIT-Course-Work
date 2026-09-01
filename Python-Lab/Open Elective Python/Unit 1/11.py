cred = int(input("Enter number of credits: "))
if cred > 90:
  print("Senior Status")
elif cred > 60:
  print("Junior Status")
elif cred > 30:
  print("Sophomore Status")
else:
  print("Freshman Status")