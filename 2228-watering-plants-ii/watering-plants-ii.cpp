class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {

        int n = plants.size();
        int left = 0;
        int right = n - 1;
        int refill = 0;

        int currA = capacityA;
        int currB = capacityB;

        while(left < right)
        {
            // Alice
            if(currA >= plants[left])
            {
                currA -= plants[left];
            }
            else
            {
                refill++;
                currA = capacityA - plants[left];
            }

            // Bob
            if(currB >= plants[right])
            {
                currB -= plants[right];
            }
            else
            {
                refill++;
                currB = capacityB - plants[right];
            }

            left++;
            right--;
        }

        // Middle plant
        if(left == right)
        {
            if(max(currA, currB) < plants[left])
            {
                refill++;
            }
        }

        return refill;
    }
};