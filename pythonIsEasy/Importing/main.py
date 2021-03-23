import collections as c

# using a tuple with named keys
student = c.namedtuple('student', ['name', 'age', 'email'])

student1 = student('Sridhar', '21', 'iamsridhar11@gmail.com')
print(f'Name:\t{student1.name}\nAge:\t{student1.age}\nEmail:\t{student1.email}')


from os import system
# to execute terminal commands

from time import sleep
# to delay the next set of instructions

import getpass
# not displaying the password to the console/screen

sleep(3)
system('cls')
username, password = input("Username:\t"), getpass.getpass("Password:\t")

print('Username:\t{uname}\nPassword length:\t{pw}'.format(pw=len(password), uname=username))