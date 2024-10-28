<h2><a href="https://leetcode.com/problems/remove-methods-from-project/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>3310. Remove Methods From Project</a></h2><h3>Medium</h3><hr><div><p>You are maintaining a project that has <code>n</code> methods numbered from <code>0</code> to <code>n - 1</code>.</p>

<p>You are given two integers <code>n</code> and <code>k</code>, and a 2D integer array <code>invocations</code>, where <code>invocations[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> indicates that method <code>a<sub>i</sub></code> invokes method <code>b<sub>i</sub></code>.</p>

<p>There is a known bug in method <code>k</code>. Method <code>k</code>, along with any method invoked by it, either <strong>directly</strong> or <strong>indirectly</strong>, are considered <strong>suspicious</strong> and we aim to remove them.</p>

<p>A group of methods can only be removed if no method <strong>outside</strong> the group invokes any methods <strong>within</strong> it.</p>

<p>Return an array containing all the remaining methods after removing all the <strong>suspicious</strong> methods. You may return the answer in <em>any order</em>. If it is not possible to remove <strong>all</strong> the suspicious methods, <strong>none</strong> should be removed.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 4, k = 1, invocations = [[1,2],[0,1],[3,2]]</span></p>

<p><strong>Output:</strong> <span class="example-io">[0,1,2,3]</span></p>

<p><strong>Explanation:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2024/07/18/graph-2.png" style="width: 200px; height: 200px;"></p>

<p>Method 2 and method 1 are suspicious, but they are directly invoked by methods 3 and 0, which are not suspicious. We return all elements without removing anything.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 5, k = 0, invocations = [[1,2],[0,2],[0,1],[3,4]]</span></p>

<p><strong>Output:</strong> <span class="example-io">[3,4]</span></p>

<p><strong>Explanation:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2024/07/18/graph-3.png" style="width: 200px; height: 200px;"></p>

<p>Methods 0, 1, and 2 are suspicious and they are not directly invoked by any other method. We can remove them.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 3, k = 2, invocations = [[1,2],[0,1],[2,0]]</span></p>

<p><strong>Output:</strong> <span class="example-io">[]</span></p>

<p><strong>Explanation:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2024/07/20/graph.png" style="width: 200px; height: 200px;"></p>

<p>All methods are suspicious. We can remove them.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= k &lt;= n - 1</code></li>
	<li><code>0 &lt;= invocations.length &lt;= 2 * 10<sup>5</sup></code></li>
	<li><code>invocations[i] == [a<sub>i</sub>, b<sub>i</sub>]</code></li>
	<li><code>0 &lt;= a<sub>i</sub>, b<sub>i</sub> &lt;= n - 1</code></li>
	<li><code>a<sub>i</sub> != b<sub>i</sub></code></li>
	<li><code>invocations[i] != invocations[j]</code></li>
</ul>
</div>