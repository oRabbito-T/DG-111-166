INPUT score
IF score >= 80 THEN grade = "A"
ELSE IF score >= 70 THEN grade = "B"
ELSE IF score >= 60 THEN grade = "C"
ELSE IF score >= 50 THEN grade = "D"
ELSE grade = "F"
END IF
OUTPUT grade

---



START

    INPUT A, B
    IF A > B THEN
        OUTPUT A
    ELSE
        OUTPUT B
    ENDIF
END

---



START
    INPUT N
    i = 1
    WHILE i <= N DO
        OUTPUT N
        i = i + 1
    ENDWHILE
END
