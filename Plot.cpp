#include "Plot.h"
#include <iostream>
#include <iomanip>
#include <cmath>

void printTextBasedPlot(const std::vector<Candlestick>& candlesticks) {
    const int yAxisMax = 20; // Set the maximum temperature to display
    const int yAxisMin = -10; // Set the minimum temperature to display
    const int labelWidth = 12; // Width for each column in the graph

    std::cout << std::setw(5) << ""; // Space for y-axis
    for (const auto& candle : candlesticks) {
        std::cout << std::setw(labelWidth) << candle.period;
    }
    std::cout << std::endl;

    for (int y = yAxisMax; y >= yAxisMin; --y) {
        std::cout << std::setw(5) << y << " | ";
        for (const auto& candle : candlesticks) {
            int open = std::round(candle.open);
            int close = std::round(candle.close);
            int high = std::round(candle.high);
            int low = std::round(candle.low);

            if (y == high) {
                std::cout << std::setw(labelWidth) << "[High]";
            } else if (y == low) {
                std::cout << std::setw(labelWidth) << "[Low]";
            } else if (y == open || y == close) {
                std::cout << std::setw(labelWidth) << "[Open/Close]";
            } else if (y < high && y > low) {
                std::cout << std::setw(labelWidth) << " |";
            } else {
                std::cout << std::setw(labelWidth) << " ";
            }
        }
        std::cout << std::endl;
    }

    std::cout << std::setw(5) << "";
    for (size_t i = 0; i < candlesticks.size(); ++i) {
        std::cout << std::setw(labelWidth) << "---";
    }
    std::cout << std::endl;

    std::cout << std::setw(5) << "";
    for (const auto& candle : candlesticks) {
        std::cout << std::setw(labelWidth) << candle.period;
    }
    std::cout << std::endl;
}
