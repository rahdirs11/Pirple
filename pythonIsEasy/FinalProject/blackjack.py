#!/usr/bin/env python3

from random import shuffle

def createDeck() -> list:
    deck = list()
    faceValues = ['K', 'Q', 'J', 'A']
    for i in range(4):
        for card in range(2, 11):
            deck.append(str(card))

        for card in faceValues:
            deck.append(card)

    shuffle(deck)
    return deck

class Player:
    def __init__(self, hand=[], money=100):
        self.hand = hand
        self.score = self.setScore
        self.money = money
        self.bet = 0

    def __str__(self):
        return f'<Cards: {" ".join(self.hand)}> Score: {self.score}'

    @property
    def setScore(self):
        newScore, aceCounter = 0, 0
        for card in self.hand:
            try:
                if int(card) in range(2, 11):
                    newScore += int(card)
            except ValueError as e:
                if card in ['K', 'Q', 'J']:
                    newScore += 10
                else:
                    aceCounter += 1
                    newScore += 11
            if newScore > 21 and aceCounter != 0:
                newScore -= 10
                aceCounter -= 1
        return newScore

    def hit(self, card):
        self.hand.append(card)
        self.score = self.setScore

    def play(self, newHand):
        self.hand = newHand
        self.score = self.setScore

    def betMoney(self, amount):
        self.money -= amount
        self.bet += amount

    def draw(self):
        self.money += self.bet
        self.bet = 0

    def win(self, result: bool):
        if result:
            if self.score == 21 and len(self.hand) == 2:
                self.money += 2.5 * self.bet
            else:
                self.money += 2 * self.bet
        self.bet = 0

    def hasBlackJack(self) -> bool:
        return self.score == 21 and len(self.hand) == 2


def printHouse(house):
    print('* ', ' '.join(house[1:]))

cardDeck = createDeck()
firstHand = [cardDeck.pop(), cardDeck.pop()]    # the last element in the cardDeck is the topmost card in the deck

secondHand = [cardDeck.pop(), cardDeck.pop()]
player1 = Player(firstHand)
house = Player(secondHand)
printHouse()

if player1.hasBlackJack():
    if house.hasBlackJack():
        player1.draw()
    else:
        player1.win(True)
else:
    while player1.score < 21:
        action = input("Do you want another card!? [y/n]\t")
        if action.lower() == 'y':
            player1.hit(cardDeck.pop())
        else:
            break
    while house.score < 16:
        house.hit(cardDeck.pop())

print(house)
