#include <stdio.h>

int main()
{
	/* QUESTİON : Get midterm and final grades from the user along with their percentages.
	 Print 1 if successful, 0 if unsuccessful. */

	// SOLUTİON

	int midtermGrade, finalGrade, midtermPercent, successGrade = 60;
	float studentAverage;
	printf("Enter your midterm grade and midterm percentage:");
	scanf("%d%d", &midtermGrade, &midtermPercent);
	printf("Enter your final grade:");
	scanf("%d", &finalGrade);
	printf("Your midterm grade:%d (Percentage:%d), your final grade:%d (Percentage:%d)\n", midtermGrade, midtermPercent,
			finalGrade, 100 - midtermPercent);
	studentAverage = (midtermGrade * midtermPercent + finalGrade * (100 - midtermPercent)) / 100;
	printf("Your Course Average:%.2f\n", studentAverage);
	printf("Your Course Success (1->Successful,0->Failed):%d\n", studentAverage >= successGrade);

	return 0;
}
