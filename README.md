# embedded-quiz
Quiz Submission for Embedded Software Engineer position.

## Problem 1
The main idea is to keep getting the minimum of the two dimensions and cut "across" that dimension till one of the dimension becomes zero.
To run (On Linux):\
`gcc -g problem1.c -o output`\
`./output`

## Problem 2
I have not coded this solution but this is how I would like to approach this problem. Since we have to find a mapping function, I would try to learn this mapping function using machine learning. Concretely, I would consider this as a multi-class classification proble for each of the three characters in the output. I am assuming that these characters fall in the range "A-Z", "a-z", "0-9". So essentially, it would be three classification problems with 62 possible classes for each(26 + 26 + 10). 
I would take a hypothesis function as sigmoid function `(1 / (1 + e^-z))`

## Problem 2

I have not coded this solution but this is how I would like to approach this problem. Since we have to find a mapping function, I would try to learn this mapping function by training using machine learning. Concretely, I would consider this as a multi-class classification problem for each of the three characters in the output. I am assuming that these characters fall in the range "A-Z", "a-z", "0-9". So essentially, it would be three classification problems with 62 possible classes(26 + 26 + 10).
I would take a hypothesis function h(x) as sigmoid function\
`(1 / (1 + e^(-z)))`\
where `z = a*x + b`
x is the values provided in column A.\
Now the task is to find the optimal values of parameters a and b.
To optimize these, the cross entropy loss function could be used\
`J = (-1/m) * (y*log(z) + (1 - y)*log(z))`\
where y are the true values in provided column B and z is the predicted value.

This cost function can be optimized using gradient descent algorithm over the data provided.

I do have a concern about the effectiveness of this algorithm as the data provided is too less to learn these many parameters.

Based on the learned mapping function, two of the questions (a) and (b) can be answered but I am not sure about how can I find the answers to (c) as my solution is based on approximation rather than an absolute solution.
