bool palindromeRearranging(std::string array) {
	// Create our counters
    int solos = 0;
    int odds = 0;
    int fposition = 0;
    int lposition = 0;
    
    // Sort so that when we use our logic, the array is in order
    std::sort(array.begin(), array.end());
    
    // Loop through for first logic and adding to counters
    // Store first and last position of the character we're at
    for (int i = 0; i < array.size(); i++) {
        fposition = array.find_first_of(array[i]);
        lposition = array.find_last_of(array[i]);
        
        // If the first and last positions are the same, then theres 
       	// only one of that character
        if (fposition == lposition)
            solos++;
        // If (last - first) is an even number, then this letter 
        // occurs ODD number of times
        if ((lposition - fposition) % 2 == 0)
            odds++;
    }
    
    // Final logic
    // If theres more than one solo character AND string is
    // longer than 1 character, it cannot be a palindrome
    if (solos > 1 && array.size() != 1)
        return false;

    // If there's an even number of characters AND more than one letter
    // occurs an odd number of times, it cannot be a palindrome
    if (odds > 1 && array.size() % 2 == 0)
        return false;
    
    return true;
    
}
