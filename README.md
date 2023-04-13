<body>
	<h1>Monte Carlo Pi Estimation</h1>
	<p>The Monte Carlo Pi Estimation is a simple program that uses the Monte Carlo method to estimate the value of pi. The program generates a large number of random points and determines the number of points that fall within a circle inscribed in a square. The ratio of the number of points within the circle to the total number of points generated is used to estimate the value of pi.</p>
	<h2>System Requirements</h2>
	<ul>
		<li>Windows or Linux operating system</li>
		<li>C++ compiler</li>
		<li>Graphics.h library</li>
	</ul>
	<h2>Installation and Setup</h2>
	<ol>
		<li>Download and install a C++ compiler on your system.</li>
		<li>Download the graphics.h library and install it on your system.</li>
		<li>Download the Monte Carlo Pi Estimation program file (<code>montecarlo.cpp</code>) and save it to a directory of your choice.</li>
		<li>Compile the program using the following command:<br><code>gcc -pi montecarlo.cpp -lstdc++ -lgraph</code></li>
		<li>On Windows, run the compiled executable file (<code>pi.exe</code>) from the command prompt or double-click on it to run it.</li>
		<li>On Linux, run the compiled executable file (<code>pi.out</code>) from the terminal using the following command:<br><code>./pi.out</code></li>
	</ol>
	<h2>Usage</h2>
	<p>After running the program, you will be prompted to enter the number of iterations to perform for the pi estimation. Enter a positive integer value and press Enter.</p>
	<p>The program will display a circle inscribed in a square on the screen, with the center of the circle at (300, 300) and a radius of 200. The program will generate random points within the square and plot them on the screen. Points that fall within the circle will be colored green, while points that fall outside the circle will be colored red.</p>
	<p>After all the points have been generated and plotted, the program will calculate the estimated value of pi based on the ratio of the number of points within the circle to the total number of points generated. The estimated value of pi will be displayed on the screen.</p>
</body>


 <body>
    <h1>Four-Digit Poker Test</h1>
    <p>The Four-Digit Poker Test is a statistical test used to determine if a set of randomly generated numbers is independent or not. The test involves generating a large number of four-digit integers and counting the frequency of certain combinations of digits. The observed frequencies are then compared to the expected frequencies, and a chi-squared test is performed to determine if the differences between the observed and expected frequencies are significant.</p>
    <h2>How to Use</h2>
<p>To use the Four-Digit Poker Test, follow these steps:</p>
<ol>
  <li>Compile and run the program on your computer. The program requires the user to input the number of numbers generated, as well as the observed frequencies of the following combinations of digits:</li>
    <ul>
      <li>Four different digits</li>
      <li>Four of a kind</li>
      <li>Three of a kind</li>
      <li>One pair</li>
      <li>Two pair</li>
    </ul>
  <li>After the user inputs the observed frequencies, the program calculates the expected frequencies based on the probabilities of each combination of digits occurring.</li>
  <li>The program then performs a chi-squared test on the observed and expected frequencies to determine if the generated random numbers are independent or not. If the calculated chi-squared value is less than or equal to the tabulated value for chi-squared, then the numbers are considered independent. Otherwise, they are considered dependent.</li>
</ol>

<h2>Interpreting Results</h2>
<p>If the program determines that the generated random numbers are independent, this means that the numbers are truly random and do not depend on any previous numbers generated. If the numbers are dependent, this means that there is some pattern or correlation between the generated numbers, indicating that they are not truly random.</p>
<p>It is important to note that the Four-Digit Poker Test is not foolproof and can only detect certain types of non-randomness. In addition, the test may produce false positives or false negatives, depending on the quality of the random number generator used and the sample size.</p>

<h2>References</h2>
<ul>
  <li>Knuth, D. (1981). The Art of Computer Programming, Volume 2 (2nd ed.). Addison-Wesley.</li>
  <li>NIST. (2021). <i>Four-Digit Poker Test</i>. Retrieved from <a href="https://nvlpubs.nist.gov/nistpubs/Legacy/SP/nistspecialpublication800-22r1a.pdf">https://nvlpubs.nist.gov/nistpubs/Legacy/SP/nistspecialpublication800-22r1a.pdf</a></li>
</ul>
 </body>
 
 
 <body>
	<h1>Chemical Reaction Simulation User Manual</h1>
	<p>This program simulates the chemical reaction between two reactants (C1 and C2) to produce a product (C3).</p>
less
Copy code
<h2>Program Inputs</h2>
<ul>
	<li><strong>k1:</strong> Rate constant for the reaction between C1 and C2</li>
	<li><strong>k2:</strong> Rate constant for the decomposition of C3</li>
	<li><strong>c1(0):</strong> Initial concentration of C1</li>
	<li><strong>c2(0):</strong> Initial concentration of C2</li>
	<li><strong>c3(0):</strong> Initial concentration of C3</li>
	<li><strong>delta:</strong> Small increment of time</li>
	<li><strong>time:</strong> Total simulation time</li>
</ul>

<h2>Program Outputs</h2>
<p>The program outputs the concentration of C1, C2, and C3 at each time increment, as well as a text file ("lab01.txt") containing the same data.</p>

<h2>Graphing the Data</h2>
<p>To graph the data, open the "lab01.txt" file in a spreadsheet program (such as Microsoft Excel or Google Sheets) and plot the concentration of each species over time.</p>

</body>
