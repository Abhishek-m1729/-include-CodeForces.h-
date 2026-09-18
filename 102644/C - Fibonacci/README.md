<h2><a href="https://codeforces.com/contest/102644/problem/C" target="_blank" rel="noopener noreferrer">102644C — Fibonacci</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 102644C](https://codeforces.com/contest/102644/problem/C) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">A. Square</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A square of positive (strictly greater than $$$0$$$) area is located on the coordinate plane, with sides parallel to the coordinate axes. You are given the coordinates of its corners, in random order. Your task is to find the area of the square.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of several testcases. The first line contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of testcases. The following is a description of the testcases.</p><p>Each testcase contains four lines, each line contains two integers $$$x_i, y_i$$$ ($$$-1000\le x_i, y_i\le 1000$$$), coordinates of the corners of the square. </p><p>It is guaranteed that there is a square with sides parallel to the coordinate axes, with positive (strictly greater than $$$0$$$) area, with corners in given points.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer, the area of the square.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009918776454680717" id="id009125660814250864" class="input-output-copier">Copy</div></div><pre id="id009918776454680717"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2</div><div class="test-example-line test-example-line-odd test-example-line-1">4 5</div><div class="test-example-line test-example-line-odd test-example-line-1">1 5</div><div class="test-example-line test-example-line-odd test-example-line-1">4 2</div><div class="test-example-line test-example-line-even test-example-line-2">-1 1</div><div class="test-example-line test-example-line-even test-example-line-2">1 -1</div><div class="test-example-line test-example-line-even test-example-line-2">1 1</div><div class="test-example-line test-example-line-even test-example-line-2">-1 -1</div><div class="test-example-line test-example-line-odd test-example-line-3">45 11</div><div class="test-example-line test-example-line-odd test-example-line-3">45 39</div><div class="test-example-line test-example-line-odd test-example-line-3">17 11</div><div class="test-example-line test-example-line-odd test-example-line-3">17 39</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001724776723010153" id="id006294597804752209" class="input-output-copier">Copy</div></div><pre id="id001724776723010153">9
4
784
</pre></div></div></div>