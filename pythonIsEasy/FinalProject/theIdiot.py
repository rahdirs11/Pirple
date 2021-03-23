#!/usr/bin/env python3
'''
Rules:
    -> Take a deck
    -> 2 is a wild card
    -> 10 is a card used to burn the deck
    -> A > K > Q > J
    -> 4 cards of the same suit burns the deck
    -> If you can't beat the cards with a number >= the value of the topmost card on the deck, or with 2 or 10, you get to take all the cards from the pile

Board:
    -> 3 cards face-down, for both the players
    -> 3 cards face-up, on top of the face-down cards
    -> 7 playable cards for both the players
    -> You can swap the face-up cards for any of the cards from your playable cards
    -> The player with most number of 3's gets to start the game
    -> You get to n cards, and pick n cards from the deck
'''


import random, os

class Deck:
    def __init__(self):
        '''
        Creates a new deck, of 52 cards
        '''
        self.cards = dict()
        suites = ['diamonds', 'hearts', 'clubs', 'spades']
        for i in range(4):
            self.cards[suites[i]] = list(range(1, 15))


    @property
    def numberOfCards(self):
        '''
        To return the number of cards currently in the deck
        '''
        count = 0
        for s in self.cards:
            count += len(self.cards.get(s))

        return count


    def __repr__(self):
        return f'class <Deck>: {self.numberOfCards} cards'


class Player:
    def __init__(self):
        self.faceDownCards = dict()
        self.playableCards = dict()
        self.faceUpCards = dict()


      def chooseCards(self, n: int, deck: Deck) -> dict:

        '''
        This method randomly picks 'n' cards from a deck of cards.
        The cards in the deck are updated whenever a card is picked.
        '''
        cards = {}
        for i in range(n):
            suiteChoice = random.choice(list(deck.cards.keys()))
            value = random.choice(deck.cards[suiteChoice])
            deck.cards[suiteChoice].remove(value)
            cards[suiteChoice] = cards.get(suiteChoice, [])
            cards[suiteChoice].append(value)

        return cards


    def printCards(self):
        print(f'Face Down cards: {self.faceDownCards}\nFace up cards: {self.faceUpCards}\nPlayable Cards: {self.playableCards}')


    def setFaceDownCards(self, deck):
        self.faceDownCards = self.chooseCards(3, deck)


    def setFaceUpCards(self, deck):
        self.faceUpCards = self.chooseCards(3, deck)


    def setPlayableCards(self, deck):
        self.playableCards = self.chooseCards(7, deck)

    
    def allocateCards(self, deck):
        '''
        Initializes the set of cards for each player(both the players in this program as it is just a 2-player game)
        '''
        self.setFaceDownCards(deck)
        self.setFaceUpCards(deck)
        self.setPlayableCards(deck)


def whoStarts(value: int, p1: Player, p2: Player) -> int:
    if value > 14:
        print('Unexpected Scenario!!')
        return -1

    countP1, countP2 = 0, 0
    for s in p1.playableCards:
        countP1 += p1.playableCards[s].count(value)

    for s in p2.playableCards:
        countP2 += p2.playableCards[s].count(value)

    if countP1 > countP2:
        return 1
    elif countP2 > countP1:
        return 2
    else:
        return whoStarts(value + 1, p1, p2)


def chooseCard_s():
    print('Card Count:\t', end="")
    count = int(input())
    print('Enter value:\t', end="")
    value = int(input())
    print('Enter the suits:')
    suitSet = set()
    tempStack = []
    for _ in range(count):
        s = input().lower()
        if player1.playable[s].count(value) != 0:
            tempStack.append([s, value])
            suitSet.add(s)
        else:
            break

    return count, value, suitSet, tempStack





def play(player1, player2, deck):
    turn = whoStarts(3, player1, player2)
    if turn == -1:
        exit(1)
    boardStack = []
    emptyDeck = False
    gameOver = False
    errorCount = 0
    while not gameOver:
        if deck.numberOfCards == 0:
            emptyDeck = True
        # errorCount = 0        if errorCount 
        if turn == 1:
            if errorCount == 3:
                print('YOU LOOSE!\nPLAYER {1 if turn == 2 else 2} WINS')
                os.sleep(2)
                exit(0)
            os.system('clear' if sys.platform == 'linux' else 'cls')
            print(f'PLAYER {turn} - MAKE YOUR MOVE!'.center(35))
            count, value, suitSet, tempStack = chooseCard_s()
            if len(suitSet) != count:
                print('INVALID MOVE!!\nTRY AGAIN')
                errorCount += 1
                os.sleep(2)
            else:
                errorCount = 0
                for ts in tempStack:
                    player1.playable[ts[0]].remove(ts[-1])
                if not emptyDeck:
                    for i in range(count):
                        suit = random.choice(deck.cards.keys())
                        value = random.choice(deck.cards[suit])
                        deck.cards[suit].remove(value)
                        player1.playable[suit].append(value)
                turn = 2
        else:
            os.system('clear' if sys.platform == 'linux' else 'cls')
            print(f'PLAYER {turn} - MAKE YOUR MOVE!'.center(35))
            count, value, suitSet, tempStack = chooseCard_s()
            if len(suitSet) != count:
                print('INVALD MOVE!!\nTRY AGAIN')
                errorCount += 1
                os.sleep(2)
            else:
                errorCount = 0
                for ts in tempStack:
                    player1.playable[ts[0].remove(ts[-1])

                if not emptyDeck:
                    for i in range(count):
                        suit = random.choice(deck.cards.keys())
                        value = random.choice(deck.cards[suit])
                        deck.cards[suit].remove(value)
                        player1.playable[suit].append(value)
                else:
                    
 


if __name__ == '__main__':
    deck = Deck()
    player1 = Player()
    player1.allocateCards(deck)

    player2 = Player()
    player2.allocateCards(deck)
    turn = whoStarts(3, player1, player2)
    if turn == -1:
        exit(1)
    else:
        play(player1, player2, deck)
    



    
