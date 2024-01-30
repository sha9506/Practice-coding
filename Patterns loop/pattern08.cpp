// *	*	*	*	*	*	*
// 	*	*	*	*	*
// 		*	*	*
// 			*

// https://www.codingninjas.com/studio/problems/reverse-star-triangle_6573685?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=SUBMISSION
void nStarTriangle(int n)
{
    int j;
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (j = 0; j < ((n * 2) - (i * 2) - 1); j++)
        {
            cout << "*";
        }
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}
