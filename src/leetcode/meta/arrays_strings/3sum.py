class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        triplets = []
        number_map = {}
        zero, negative, positive = [], [], []

        for num in nums:
            if num > 0: 
                positive.append(num)
            elif num < 0:
                negative.append(num)
            else:
                zero.append(num)
            
            if num not in number_map:
                number_map[num] = True

        if len(zero) > 0:
            for positive_num in set(positive):
                if -positive_num in number_map:
                    triplets.append([-positive_num, 0, positive_num])
            
            if len(zero) >= 3:
                triplets.append([0, 0, 0])

        for i, positive_num in enumerate(positive):
            for j, positive_pair in enumerate(positive[i+1:]):
                complement = -(positive_num + positive_pair)
                if complement in number_map:
                    triplets.append([complement, positive_num, positive_pair])

        for i, negative_num in enumerate(negative):
            for j, negative_pair in enumerate(negative[i+1:]):
                complement = -(negative_num + negative_pair)
                if complement in number_map:
                    triplets.append([negative_num, negative_pair, complement])
        
        return triplets
