## Measurement Methodology

In this experiment, we measured the execution time of different phases of a program.
To do so, we placed a clock() call before and after each phase, then subtracted
the two values and divided by CLOCKS_PER_SEC to obtain the duration in seconds.
This measures CPU time consumed by the process, not real wall-clock time.

For the TOTAL measurement, we did not simply sum the three individual phase times.
Doing so would have ignored the micro-latency between each function call — small
but real overhead that exists between operations. Instead, we started a dedicated
clock at the very beginning of the program, before any phase, and stopped it at
the very end, after all phases completed. This ensures the TOTAL captures the
full CPU time consumed by the program, including any overhead between phases.

All source files were compiled using strict flags:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long

To ensure measurement reliability, the instrumentation program was executed
four times. The recorded TOTAL times were 0.000953s, 0.000982s, 0.000737s,
and 0.000709s, giving an average of 0.000845s. This shows that results are
consistent across runs but not identical, due to OS scheduling and cache effects.

## Observed Performance Differences

We observed that each phase executes in a different amount of time:

-TOTAL seconds: 0.000953
-BUILD_DATA seconds: 0.000271
-PROCESS seconds: 0.000448
-REDUCE seconds: 0.000231

This can be explained by the fact that each phase does not perform the same
operations. The PROCESS phase is the slowest because, in addition to the base
loop, it contains extra arithmetic operations and a conditional check on every
element of the dataset. This increases the number of instructions executed per
iteration compared to BUILD_DATA or REDUCE, which each perform simpler and more
uniform operations.

It is also worth noting that the TOTAL time (0.000953) is slightly greater than
the sum of the three phases (0.000950), which reflects the micro-latency between
function calls that our individual measurements do not capture.

A comparison between two algorithmic implementations was also measured.
The naive algorithm completed in 0.726349 seconds, while the single-pass
algorithm completed in 0.000028 seconds — approximately 25,941 times faster.
This demonstrates that algorithmic choice has a far greater impact on runtime
than any micro-optimization, and by extension, on energy consumption.

## Relation Between Runtime and Energy Consumption

In a world that demands ever faster and more reliable software, efficiency is
a critical concern. Executing tasks faster means the CPU is active for a shorter
period, which directly reduces energy consumption. A reduction in computation
time therefore reduces the total energy used.

At scale, this becomes significant. If this program were executed one million
times per day on a server, the TOTAL time alone would represent:
0.000953 × 1,000,000 = 953 seconds, or approximately 15.8 minutes of
continuous CPU activity per day — just for this small program. Across thousands
of servers or more complex programs, such inefficiencies translate into
measurable energy costs and environmental impact.

## Limitations of the Experiment

Using clock() does not measure real elapsed time — it only captures CPU time
consumed by the process. Additionally, we have no way of knowing the actual
energy in watts used during execution. If the operating system runs other
processes concurrently, this may interfere with our measurements and make
them less reliable. Finally, results may vary between runs due to CPU scheduling
and cache effects, meaning a single measurement is not always fully representative
of the program's true performance.

## Practical Engineering Takeaway

The key takeaway is that efficiency and performance are increasingly important
concerns in software engineering. Writing efficient code leads to faster results,
better resource usage, and a reduced ecological footprint. In the context of
this experiment, the PROCESS phase consumed nearly twice the CPU time of the
REDUCE phase, which shows that algorithmic complexity — even small additions
like an extra condition inside a loop — has a direct and measurable impact on
runtime, and by extension, on energy consumption.