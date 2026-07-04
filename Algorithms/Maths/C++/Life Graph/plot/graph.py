from pathlib import Path
import matplotlib.pyplot as plt

# -------------------------------------------------
# Read graph data
# -------------------------------------------------

BASE_DIR = Path(__file__).resolve().parent.parent
DATA_FILE = BASE_DIR / "data" / "graph_data.txt"

ages = []
values = []

with open(DATA_FILE, "r") as file:
    for line in file:
        age, value = map(int, line.split())
        ages.append(age)
        values.append(value)

# -------------------------------------------------
# User current age
# -------------------------------------------------

current_age = int(input("Enter your current age: "))

window = 15

start = max(17, current_age - window)
end = current_age + window

plot_ages = []
plot_values = []

for age, value in zip(ages, values):
    if start <= age <= end:
        plot_ages.append(age)
        plot_values.append(value)

# -------------------------------------------------
# Plot
# -------------------------------------------------

plt.figure(figsize=(16, 7))

plt.plot(
    plot_ages,
    plot_values,
    marker='o',
    linewidth=2,
    markersize=6
)

# Highlight current age
if current_age in plot_ages:

    index = plot_ages.index(current_age)

    plt.scatter(
        plot_ages[index],
        plot_values[index],
        s=150,
        color="red",
        label="Current Age",
        zorder=5
    )

    plt.axvline(
        current_age,
        linestyle="--",
        linewidth=2,
        color="red"
    )

# Write value above every point
for x, y in zip(plot_ages, plot_values):
    plt.text(
        x,
        y + 0.18,
        str(y),
        ha="center",
        fontsize=9
    )

plt.title("Life Graph")
plt.xlabel("Age")
plt.ylabel("Value")

plt.xticks(plot_ages)
plt.yticks(range(10))

plt.grid(alpha=0.3)

plt.legend()

plt.tight_layout()

plt.show()