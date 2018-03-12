how_many_snakes = 1
snake_string = """
Welcome to Python3!

             ____
            / . .\\
            \  ---<
             \  /
   __________/ /
-=:___________/

<3, Philip and Charlie
"""


print(snake_string * how_many_snakes)

# BRANCHES I


#First Example - uncomment lines or change values to test the code
phone_balance = 7.62
bank_balance = 104.39
#phone_balance = 12.34
#bank_balance = 25
if phone_balance < 10:
    phone_balance += 10
    bank_balance -= 10
print(phone_balance)
print(bank_balance)

#Second Example

#change the number to experiment!
number = 145346334
#number = 5 #3 sir
if number % 2 == 0:
    print("The number " + str(number) + " is even.")
else:
    print("The number " + str(number) + " is odd.")

#Third Example

#change the age to experiment with the pricing
age = 35

#set the age limits for bus fares
free_up_to_age = 4
child_up_to_age = 18
senior_from_age = 65

#set bus fares
concession_ticket = 1.25
adult_ticket = 2.50

#ticket price logic
if age <= free_up_to_age:
    ticket_price = 0
elif age <= child_up_to_age:
    ticket_price = concession_ticket
elif age >= senior_from_age:
    ticket_price = concession_ticket
else:
    ticket_price = adult_ticket
message = "Somebody who is {} years old will pay ${} to ride the bus.".format(age,ticket_price)
print(message, "\n")

#-------------------QUADRATIC EQUATION--------------------
print('THIS IS A QUADRATIC EQUATION \n')

def quadratic(a,b,c):
    if a == 0 & b != 0:
        x1 = x2 = -c/b
    elif a == 0 & b == 0:
        print('Error in input')
    else:
        delta = b**b - 2*a*c
        x1 = (-b + delta)/(2*a)
        x2 = (-b - delta)/(2*a)
        return x1, x2

#test case:
print('This is a test case for quadratic function')
test1_1 = quadratic(1,3,4)[0]
test1_2 = quadratic(1,3,4)[1]
print("The solutions are x1 = {} and x2 = {}".format(test1_1, test1_2))


#--------------------WHICH PRIZE--------------------------
print("WHICH PRIZE ARE YOU WINNING?")

def which_prize(points):
    if points <= 50:
        text_prize = "You idjit has won: a wooden rabbit"
    elif points <= 150:
        text_prize = "You ARE an indjit"
    elif points <= 180:
        text_prize = "You have won: wafer-thin mint"
    elif points <= 200:
        text_prize = "Penguin"
    else:
        text_prize = "Invalid"
    return text_prize

fuck_prizes = which_prize(182)
print(fuck_prizes, "\n")
