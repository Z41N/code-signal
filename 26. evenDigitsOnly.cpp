bool evenDigitsOnly(int n) {
    std::string x = std::to_string(n);
    
    for (int i = 0; i < x.size(); i++) {
        if (x[i] % 2 != 0)
            return false;
    }
    
    return true;
    
}
