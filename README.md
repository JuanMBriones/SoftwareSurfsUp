# SoftwareSurfsUp

References

I used STL library 
http://www.cplusplus.com/reference/algorithm/sort/

STL::sort() is used to arrange in a certain way a struct or a vector

Also I used 

STL::vector 
http://www.cplusplus.com/reference/vector/vector/

and fstream
http://www.cplusplus.com/reference/fstream/




REQUIREMENTS

--Inputs--
name1 score1
name2 score2
     .
     .
     .
nameN scoreN

--Procedure--
Compare the scores, using sorting, relate it to the respectively name and show those 3 winners

--Output--

Winners!!
#1 name
#2 name
#3 name


LOGIC
We can use a structure then we just arrenge the score, if we use the follow struct

     struct people {
          string name;
          double score;
     }

then we can use the STL library in order to arrange those structres.


DATATYPE
The surfers' score can be float/double

Input - string & double
Output - string & double
