from cs50 import get_int
def main():
	while True:

		height = get_int("Height: ")
		x =height
		if height >= 0 and height<=23:
			break
	for i in range(1, height + 1):
		hashes = i
		spaces = x - hashes
		print(" " * spaces, end="")
		print("#" * hashes, end="")

		print("  ", end="")

		print("#" * hashes)
if __name__ == "__main__":
	main()
