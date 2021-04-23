/*
This file is a javascript program which prints the various attributes
of my favourite song.

-----------------------------------------------------------------

It is the very first homework - "Homework #1: DataTypes" in the
course "Keeping Up With the Javascripts: ES6"

-----------------------------------------------------------------
*/


album = 'DAMN.'                                                                 // name of the album
artist = 'Kendrick Lamar'                                                       // name of the artist
releasedYear = 2017
releasedMonth = 12
releasedDay =  8                                                                // the year, month and date of release of the song
numberOfAwards = 13                                                             // total number of awards won by the artist for the song
genre = 'West Coast Hip-Hop, Hip-Hop/Rap'                                       // genre of the song
totalSongsInAlbum = 14                                                          // total number of songs in this album
availableOn = 'Spotify, YouTube Music, Gaana, JioSaavn, Humgama, Wynk'          // different platforms on which the song is available
subscribersOnYoutube = '9.19M'                                                  // total number of subscribers the artist has on youtube
lyricists = 'Kendrick Lamar, A.Hogan, Michael L.Williams II, Anthony Tiffith'   // stores the list of lyricists for the song
viewsOnYoutube = '28,993,433'



console.log(`Album: ${album}\nArtist: ${artist}\nGenre: ${genre}\nRelease Date: ${releasedYear}-${releasedMonth}-${releasedDay}\nNumber of Awards: ${numberOfAwards}\nTotal songs in the album: ${totalSongsInAlbum}`)
console.log(`\n--------------------------\nPlaforms Available On =>`)
for (let platforms of availableOn.split(', ')) {
    console.log(platforms)
}
console.log('--------------------------\n')

console.log(`Lyricits: ${lyricists}\nTotal number of views on youtube: ${viewsOnYoutube}`)