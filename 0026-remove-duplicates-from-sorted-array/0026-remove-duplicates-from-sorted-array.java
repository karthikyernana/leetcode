// class Solution {
//     public int removeDuplicates(int[] nums) {

//         LinkedHashSet<Integer> lHM = new LinkedHashSet<>(); 
//         for(int i = 0; i < nums.length; i++)
//         {
//             lHM.add(nums[i]);


//         }
//         int i = 0;
//         for(int elem : lHM)
//         {
//             nums[i++] = elem;

//         }
//         return lHM.size();
        
//     }
// }



class Solution {
    public int removeDuplicates(int[] nums) {
        int n = nums.length;
        if(n == 1)
        {
            return 1;
        }

        int left = 0;
        int right = 1;

        while(right < n)
        {
            if(nums[right] == nums[left])
            {
                right++;
            }
            else
            {
                left++;
                nums[left] = nums[right];
            }
        }

        return left + 1;


    }
}