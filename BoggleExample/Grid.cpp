#include "Grid.h"
#include <cctype>

char Grid::letterAt(const int col, const int row) const
{
    return toupper(letters[width*row + col]);
}
