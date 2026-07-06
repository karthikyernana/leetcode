class Solution {
    public int removeDuplicates(int[] nums) {

        LinkedHashMap<Integer, Integer> lHM = new LinkedHashMap<>(); 
        for(int i = 0; i < nums.length; i++)
        {
            lHM.put(nums[i], lHM.getOrDefault(nums[i], 0) + 1);


        }
        int i = 0;
        for(int elem : lHM.keySet())
        {
            nums[i++] = elem;

        }
        return lHM.size();
        
    }
}