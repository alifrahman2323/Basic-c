class Acc:
    def __init__(self,bal,acc) -> None:
        self.balance = bal
        self.account_no = acc
        pass


    #debit method
    def debit(self, ammount):
        self.balance =- ammount
        print("Tk",ammount , "was created")
        print("total balance = ", self.get_balance())

    def creadit(self, ammount):
        self.balance += ammount
        print("Tk",ammount, "was created")
        print("total balance = ", self.get_balance())


    def get_balance(self):
        return self.balance    

acc1 = Acc(10000, 12345)
acc1.debit(1000)
acc1.creadit(500)
acc1.creadit(40000)