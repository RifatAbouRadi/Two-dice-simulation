# Two-dice-simulation


This program simulates rolling two dice many times and records how often each possible sum (from 2 to 12) appears.
It demonstrates probability distribution through random simulation.

📌 Description

The program rolls two dice 50,000 times.
For each roll:

Die 1 → random number between 1 and 6

Die 2 → random number between 1 and 6

The sum of the two dice is calculated

The program increments the counter for the corresponding sum

After all rolls are completed, the program prints how many times each sum (2–12) occurred.

This shows the classic probability pattern where 7 appears most often because it has the highest number of combinations.

🧠 Expected Behavior

Because some sums can be formed in more ways than others:

7 is the most common sum

2 and 12 are the least common (each has only one combination)

Your output will look something like:

 2: 1389
 3: 2778
 ...
12: 1389

🎲 Before running: which sum appears the most?

Sum 7 is the most common.
It has 6 different ways to appear, more than any other sum.

Values will vary slightly because of randomness.

💻 How to Compile and Run
gcc dice_simulation.c -o dice
./dice
