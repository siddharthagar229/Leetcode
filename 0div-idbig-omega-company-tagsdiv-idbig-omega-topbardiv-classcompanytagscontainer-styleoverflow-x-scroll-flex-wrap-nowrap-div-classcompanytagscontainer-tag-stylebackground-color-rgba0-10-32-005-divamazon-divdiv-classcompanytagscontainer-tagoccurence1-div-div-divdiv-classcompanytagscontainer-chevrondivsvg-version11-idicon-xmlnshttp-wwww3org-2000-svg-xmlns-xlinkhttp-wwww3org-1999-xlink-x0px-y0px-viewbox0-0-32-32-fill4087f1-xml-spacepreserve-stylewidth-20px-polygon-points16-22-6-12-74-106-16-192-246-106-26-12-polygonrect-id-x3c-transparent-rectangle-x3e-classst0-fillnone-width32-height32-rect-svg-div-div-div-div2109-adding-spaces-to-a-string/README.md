<h2><a href="https://leetcode.com/problems/adding-spaces-to-a-string/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Amazon</div><div class="companyTagsContainer--tagOccurence">1</div></div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>2109. Adding Spaces to a String</a></h2><h3>Medium</h3><hr><div><p>You are given a <strong>0-indexed</strong> string <code>s</code> and a <strong>0-indexed</strong> integer array <code>spaces</code> that describes the indices in the original string where spaces will be added. Each space should be inserted <strong>before</strong> the character at the given index.</p>

<ul>
	<li>For example, given <code>s = "EnjoyYourCoffee"</code> and <code>spaces = [5, 9]</code>, we place spaces before <code>'Y'</code> and <code>'C'</code>, which are at indices <code>5</code> and <code>9</code> respectively. Thus, we obtain <code>"Enjoy <strong><u>Y</u></strong>our <u><strong>C</strong></u>offee"</code>.</li>
</ul>

<p>Return<strong> </strong><em>the modified string <strong>after</strong> the spaces have been added.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "LeetcodeHelpsMeLearn", spaces = [8,13,15]
<strong>Output:</strong> "Leetcode Helps Me Learn"
<strong>Explanation:</strong> 
The indices 8, 13, and 15 correspond to the underlined characters in "Leetcode<u><strong>H</strong></u>elps<u><strong>M</strong></u>e<u><strong>L</strong></u>earn".
We then place spaces before those characters.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s = "icodeinpython", spaces = [1,5,7,9]
<strong>Output:</strong> "i code in py thon"
<strong>Explanation:</strong>
The indices 1, 5, 7, and 9 correspond to the underlined characters in "i<u><strong>c</strong></u>ode<u><strong>i</strong></u>n<u><strong>p</strong></u>y<u><strong>t</strong></u>hon".
We then place spaces before those characters.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> s = "spacing", spaces = [0,1,2,3,4,5,6]
<strong>Output:</strong> " s p a c i n g"
<strong>Explanation:</strong>
We are also able to place spaces before the first character of the string.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 3 * 10<sup>5</sup></code></li>
	<li><code>s</code> consists only of lowercase and uppercase English letters.</li>
	<li><code>1 &lt;= spaces.length &lt;= 3 * 10<sup>5</sup></code></li>
	<li><code>0 &lt;= spaces[i] &lt;= s.length - 1</code></li>
	<li>All the values of <code>spaces</code> are <strong>strictly increasing</strong>.</li>
</ul>
</div>