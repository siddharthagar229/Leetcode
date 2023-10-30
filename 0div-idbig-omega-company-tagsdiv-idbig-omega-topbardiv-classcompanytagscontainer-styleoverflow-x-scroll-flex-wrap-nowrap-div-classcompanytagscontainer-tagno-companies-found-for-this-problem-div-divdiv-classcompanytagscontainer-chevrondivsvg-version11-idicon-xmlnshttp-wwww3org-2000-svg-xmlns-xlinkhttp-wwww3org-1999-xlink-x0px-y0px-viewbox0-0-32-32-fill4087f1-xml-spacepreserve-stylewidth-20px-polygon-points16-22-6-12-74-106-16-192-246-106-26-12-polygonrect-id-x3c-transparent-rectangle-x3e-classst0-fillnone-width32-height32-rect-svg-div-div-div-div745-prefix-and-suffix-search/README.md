<h2><a href="https://leetcode.com/problems/prefix-and-suffix-search/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>745. Prefix and Suffix Search</a></h2><h3>Hard</h3><hr><div><p>Design a special dictionary that searches the words in it by a prefix and a suffix.</p>

<p>Implement the <code>WordFilter</code> class:</p>

<ul>
	<li><code>WordFilter(string[] words)</code> Initializes the object with the <code>words</code> in the dictionary.</li>
	<li><code>f(string pref, string suff)</code> Returns <em>the index of the word in the dictionary,</em> which has the prefix <code>pref</code> and the suffix <code>suff</code>. If there is more than one valid index, return <strong>the largest</strong> of them. If there is no such word in the dictionary, return <code>-1</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input</strong>
["WordFilter", "f"]
[[["apple"]], ["a", "e"]]
<strong>Output</strong>
[null, 0]
<strong>Explanation</strong>
WordFilter wordFilter = new WordFilter(["apple"]);
wordFilter.f("a", "e"); // return 0, because the word at index 0 has prefix = "a" and suffix = "e".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= words.length &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= words[i].length &lt;= 7</code></li>
	<li><code>1 &lt;= pref.length, suff.length &lt;= 7</code></li>
	<li><code>words[i]</code>, <code>pref</code> and <code>suff</code> consist of lowercase English letters only.</li>
	<li>At most <code>10<sup>4</sup></code> calls will be made to the function <code>f</code>.</li>
</ul>
</div>