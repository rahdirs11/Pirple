def playingBoard(rows: int, columns: int) -> bool:
    if columns > 235:   # the wrapping occurs only at columns = 236 and higher in full screen
        return False
    for row in range(rows):
        if row % 2 != 0:
            print('-' * columns)
        else:
            for col in range(columns):
                if col % 2 == 0:
                    print(' ', end="")
                else:
                    print('|', end="")
            print()
    return True


if __name__ == '__main__':
    rows, columns = map(int, input('Enter the number of rows and columns (in the same order separated by space):\t').split())
    if not playingBoard(rows, columns):
        print('Exceeded the no-wrap limit!')