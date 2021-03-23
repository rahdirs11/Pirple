def artist() -> str:
    return 'Kendrick Lamar'

def genre() -> str:
    return 'West Coast Hip-Hop, Hip-Hop/Rap'

def year() -> int:
    return 2017

def checkYear(yearOfRelease: int) -> bool:
    return yearOfRelease == year()


# print(f'Artist: {artist()}\nGenre: {genre()}\nYear: {year()}')


yearOfRelease = int(input('Enter the year of release of your song:\t'))
print('MATCH' if checkYear(yearOfRelease) else 'NO MATCH')
