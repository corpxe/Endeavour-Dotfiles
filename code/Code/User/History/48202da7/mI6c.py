# Step 1: Import required libraries
import matplotlib.pyplot as plt
import numpy as np

# Step 2: Create sample data
x = np.linspace(0, 10, 100)   # 100 points from 0 to 10
y1 = x                        # Line 1
y2 = x**2                     # Line 2
y3 = np.sin(x)                # Line 3

# Step 3: Create figure and subplot
fig, ax = plt.subplots()

# Step 4: Plot 3 different lines with styles and colors
ax.plot(x, y1, color='blue', linestyle='-', label='Linear (y = x)')
ax.plot(x, y2, color='red', linestyle='--', label='Quadratic (y = x^2)')
ax.plot(x, y3, color='green', linestyle=':', label='Sine (y = sin(x))')

# Step 5: Add title and legend
ax.set_title("Sample Multi-Line Plot")
ax.legend()

# Step 6: Show the plot
plt.show()