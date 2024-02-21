#!/usr/bin/python3
"""
This is island_perimeter
It is a part of tech interview preparation
"""


def island_perimeter(grid):
    """
    The island_perimeter function
    It calculates the perimeter of an
    island in a grid
    """
    perim = 0
    if type(grid) != list:
        return
    if grid is not None:
        size = 0
        for small_grid in grid:
            for item in small_grid:
                if type(item) != int:
                    return
                elif item == 1:
                    size = size + 1
                elif item != 0 and item != 1:
                    return
        if size != 0:
            perim = (size + 1) * 2
    return perim
