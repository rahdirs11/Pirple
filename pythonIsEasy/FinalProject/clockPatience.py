#!/usr/bin/env python3

'''
OBJECTIVE:
-> The goal is to empty the "clock" before you get 4 kings.
(suit doesn't matter here as in a single deck, we will be having just 4 of all values)

CARD DISTRIBUTION:
-> After shuffling, we place 1 card in each hour(1 to 12) and an additional 13.
This goes on until 4 cards are on top of all the 13 places!

RESULT:
-> You win if there are no cards left on the clocks, 1 to 12, before you get to 4 kings

STEPS:
-> You start opening the card, from 1st place.
-> You have to place the card on to the respective hour hand i.e. if the opened card is
    3, you have to move the card from hour 1, to hour 3
-> The consecutive moves would be from the hour hand you place the card at.
-> Every time you get a king, you pick from the 13th "hour" and the process repeats

TO MAKE IT INTERACTIVE:
    -> The user has to choose to proceed to next step
    -> The user has to place the card correctly at the respective hour hand
        -> if correctly done, the process is continued
        -> else, the process is stuck there until the user places it correctly within 3 tries
        -> more than 3 tries, the game is lost
    -> At any time before the game could end, the user can force terminate the game by hitting q/Q

TO GET A CLEAR IDEA OF THE WORKING OF THE GAME(IF NOT ALREADY), PLEASE
REFER THE VIDEO:
    https://youtu.be/wIJ2Y45JuAg (0:00 to 06:49)
'''
import random, os, sys, termcolor, time

class Deck:
    def __init__(self):
        self.cards = list()
        for i in range(4):
            self.cards.extend(list(range(1, 14)))


    def shuffle(self):
        random.shuffle(self.cards)


    def __repr__(self):
        return f'class <Deck>: {len(self.cards)} cards'




if __name__ == '__main__':
    closedCards = {}
    openCards = {}
    deck = Deck()
    # arranging the 'clock'
    for i in range(4):
        for j in range(1, 14):
            card = random.choice(deck.cards)
            closedCards[j] = closedCards.get(j, [])
            closedCards[j].append(card)
            deck.cards.remove(card)

#    print(closedCards)
    score = 0
    invalid = 0
    totalCards = 52
    hour, kingCount = 1, 0
    while kingCount != 4 and totalCards >= 1:
        os.system('clear' if sys.platform == 'linux' else 'cls')
        print(termcolor.colored('ENTER YOUR CHOICE =>'.center(50), 'red', 'on_blue'))
        choice = input().strip()
        if choice == 'q':
            print('YOU CHOSE TO QUIT THE GAME!\tGOODBYE!'.center(50))
            time.sleep(3)
            exit(1)
        elif choice == 'n':
            time.sleep(2)
            os.system('clear' if sys.platform == 'linux' else 'cls')
            while len(closedCards[hour]) == 0:
                hour = (hour + 1) % 13
            source = closedCards[hour][-1]
            if source == 13:
                totalCards -= 1
                kingCount += 1
                print(f'OH NO! IT\'S A KING!! {4 - kingCount} kings left before the game ends!!'.center(50))
                time.sleep(3)
                hour = 13
                if len(closedCards[hour]) > 0:
                    closedCards[hour].pop()
                openCards[13] = openCards.get(13, [])
                openCards[13].append(source)
                continue
            invalid = 1
            while invalid and invalid <= 3:
                print('Enter the location HOUR of card {}:\t'.format(source).center(50), end="")
                destination = int(input())

                if destination == source:
                    invalid = 1
                    openCards[source] = openCards.get(source, [])
                    openCards[source].append(source)
                    closedCards[hour].remove(source)
                    hour = destination
                    print('VALID!!\tPROCEED'.center(50))
                    totalCards -= 1
                    break
                else:
                    invalid += 1
                    print('INVALID!!\nTRY AGAIN!')
            if invalid >= 3:
                print('GAME OVER!!!!!!!\n\n\n3 CONSECUTIVE INCORRECT TRIES!!'.center(50))
                time.sleep(2)
                exit(1)
        '''elif choice == 's':
            os.system('cls')
            time.sleep(3)
            print('THE CARDS ON CLOCK(OPEN) -> ')
            for h in openCards:
                print(openCards[h])

            print('\n\nTHE UNOPENED CARDS -> ')
            for h in closedCards:
                print(closedCards[h])
        '''

    # if kingCount == 4:
    score = totalCards  # the number of cards left
    # lower the score, higher rank!
    # os.sleep(4)
    # os.system('clear' if sys.platform == 'linux' else 'cls')
    print(termcolor.colored(f'YOUR FINAL SCORE:\t{score}'.center(30), 'green', 'on_yellow'))

    # print(f'Open cards:\n{openCards}')
    # print('\n\nClosed cards:\n{closedCards}')

    # print(len(deck.cards))
    # print(closedCards)
