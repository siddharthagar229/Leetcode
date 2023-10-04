<h2><a href="https://leetcode.com/problems/find-all-possible-recipes-from-given-supplies/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>2115. Find All Possible Recipes from Given Supplies</a></h2><h3>Medium</h3><hr><div><p>You have information about <code>n</code> different recipes. You are given a string array <code>recipes</code> and a 2D string array <code>ingredients</code>. The <code>i<sup>th</sup></code> recipe has the name <code>recipes[i]</code>, and you can <strong>create</strong> it if you have <strong>all</strong> the needed ingredients from <code>ingredients[i]</code>. Ingredients to a recipe may need to be created from <strong>other </strong>recipes, i.e., <code>ingredients[i]</code> may contain a string that is in <code>recipes</code>.</p>

<p>You are also given a string array <code>supplies</code> containing all the ingredients that you initially have, and you have an infinite supply of all of them.</p>

<p>Return <em>a list of all the recipes that you can create. </em>You may return the answer in <strong>any order</strong>.</p>

<p>Note that two recipes may contain each other in their ingredients.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> recipes = ["bread"], ingredients = [["yeast","flour"]], supplies = ["yeast","flour","corn"]
<strong>Output:</strong> ["bread"]
<strong>Explanation:</strong>
We can create "bread" since we have the ingredients "yeast" and "flour".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> recipes = ["bread","sandwich"], ingredients = [["yeast","flour"],["bread","meat"]], supplies = ["yeast","flour","meat"]
<strong>Output:</strong> ["bread","sandwich"]
<strong>Explanation:</strong>
We can create "bread" since we have the ingredients "yeast" and "flour".
We can create "sandwich" since we have the ingredient "meat" and can create the ingredient "bread".
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> recipes = ["bread","sandwich","burger"], ingredients = [["yeast","flour"],["bread","meat"],["sandwich","meat","bread"]], supplies = ["yeast","flour","meat"]
<strong>Output:</strong> ["bread","sandwich","burger"]
<strong>Explanation:</strong>
We can create "bread" since we have the ingredients "yeast" and "flour".
We can create "sandwich" since we have the ingredient "meat" and can create the ingredient "bread".
We can create "burger" since we have the ingredient "meat" and can create the ingredients "bread" and "sandwich".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == recipes.length == ingredients.length</code></li>
	<li><code>1 &lt;= n &lt;= 100</code></li>
	<li><code>1 &lt;= ingredients[i].length, supplies.length &lt;= 100</code></li>
	<li><code>1 &lt;= recipes[i].length, ingredients[i][j].length, supplies[k].length &lt;= 10</code></li>
	<li><code>recipes[i], ingredients[i][j]</code>, and <code>supplies[k]</code> consist only of lowercase English letters.</li>
	<li>All the values of <code>recipes</code> and <code>supplies</code>&nbsp;combined are unique.</li>
	<li>Each <code>ingredients[i]</code> does not contain any duplicate values.</li>
</ul>
</div>