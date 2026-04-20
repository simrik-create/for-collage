START
  INPUT number
  SET factorial = 1
  IF number < 0 THEN
      PRINT "Factorial not defined for negative numbers"
  ELSE
      FOR i = 1 TO number DO
          factorial = factorial * i
      END FOR
      PRINT "Factorial of", number, "is", factorial
  END IF
END
