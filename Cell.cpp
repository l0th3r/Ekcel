#include "Cell.h"
#include <string>

enum CellTypes
{
    CT_String,
    CT_Number,
};

struct Cell
{
    CellTypes type;
    std::string content;
    std::string address;

    Cell()
    {
        this->type = CT_String;
        this->content = "";
        this->address = "$0:0;";
    }
    Cell(int row, int col)
    {
        this->type = CT_String;
        this->content = "";
        SetAddress(row, col);
    }

    std::string SetAddress(int x, int y)
    {
        this->address = "$" + std::to_string(x) + ":" + std::to_string(y) + ";";
        return this->address;
    }
};
