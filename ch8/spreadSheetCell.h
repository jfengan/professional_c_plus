//
// Created by Felix FENG on 10/9/2020.
//

#ifndef PROFESSIONAL_C_PLUS_SPREADSHEETCELL_H
#define PROFESSIONAL_C_PLUS_SPREADSHEETCELL_H

#include <string>
#include <string_view>

class SpreadsheetCell{
public:
    SpreadsheetCell() = default;
    SpreadsheetCell(double initialValue);
    SpreadsheetCell(std::string_view initValue);
    SpreadsheetCell(const SpreadsheetCell& src);

    SpreadsheetCell& operator=(const SpreadsheetCell& rhs);

    void setValue(double inValue);
    double getValue() const;

    void setString(std::string_view inString);
    std::string getString() const;

private:
    std::string doubleToString(double inValue) const;
    double stringToDouble(std::string_view inString) const;
    double mValue;
};

#endif //PROFESSIONAL_C_PLUS_SPREADSHEETCELL_H
