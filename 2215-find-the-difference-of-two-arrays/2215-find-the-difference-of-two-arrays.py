class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        l1=[]
        l2=[]
        l=[]
        st1={}
        st2={}
        for i in range(len(nums1)):
            if(nums1[i] not in nums2):
                l1.append(nums1[i])
        st=set(l1)
        l1=list(st)
        
            
        l.append(l1)
        
        for i in range(len(nums2)):
            if(nums2[i] not in nums1):
                l2.append(nums2[i])
        
        st=set(l2)
        l2=list(st)

        l.append(l2)
        
        
        return l
        