       IDENTIFICATION DIVISION.
       PROGRAM-ID. SOLUTION.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 A        PIC 9(10)   VALUE ZEROES.
       01 B        PIC 9(10)   VALUE ZEROES.
       01 STR      PIC X(10).
       01 RES      PIC Z(17)9.

       PROCEDURE DIVISION.
         ACCEPT STR
         MOVE STR TO A 
         ACCEPT STR
         MOVE STR TO B
         ADD A TO B
         MOVE B TO RES
         DISPLAY RES
         STOP RUN. 
