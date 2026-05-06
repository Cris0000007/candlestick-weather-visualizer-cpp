#ifndef CANDLESTICK_H
#define CANDLESTICK_H

#include <string>
#include <vector>

struct Candlestick {
    std::string period; // Time period (e.g., 1980-01)
    double open;
    double high;
    double low;
    double close;

    Candlestick(const std::string& p, double o, double h, double l, double c);
};

std::vector<Candlestick> filterCandlesticksByDate(
    const std::vector<Candlestick>& candlesticks, const std::string& startDate, const std::string& endDate);

std::vector<Candlestick> filterCandlesticksByTemperature(
    const std::vector<Candlestick>& candlesticks, double minTemp, double maxTemp);

std::vector<Candlestick> predictFutureCandlesticks(const std::vector<Candlestick>& candlesticks, int periods);

#endif // CANDLESTICK_H
