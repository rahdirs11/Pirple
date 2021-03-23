
#!/usr/bin/env python3

'''
This file is a python program which prints the various attributes
of my favourite song.

-----------------------------------------------------------------

It is the very first homework - "Homework #1: Variables" in the
course "Python Is Easy".

-----------------------------------------------------------------
'''


album = 'DAMN.'                                                                 # name of the album
artist = 'Kendrick Lamar'                                                       # name of the artist
releasedYear, releasedMonth, releasedDay = 2017, 12, 8                          # the year, month and date of release of the song
numberOfAwards = 13                                                             # total number of awards won by the artist for the song
genre = 'West Coast Hip-Hop, Hip-Hop/Rap'                                       # genre of the song
totalSongsInAlbum = 14                                                          # total number of songs in this album
availableOn = 'Spotify, YouTube Music, Gaana, JioSaavn, Humgama, Wynk'          # different platforms on which the song is available
subscribersOnYoutube = '9.19M'                                                  # total number of subscribers the artist has on youtube
lyrists = 'Kendrick Lamar, A.Hogan, Michael L.Williams II, Anthony Tiffith'   # stores the list of lyricists for the song
viewsOnYoutube = '28,993,433'                                                   # total number of views as of 31st December, 2020 - 2240 hours IST


print(f'Artist: {artist}\nAlbum: {album}\nReleased: {releasedYear} - {releasedMonth} - {releasedDay}')
print(f'Total Awards: {numberOfAwards}\nGenres: {genre}')
print(f'Total Songs in Album: {totalSongsInAlbum}\n\nAVAILABLE ON: {availableOn}')
print(f'Subscriber Count on YouTube: {subscribersOnYoutube}\nTotal Views on YouTube: {viewsOnYoutube}\nLyrists: {lyrists}')
