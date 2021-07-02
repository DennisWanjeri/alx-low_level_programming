#!/usr/bin/python3
"""Island perimeter function module"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid:
    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don't exceed 100
    """
    land = 0
    edge = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                land += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edge += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edge += 1
    return land * 4 - edge * 2
