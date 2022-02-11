# Test Plan and Test Ouput

|Test ID|	HLT ID|	Description|	Exp IN|	Exp OUT|	Actual Out|	PASS/FAIL|
|-------|-------|----------|---------|-------|-------|-------|
T_01|	H_01	|Provide required details for login to book a ticket|	Password|	Successfully logged In|	Successfully logged In|	PASS
T_02	|H_01|	When wrong password is entered|	Password|	Entered Password is wrong|	Entered Password is wrong	|PASS
T_03	|H_02|	Display the details of movie available|	Enter preference|	Display list|	Display list|	PASS
T_04	|H_02|	Purchase a ticket for the movie available|	Enter preference|	ThankYou for Booking Ticket	|ThankYou for Booking Ticket|	PASS
T_05	|H_03|	Summary of a ticket for purchased movie|	Enter preference|	Booking ID,Customer name,Show Name,Hallno,Price|Booking ID,Customer name,Show Name,Hallno,Price|	PASS
T_06	|H_04	|Cancel a ticket|	ID number|	Your ticket is canceled|	Your ticket is canceled|	PASS
T_07	|H_03|	Change the price of ticket (only admin)|	Password|	Please enter new amount|	Please enter new amount|	PASS
T_08	|H_03|	Change the price of ticket after login (only admin)|	Enter new amount -amount|	Price Updated Successfully|	Price Updated Successfully|	PASS
T_09	|H_03|	When wrong password is entered while Changing the amount of ticket (only admin)|	Password	|Entered Password is wrong|	Entered Password is wrong|	PASS
T_10	|H_05|	To view the reserved ticket|	Password|	Summary of ticket|	Summary of ticket|	PASS
T_11	|H_05|	When wrong password is entered to view the reserved ticket|	Correct Password|	Entered Password is wrong|	Entered Password is wrong|	PASS
