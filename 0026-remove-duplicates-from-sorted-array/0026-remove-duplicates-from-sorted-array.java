class Solution {
    public int removeDuplicates(int[] nums) {

        LinkedHashSet<Integer> lHM = new LinkedHashSet<>(); 
        for(int i = 0; i < nums.length; i++)
        {
            lHM.add(nums[i]);


        }
        int i = 0;
        for(int elem : lHM)
        {
            nums[i++] = elem;

        }
        return lHM.size();
        
    }
}