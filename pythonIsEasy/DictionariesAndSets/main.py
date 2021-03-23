humble = {
    'album': 'DAMN.',
    'artist': 'Kendrick Lamar',
    'releasedYear': 2017,
    'releasedMonth': 12,
    'releasedDay': 8,
    'numberOfAwards': 13,
    'genre': 'West Coast Hip-Hop, Hip-Hop/Rap',
    'totalSongsInAlbum': 14,
    'availableOn': ['Spotify', 'YouTube Music', 'Gaana', 'JioSaavn', 'Humgama', 'Wynk'],
    'subscribersOnYoutube': '9.19M',
    'lyrists': ['Kendrick Lamar, A.Hogan', 'Michael L.Williams II', 'Anthony Tiffith'],
    'viewsOnYoutube': '28,993,433'
}

def printDetails(song: dict):
    for key, value in humble.items():
        print(f'{key.capitalize()}:\t{", ".join(value) if type(value) == list else value}')


def guess(key, value) -> bool:
    return key in humble and value in humble.values()



if __name__ == '__main__':
    printDetails(humble)
    key, value = input('Guess the key and value of the dictionary: \t').split()
    print('Exists' if guess(key, value) else 'Doesn\'t exist')