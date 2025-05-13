# 🎓 Student Grading System

A simple C++ program that determines a student’s letter grade based on a given percentage score and displays it using a `switch` statement. The program also validates input using an assertion.

## 📄 Description

This console-based program allows a user to input a student's name and their percentage score (from `0.00` to `100.00`). It then:
* Validates that the score is within an acceptable range using `assert`
* Determines the corresponding letter grade (A–F) using `if-else` logic
* Displays the final grade using a `switch` statement

## 🧾 Example Output
```
Enter the student's name: Sarah Lee
Enter the student's percentage score (0.0-100.00): 76.5
Sarah Lee has a grade of A.
```

If the input is invalid:
```
Enter the student's percentage score (0.0-100.00): 120
Assertion failed: (PERCENTAGE_SCORE >= 0.00 && PERCENTAGE_SCORE <= 100.00), function main, file main.cpp, line 18.
Abort trap: 6
```

## 📘 Notes
* The `assert` statement will cause the program to crash if the score is outside the valid range, helping developers catch errors early during development.
* Edge values like 69.00, 49.00, and 39.00 are intentionally included as condition checks to demonstrate how specific grades might be handled.

## 🛠️ Technologies Used
* Language: C++
* IDE Used: Visual Studio (But any IDE will work)

## 📦 How to Run
1. Clone The Repo Using CMD:
```
git clone https://github.com/UncleH25/Student-Grading-System.git
cd student-grading-system
```

3. From a terminal (in the extracted folder), run:
```
g++ -o student_grading_system main.cpp
./student-grading-system
```

4. Or, if you're using an IDE like Code::Blocks or Visual Studio, open the file and press **Run** or **Build and Run**.

## 📜 License
This project is open source and free to use under the **MIT License**.
