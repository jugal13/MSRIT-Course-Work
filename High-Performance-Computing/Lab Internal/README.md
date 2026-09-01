# Lab Internals 

## CUDA programs

1. [Write a CUDA program for adding two vectors.](CUDA/1.&#32;Adding&#32;Two&#32;Vectors.cu)

2. [Write a CUDA program to demonstrate different types of memory.](CUDA/2.&#32;Demonstrate&#32;Memory.cu)

3. [Write a CUDA program to print the message “Hello World” and demonstrate threads by varying BLOCK_WIDTH to different sizes.](CUDA/3.&#32;Block&#32;Sizes&#32;Hello&#32;World.cu)

4. [Write a CUDA program to print the message “Hello World” and demonstrate threads by varying ThreadId to different sizes.](CUDA/4.&#32;Thread&#32;Id&#32;Hello&#32;World.cu)

5. [Write a CUDA program to multiply two matrices](CUDA/5.&#32;Multiply&#32;Two&#32;matrices.cu)

## Open MP

1. [Write an OpenMP program to multiply two matrices A & B and find the resultant matrix C](1.&#32;Matrix&#32;Multiplication.c)

2. [Write an OpenMP program to show how first private clause works.(Factorial program)](2.&#32;Factorial&#32;First&#32;Private.c)

3. [Write an OpenMP program to find the number of processes, number of threads, etc (the environment information).](3.&#32;Environment.c)

4. [Write an OpenMP program to find the largest element in an array using locks](4.&#32;Largest&#32;using&#32;Locks.c)

5. [Write an OpenMP program which performs C=A+B & D=A-B in separate blocks/sections where A,B,C & D are arrays.](5.&#32;Blocks.c)

6. [Write an OpenMP program to find prime numbers (split)](6.&#32;Prime&#32;numbers&#32;(split).c)

7. [Write an OpenMP program to add all the elements of two arrays A & B each of size 1000 and store their sum in a variable using reduction clause.](7.&#32;Reduction.c)

8. [Write an OpenMP program to find the largest element in an array using critical section.](8.&#32;Critical&#32;Section.c)

9. [Write an OpenMP program to show how thread private clause works.](9.&#32;Thread&#32;Private.c)

10. [Write an OpenMP program to perform addition of two arrays A & B store the result in the array C(scheduling concept)](10.&#32;Addition&#32;of&#32;two&#32;arrays.c)

## MPI

1. [Write a MPI program where each processor sends an integer number and its rank to the master processor, where the master gathers all the information and prints the data accordingly](1.&#32;Gather.c)

2. [Write an MPI program where the master processor broadcasts a message “HELLO MSRIT” to the remaining processors using broadcast system call.](2.&#32;Bcast&#32;Barrier.c)

3. [Write a MPI program to find sum of 'n' integers on 'p' processors using point-to-point communication libraries call](3.&#32;P2P.c)

4. [Write a MPI program to calculate and print the value of PI.](4.&#32;PI.c)

5. [Write a MPI program to send the message from a process whose rank=3 to all other remaining processes.](5.&#32;Send&#32;&&#32;Recv.c)

6. [Write a MPI program where each processor send a string and its rank to the master processor, where the master gathers all the information and prints the data accordingly](6.&#32;Gather.c)

7. [Write a MPI program scatter the information to different processes.](7.&#32;Scatter.c)