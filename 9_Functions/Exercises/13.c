int evaluate_position(char board[8][8]){
    int white = 0, black = 0;
    for (int i = 0; i < 8; i++) 
    {
        for(int j = 0; j < 8; j++) 
        {
            switch (board[i][j])
            {
            case 'K': case 'Q':
                white += 9;
                break;
            
            

            case 'Q':
                white += 9;
                break;
            
            default:
                break;
            }
        }
    }

    return white - black;
}