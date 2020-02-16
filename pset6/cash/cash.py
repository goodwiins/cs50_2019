from cs50 import get_float
from math import floor


def main():
		while True:
	    # getting dollars and cents
			dollars_owed = get_float("Change owed: ")
			cents_owed = floor(dollars_owed * 100)
	    # if the cent of ower equal to 0 stopped the program otherwise
			if cents_owed > 0:
			    	break
# divided each part
		quarters = cents_owed // 25
		# printing all divieded values
		dimes = (cents_owed % 25) // 10
		# printing all divieded values
		nickels = ((cents_owed % 25) % 10) // 5
		# printing all divieded values
		pennies = ((cents_owed % 25) % 10) % 5
# printing all divieded values
		print(f"{quarters + dimes + nickels + pennies}")


if __name__ == "__main__":
	main()