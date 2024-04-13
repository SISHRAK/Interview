def display_directory_structure(directory_tree, level=0):
    directory_names = sorted(directory_tree.keys())
    for directory_name in directory_names:
        if level > 0:
            print("  " * (level - 1) + "  " + directory_name)
        else:
            print(directory_name)
        display_directory_structure(directory_tree[directory_name], level + 1)

def main():
    number_of_paths = int(input())
    root_directory = {}

    for _ in range(number_of_paths):
        path_components = input().split('/')
        current_position = root_directory
        for directory in path_components[1:]:
            if directory not in current_position:
                current_position[directory] = {}
            current_position = current_position[directory]


    root_name = path_components[0]
    if root_name:
        nested_directories = {root_name: root_directory}
        display_directory_structure(nested_directories)

if __name__ == "__main__":
    main()
