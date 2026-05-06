#include "Candlestick.h"
#include <iostream>
#include <vector>
#include <string>

Candlestick::Candlestick(const std::string& p, double o, double h, double l, double c)
    : period(p), open(o), high(h), low(l), close(c) {}

std::vector<Candlestick> filterCandlesticksByDate(
    const std::vector<Candlestick>& candlesticks, const std::string& startDate, const std::string& endDate) {
    std::vector<Candlestick> filtered;
    for (const auto& candle : candlesticks) {
        if (candle.period >= startDate && candle.period <= endDate) {
            filtered.push_back(candle);
        }
    }
    return filtered;
}

std::vector<Candlestick> filterCandlesticksByTemperature(
    const std::vector<Candlestick>& candlesticks, double minTemp, double maxTemp) {
    std::vector<Candlestick> filtered;
    for (const auto& candle : candlesticks) {
        if (candle.high <= maxTemp && candle.low >= minTemp) {
            filtered.push_back(candle);
        }
    }
    return filtered;
}

std::vector<Candlestick> predictFutureCandlesticks(const std::vector<Candlestick>& candlesticks, int periods) {
    std::vector<Candlestick> predictions;
    if (candlesticks.size() < periods) {
        std::cerr << "Not enough data for prediction." << std::endl;
        return predictions;
    }

    for (size_t i = 0; i < candlesticks.size() - periods + 1; ++i) {
        double weightedSumOpen = 0, weightedSumHigh = 0, weightedSumLow = 0, weightedSumClose = 0;
        double totalWeight = 0;

        for (int j = 0; j < periods; ++j) {
            double weight = periods - j; // Higher weight for recent periods
            weightedSumOpen += candlesticks[i + j].open * weight;
            weightedSumHigh += candlesticks[i + j].high * weight;
            weightedSumLow += candlesticks[i + j].low * weight;
            weightedSumClose += candlesticks[i + j].close * weight;
            totalWeight += weight;
        }

        predictions.emplace_back(
            "Predicted " + std::to_string(i + periods),
            weightedSumOpen / totalWeight,
            weightedSumHigh / totalWeight,
            weightedSumLow / totalWeight,
            weightedSumClose / totalWeight
        );
    }

    return predictions;
}
