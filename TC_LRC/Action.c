//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'http://www.advantageonlineshopping.com/'", "snapshot=Action_1.inf");
	truclient_step("2", "Wait 3 seconds", "snapshot=Action_2.inf");

	return 0;
}
