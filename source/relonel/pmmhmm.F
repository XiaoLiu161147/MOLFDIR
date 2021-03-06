
      SUBROUTINE PMMHMM(N,HR,HI,M,NN,AR,AI,MM,BR,BI)
      IMPLICIT REAL*8 (A-H, O-Z)
C
C     ======================================================
C     MULTIPLY LOWER TRIANGLE OF HERMITIAN MATRIX H(N,N)
C     WITH RECTANGULAR COMLEX MATRIX A(N,M) AND PUT THE
C     RECTANGULAR RESULT IN B(N,M)
C     N---FIRST DIMENSION OF RECTANGULAR MATRICES AR...BI,AND
C         OF THE HERMITIAN MATRIX H
C     NN--FIRST DIMENSION OF MATRICES AR AND AI AS DECLARED IN
C         THE CALLING PROGRAM
C     AR--REAL PART OF RECTANGULAR MATRIX A
C     AI--IMAGINARY PART OF RECT.  MATRIX A
C     M---SECOND DIMENSION OD RECTANGULAR MATRICES AR...BI
C     HR--REAL PART OF HERMITIAN MATRIX H
C     HI--IMAGINARY PART OF HERM.MATRIX H
C     MM--FIRST DIMENSION OF THE MATRICES BR AND BI AS DECLARED
C         IN THE CALLING PROGRAM
C     BR--REAL PART OF THE RESULT MATRIX
C     BI--IMAGINARY PART OF THE RESULT MATRIX
C     THE MATRICES HR AND HI ARE TO BE GIVEN AS LINEAR ARRAY'S
C     ========================================================
      DIMENSION AR(NN,M),AI(NN,M),BR(MM,M),BI(MM,M)
      DIMENSION HR(N*(N+1)/2),HI(N*(N+1)/2)
      DO 40 I=1,M
      DO 30 K=1,N
      SUMR=0.0
      SUMI=0.0
      L=K*(K-1)/2
      DO 10 J=1,K
      L=L+1
      SUMR=SUMR+AR(J,I)*HR(L)-AI(J,I)*HI(L)
      SUMI=SUMI+AR(J,I)*HI(L)+AI(J,I)*HR(L)
   10 CONTINUE
      DO 20 J=K+1,N
      L=L+J-1
      SUMR=SUMR+AR(J,I)*HR(L)+AI(J,I)*HI(L)
      SUMI=SUMI-AR(J,I)*HI(L)+AI(J,I)*HR(L)
   20 CONTINUE
      BR(K,I)=SUMR
      BI(K,I)=SUMI
   30 CONTINUE
   40 CONTINUE
      RETURN
      END
