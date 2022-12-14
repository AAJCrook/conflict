public class Main {
    // First Main File, lets say hello to conflict!

    public static void  main(String args[])
    {
        System.out.println("Hello conflict!");
        
        System.out.println("Let's generate an array of tiles for the board, and then print it out!");

        // pieces array (can modify sizes)
        Piece[][] pieces = new Piece[5][5]; 
        // generate blank pieces
        for(int y = 0; y < pieces.length; y++)
        {
            for(int x = 0; x < pieces[0].length; x++)
            {
                pieces[y][x] = new Piece(y, x);
            }
        }
        System.out.println("Testing constructor:");
        Board testBoard = new Board(pieces);

        System.out.println("Testing printout:");
        System.out.print(testBoard);

    }
}
