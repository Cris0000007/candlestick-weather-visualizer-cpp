#include <iostream>
#include <vector>
#include "Candlestick.h"
#include "Plot.h"

int main() {
    std::vector<Candlestick> candlesticks = {
        Candlestick("1980-01", -1.5, 5.5, -2.1, 3.6),
        Candlestick("1980-02", -0.8, 7.6, -0.8, 6.4),
        Candlestick("1980-03", 6.1, 6.9, -0.0, 6.9),
        Candlestick("1980-04", 7.1, 11.8, 5.1, 7.7),
        Candlestick("1980-05", 9.2, 14.4, 6.9, 9.4)
    };

    std::string startDate = "1980-02";
    std::string endDate = "1980-04";
    auto filteredByDate = filterCandlesticksByDate(candlesticks, startDate, endDate);

    double minTemp = -2.0;
    double maxTemp = 10.0;
    auto filteredByTemperature = filterCandlesticksByTemperature(filteredByDate, minTemp, maxTemp);

    int predictionPeriods = 2;
    auto predictions = predictFutureCandlesticks(filteredByTemperature, predictionPeriods);

    filteredByTemperature.insert(filteredByTemperature.end(), predictions.begin(), predictions.end());

    printTextBasedPlot(filteredByTemperature);

    return 0;
}
