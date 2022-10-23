class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        set_nums = set(nums)
        n = len(nums)
        S_exp = n * (n + 1) // 2
        S_real = sum(nums)

        d = S_exp - S_real

        # d < 0 => real > exp
        # d > 0 => real < exp

        participants = range(1, n - d + 1) if d > 0 else range(n, d, -1)
        exp = 0
        real = 0

        for real in participants:
            exp = real + d
            set_nums.add(exp)
            if len(set_nums) == n:
                break

        return [real, exp]
        