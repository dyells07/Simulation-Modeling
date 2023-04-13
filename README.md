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
