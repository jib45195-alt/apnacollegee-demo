import os

def print_directory_contents(path='.'):
    """
    Prints the names of all entries (files and directories) in the given path.
    If no path is given, it lists the current working directory.
    """
    try:
        entries = os.listdir(path)
        print(f"Contents of directory '{path}':")
        for entry in entries:
            print(entry)
    except FileNotFoundError:
        print(f"Error: The directory '{path}' does not exist.")
    except NotADirectoryError:
        print(f"Error: '{path}' is not a directory.")
    except PermissionError:
        print(f"Error: Permission denied for accessing '{path}'.")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

if __name__ == "__main__":
    # Replace '.' with any directory path you'd like to inspect
    print_directory_contents('.')
