bool variableName(std::string name) {
    if (isdigit(name[0]))
        return false;
        
    for (int i = 0; i < name.size(); i++) {
        if (!isdigit(name[i]) && !isalpha(name[i]) && name[i] != '_')
            return false;
    }
    
    return true;
    
}
