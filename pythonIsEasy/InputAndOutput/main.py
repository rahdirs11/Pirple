import os
import time


filename = input('Enter filename:\t')

def _delayFunction():
    time.sleep(3)
    os.system('cls')


def appendFile(file: str):
    with open(file, 'a') as fileHandle:
        text = input('Enter the text you want to append:\t')
        if len(text) != 0:
            fileHandle.write(text + '\n')
        else:
            print('Empty text! Nothing to append!')



def printFile(filename: str):
    lines = _readFile(filename)
    if len(lines) == 0:
        print('Nothing to display!')
    else:
        for line in lines:
            print(line)


def _readFile(file: str):
    with open(file, 'r') as fileHandle:
        lines = [line.strip() for line in fileHandle.readlines()]
    
    return lines


def deleteFile(file: str):
    os.remove(file)
    _createFile(file)


def _createFile(file: str):
    with open(file, 'w') as fileHandle:
        pass


def replaceLine(file: str):
    print('REPLACE A SINGLE LINE', end="\n\n")
    lineNumber = int(input('Enter the line number you want to update:\t'))
    _delayFunction()
    lines = _readFile(file)
    textReplacement = input(f'Enter the text that should replace line #{lineNumber}:\t')
    print('\n'.join(lines))
    if lineNumber in range(1, len(lines) + 1):
        print(f'Text -> {textReplacement}, succesfully replaced!')
        lines[lineNumber - 1] = textReplacement + '\n'
        with open(file, 'w') as fileHandle:
            for line in lines:
                fileHandle.write(line)
        print(f'Text -> {textReplacement}, succesfully replaced!')
    else:
        print('Record doesn\'t exist!')


if os.path.exists(f'.\{filename}'):
    option = input('''A) Read the file
B) Delete the file and start over
C) Append the file
D) Replace a single line
Enter Choice:\t''')
    if option.lower() == 'a':
        printFile(filename)
    elif option.lower() == 'b':
        deleteFile(filename)
    elif option.lower() == 'c':
        appendFile(filename)
    elif option.lower() == 'd':
        replaceLine(filename)
else:
    _createFile(filename)