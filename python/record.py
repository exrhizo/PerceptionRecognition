

import argparse

def main():
	print("Holla")


if __name__ == "__main__":
	parser = argparse.ArgumentParser()
	parser.add_argument("data", help="path to the data directory")
	parser.add_argument("type", help="name of the gesture space")
	parser.add_argument("type", help="name of the gesture space")
	parser.parse_args()
	main()