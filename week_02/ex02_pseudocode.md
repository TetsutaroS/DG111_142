BEGIN [ตรวจสอบเกรด]
INPUT รับ score
IF score >=80? THEN
grade A

ELSE IF score >=60? THEN
grade B

ELSE IF score >=40? THEN
grade C

ELSE IF score >=30? THEN
grade D

ELSE grade F

END IF
OUTPUT Grade
END


---

BEGIN [หาค่าสูงสุดจาก 2 ตัวเลข]
INPUT รับ a ,b
IF a > b? THEN
OUTPUT a
ELSE
OUTPUT b
END IF 
END


---

BEGIN [นับจาก 1 ถึง N]
INPUT รับ n
i = 1
WHILE i <= N DO
OUTPUT print i
i = i + 1
END WHILE
END
