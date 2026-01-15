2. Derivation for String "0011"

Grammar: S ---> 0S1 | 01
To derive the string 0011, we follow these logical steps:
* Apply the recursive rule: S ---> 0S1
* Substitute the inner $S$ with the terminal rule: $S ---> 0(01)1
* Final String: 0011

 Parse tree Representation:

                   S
		/  |  \
		   
	       0   S    1

	         /   \
		 
		 0    1

