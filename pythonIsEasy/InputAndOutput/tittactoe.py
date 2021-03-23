import os, time

def positionChoice():
    return map(int, input('Enter row and column:\t').split())


def checkWinner(board):
    pass


def drawField(board: list):
    for row in range(5):
        for col in range(5):
            print(board[row][col], end='')
        print()
    time.sleep(3)
    os.system('cls')

board, moves = [
    [' ', '|', ' ', '|', ' '],
    ['-'] * 5,
    [' ', '|', ' ', '|', ' '],
    ['-'] * 5,
    [' ', '|', ' ', '|', ' ']
    ], 1

while moves <= 9:
    # player 1
    if moves % 2:
        print('PLAYER #1 (X)!!')
        row, col = positionChoice()
        if board[row][col] == ' ':
            board[row][col] = 'X'
            moves += 1
            drawField(board)
        else:
            print('CANNOT ENTER IN THIS SPOT!\nSPOT ALREADY HAS {character}!!\nCHOOSE AGAIN!!'.format(board[row][col]))
    # player 2
    else:
        print('PLAYER #2 (O)!!')
        row, col = positionChoice()
        if board[row][col] == ' ':
            board[row][col] = 'O'
            moves += 1
            drawField(board)
        else:
            print('CANNOT ENTER IN THIS SPOT!\nSPOT ALREADY HAS {character}!!\nCHOOSE AGAIN!!'.format(character=board[row][col]))