import random

def roll(faces = 6):
    num_rolled = random.randint(1, faces)
    return num_rolled

def main():
    faces = 6
    rolling = True
    while rolling:
        roll_again = input("Ready to roll the dice ? Enter=Roll. q = quit. ")
        if roll_again.lower() != "q":
            num_rolled = roll(faces)
            print("You rolled a", num_rolled)
        else:
            rolling = False
            print("Play again...")
main()