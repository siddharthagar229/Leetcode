class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        s = s.split(" ")
        d = {}
        i = 0
        for x in s:
            if x not in d:
                d[x] = i
                i = i + 1
                
        e = {}
        i = 0
        for x in pattern:
            if x not in e:
                e[x] = i
                i = i + 1
        a = ""
        b = ""
        for x in s:
            a = a + str(d[x])
        
        for x in pattern:
            b = b + str(e[x])
            
        return a == b