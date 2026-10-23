// // Suppose that we call scanf as follows:
// // scanf("%d%f%d", &i, &x, &j);
// // If the user enters
// // 10.3 5 6
// // what will be the values of i, x, and j after the call? (Assume that i and j are int variables
// // and x is a float variable.)

// Answer:
// i will be 10. why not 10.3? because it's an int not a float.
// x will be 0.3
// j will be 5
// and 6 will go for next scanf call.