class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        
        if 0 in arr: arr.remove(0)
        return any(2*i in arr for i in arr)
        