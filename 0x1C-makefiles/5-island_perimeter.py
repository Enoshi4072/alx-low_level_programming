#!/usr/bin/python3

"""
Function that calculates the perimeter of an island
"""


def island_perimeter(grid):

    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid: The grid rep the island.

    Returns:
        The perimeter of the island (int).
    """
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                p += 4
                if i > 0 and grid[i - 1][j] == 1:
                    p -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    p -= 2
    return p
