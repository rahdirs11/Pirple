#!/usr/bin/env python3
'''
-> The board is going to be 6 x 7
-> can drop a new piece by selecting the columns only
-> the last row gets filled first
-> the chosen column will be invalid if all the rows are filled (in that particular column)
-> a player wins if he has 4 consecutive pieces : horizontally, vertically or diagonally

(13 x 11)


FOR THE 'EXCEPTION' ASSIGNMENT, I HAVE ADDED THE try-except BLOCK
IN THE startGame() FUNCTION, IN CASE THE INPUT IS ANYTHING OTHER THAN
A NUMBER
'''
import termcolor, os, time, sys

#  | | | | | | .
# 0 1 2 3 4 5 6
def clearScreen(seconds=0):
    time.sleep(seconds)
    os.system('clear' if sys.platform == 'linux' else 'cls')


def drawBoard(pieces):
    for i, row in enumerate(pieces):
        for ind, column in enumerate(row):
            if column == ' ':
                print(column, end="")
            elif column == 'X':
                termcolor.cprint(column, 'red', end='')
            elif column == 'O':
                termcolor.cprint(column, 'magenta', end='')
            if ind != len(row) - 1:
                print('|', end="")
        print()
        if i != len(pieces) - 1:    print('-' * 13)
    # clearScreen(3)


def isValidRow(pieces,column) -> bool:
    return rowsPerColumn[column] in range(6) and pieces[rowsPerColumn[column]][column] == ' '


# check the rows
def vertical(pieces, player) -> bool:
    for i in range(7):
        for j in range(3):
            if pieces[j][i] == pieces[j + 1][i] == pieces[j + 2][i] == pieces[j + 3][i] == player:
                return True
    return False


# code the diagonal check tomorrow!!
def positiveDiagonal(pieces, player) -> bool:
    for r in range(3):
        for c in range(4):
            if pieces[r][c] == pieces[r + 1][c + 1] == pieces[r + 2][c + 2] == pieces[r + 3][c + 3] == player:
                return True
    return False


def negativeDiagonal(pieces, player):
    for r in range(3, 6):
        for c in range(4):
            if pieces[r][c] == pieces[r - 1][c + 1] == pieces[r - 2][c + 2] == pieces[r - 3][c + 3] == player:
                return True
    return False



def horizontal(pieces, player) -> bool:
    for i in range(6):
        for j in range(4):
            if pieces[i][j] == pieces[i][j + 1] == pieces[i][j + 2] == pieces[i][j + 3] == player:
                return True
    return False


# checking only horizontally and vertically FOR NOW
def winCheck(pieces, player):
    v, h = vertical(pieces, player), horizontal(pieces, player)
    # print(v, h)
    pd, nd = positiveDiagonal(pieces, player), negativeDiagonal(pieces, player)
    return pd or nd or v or h


player, gameOver = 0, False

pieces = [
    [' ', ' ', ' ', ' ', ' ', ' ', ' '],
    [' ', ' ', ' ', ' ', ' ', ' ', ' '],
    [' ', ' ', ' ', ' ', ' ', ' ', ' '],
    [' ', ' ', ' ', ' ', ' ', ' ', ' '],
    [' ', ' ', ' ', ' ', ' ', ' ', ' '],
    [' ', ' ', ' ', ' ', ' ', ' ', ' '],
    ]

rowsPerColumn = {
    i: 5
    for i in range(7)
}

def startGame(player, piece):
    drawBoard(pieces)
    try:
        columnChoice = int(input(f'PLAYER {player}:\nEnter your column choice: [1 - 7]:\t')) - 1
    except ValueError as e:
        print('ENTER INTEGERS ONLY!!')
        return player

    if columnChoice in range(7) and isValidRow(pieces, columnChoice):
        pieces[rowsPerColumn[columnChoice]][columnChoice] = piece
        rowsPerColumn[columnChoice] -= 1
        if winCheck(pieces, piece):
            print(f'CONGRATS PLAYER {player}!! YOU ARE THE WINNER!!')
            clearScreen(5)
            exit()
        else:
            drawBoard(pieces)
    else:
        print('THERE ARE ONLY 7 ROWS (numbered from 1 to 7)!!\nYOU HAVE ENTERED {}!'.format(columnChoice))
        clearScreen(5)
    os.system('clear' if sys.platform == 'linux' else 'cls')
    return 0 if player == 1 else 1

while not gameOver:
    if player == 0:
        player = startGame(player, 'X')
    elif player == 1:
        player = startGame(player, 'O')
