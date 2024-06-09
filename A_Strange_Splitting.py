 def color_elements(t, test_cases):
    for i in range(t):
        n, arr = test_cases[i]
        min_val = min(arr)
        max_val = max(arr)
        if min_val == max_val:
            print("NO")
        else:
            range_red = max_val - min_val
            range_blue = arr[1] - arr[0]
            if range_blue == 0:
                blue_color = "R"
                red_color = "B"
            else:
                blue_color = "B"
                red_color = "R"
            colors = [blue_color, red_color]
            result = [colors[i % 2] for i in range(n)]
            print("YES")
            print("".join(result))

# Example usage:
t = 7
test_cases = [
    (4, [1, 1, 2, 2]),
    (5, [1, 2, 3, 4, 5]),
    (3, [3, 3, 3]),
    (4, [1, 2, 2, 2]),
    (3, [1, 2, 2]),
    (3, [1, 1, 2]),
    (3, [1, 9, 84])
]
color_elements(t, test_cases)