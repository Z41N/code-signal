bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    return (minmax(yourLeft, yourRight) == minmax(friendsLeft, friendsRight));
}
