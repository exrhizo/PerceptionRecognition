

import argparse

def main():
	print("Holla")


if __name__ == "__main__":
	parser = argparse.ArgumentParser()
	parser.add_argument("input", help="path to the input yaml file")
	parser.add_argument("output", help="path to save record into")
	parser.parse_args()
	main()