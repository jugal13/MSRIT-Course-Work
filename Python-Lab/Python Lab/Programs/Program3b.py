class Account():
	def __init__(self,balance,rate,accountno):
		self.balance=balance
		self.rate=rate
		self.accountno=accountno
		self.fee=5000
		self.amount=0
	def overdraw(self,amount):
		self.amount=amount+self.fee-self.balance
		self.balance=-self.amount
		print("Amount overdrawn")
		print("Fee due: "+str(self.fee))
		print("Amount due: "+str(self.amount))
		return
	def withdraw(self,amount):
		if self.balance<0:
			print("Pay amount due including fee before another withdrawal\n")
			return
		if amount>self.balance:
			overdraw(amount)
			return
		self.balance-=amount
		print("Balance after withdrawal: "+str(self.balance))
		return
	def deposit(self,money):
		if self.balance<0:
			print("Pay amount due including fee\n")
		self.balance+=money
		print("Balance after deposit: "+str(self.balance))
		return
	def addinterest(self):
		interest=self.balance*(self.rate/12)/100.0	
		self.balance+=interest
		print("Interest: "+str(interest))
		print("Balance: "+str(self.balance))
		return
balance=float(input("Enter current balance: "))
rate=float(input("Enter annual interest rate: "))
accountno=int(input("Enter account number: "))
person=Account(balance,rate,accountno)
while True:
	print("1.Withdraw\n2.Deposit\n3.Add Interest\n4.Exit")
	ch=int(input("Enter choice: "))
	if ch==1:
		amount=input("Enter amount to be withdrawn: ")
		person.withdraw(amount)
	elif ch==2:
		money=input("Enter amount to be deposited: ")
		person.deposit(money)
	elif ch==3:
		person.addinterest()
	elif ch==4:
		print("Operation Complete")
		break
	else:
		print("Invalid Option")