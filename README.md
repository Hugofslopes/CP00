<p align="center">
    <img src="https://www.42porto.com/wp-content/uploads/2024/08/42-Porto-Horizontal.png"/>
</p>
<h1 align="center">CPP Module 00</h1>
<p align="center">
    <img src="https://github.com/user-attachments/assets/123c3d97-b5e6-4227-9891-3de007036138"/>
</p>

## Summary
This is the first exercise I completed at 42 School using C++, which is an object-oriented language. Some rules are different from now on. We no longer have Norminette, which allows us to organize our code in different ways (so there is no need for functions to have a maximum of 25 lines or to declare variables before assigning values to them). From now on, we are allowed to use for loops, switch cases and ternary operators.

<details>
<summary><b>Ex00</b></summary>
<p align="center">
    <img src="https://github.com/user-attachments/assets/4a4e375f-6e97-4183-b146-522defda271e"/>
</p>
This is the first C++ exercise. The program should print the message inputted by the user in uppercase. If there are no arguments, it will print a predefined message. I applied a for loop and the ternary operator to make the code more concise. These two concepts were forbidden in the 42-School C programs.<br>
The ternary operator is similar to an if/else statement:<br>
<blockquote>
<b>< condition > ? < if true > : < if false ></b>
</blockquote>
The for loop is almost the same as a while loop, but on the same line, we can define the variable that will be the counter, specify the end condition and set the increment. Ex:<br>
<blockquote>
<b>for (size_t i = 0; i < 10; i++)</b>
</blockquote>
</details>

<details>
<summary><b>Ex01</b></summary>
<p align="center">
    <img src="https://github.com/user-attachments/assets/316cc0a3-66cd-4e3c-b1dc-b39cc7a3aea3"/>
</p>
This exercise aims to create a phone book that can hold 8 different contacts. From this, we can determine that two different <b>classes</b> will be implemented, each with its own <b>methods</b>. One class will be Contact and the other will be PhoneBook. The PhoneBook class will inherit from Contact and will contain an array of 8 contacts. Each class will have its own methods declared in the <b>.hpp</b> file and their implementations will be done in the corresponding <b>.cpp</b> file. We also have <b>constructors</b> that are special member functions that allow the creation of an object of a specified class.
</details>

<details>
<summary><b>Ex02</b></summary>
<p align="center">
    <img src="https://github.com/user-attachments/assets/71057245-64c7-407b-96ca-68ebd314221a"/>
</p>
This is not a mandatory exercise, but it is quite interesting to do. We have already received the <b>.hpp</b> file, a <b>test.cpp</b> file and a log file. From this file we need to implement the methods in a <b>.cpp</b> file. Looking at the tests file we learn some new conceps:
<ul>
    <il><b>foreach:</b> </li>
    <il><b>vectors:</b> </li>
    <il><b>iterators:</b> </li>
</ul>
</details>