# otodecks-dj-audio-player-cpp
A C++ DJ audio player application developed using JUCE.

# Text-Based Candlestick Data Visualization and Prediction

A C++ console-based application that visualizes candlestick-style data and performs simple prediction using a weighted moving average. This project demonstrates Object-Oriented Programming concepts, data filtering, prediction logic, and text-based data visualization.

## Project Overview

This program processes candlestick-style data and displays the result in a terminal-friendly format. It allows users to filter data by date or temperature range, generate simple predictions, and view candlestick information using text-based output.

The project was developed using C++ and focuses on applying programming fundamentals such as modular design, header/source file separation, and basic data processing.

## Tech Stack

- C++
- Object-Oriented Programming
- Terminal / Console Output
- Data Filtering
- Basic Prediction Logic

## Key Features

- Filter candlestick data by date, month, or year
- Filter data by temperature range
- Predict future values using weighted moving average
- Display candlestick-style data in text-based terminal output
- Organised project structure using header and source files

## Project Structure

```text
candlestick-weather-visualizer-cpp/
├── Candlestick.h
├── Candlestick.cpp
├── Plot.h
├── Plot.cpp
├── main.cpp
└── README.md
```

## File Description

- `Candlestick.h`  
  Defines the Candlestick structure and declares functions for filtering and prediction.

- `Candlestick.cpp`  
  Implements the logic for filtering data by date, filtering by temperature range, and generating predictions.

- `Plot.h`  
  Declares the function used to generate text-based candlestick plots.

- `Plot.cpp`  
  Implements the logic for displaying candlestick data in a terminal-friendly format.

- `main.cpp`  
  Runs the program, processes sample data, and demonstrates the main features.

## How to Compile and Run

Make sure you have a C++ compiler installed that supports C++11 or above.

### Compile

```bash
g++ -std=c++11 -o candlestick_visualizer main.cpp Candlestick.cpp Plot.cpp
```

### Run

```bash
./candlestick_visualizer
```

For Windows, you may run:

```bash
candlestick_visualizer.exe
```

## Example Output

The program displays candlestick-style information in a text-based format, including high, low, open, close, and predicted values.

```text
Date        Open    High    Low     Close
2023-01     20.5    28.0    18.2    24.1
2023-02     24.1    30.4    21.7    26.8
2023-03     26.8    32.1    23.5    29.0
```

## What I Learned

Through this project, I practised:

- Applying Object-Oriented Programming concepts in C++
- Separating code into header files and source files
- Implementing data filtering logic
- Using weighted moving average for simple prediction
- Creating text-based data visualizations
- Debugging and improving program structure

## Possible Improvements

- Add support for reading data from external CSV files
- Improve the text-based visualization layout
- Add more prediction methods
- Allow user input for filtering options
- Export processed results to a file

## Note

This project was developed as part of my academic programming practice and portfolio.
