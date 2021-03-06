C
C     DEFINITION PARAMETERS RELONEL:
C
C     N1  NUMBER OF NUCLEI
C     N2  BUFFER LENGTH
C     N3  NUMBER OF SINGLE GAUSSIANS PER CONTRACTED FUNCTION
C     N5  NUMBER OF DIFFERENT L-VALUES FOR BASISFUNCTIONS
C     N6  NUMBER OF DIFFERENT L-VALUES TIMES MULTIPLICITY OF L
C     N7  SUM OVER UNIQUE NUCLEI TIMES NUMBER OF DIFF.FUNC. TYPES
C     N8  NUMBER OF COEFFICIENTS FOR AO'S IN SYMM.ADAPT.ORBITALS
C     N9  NUMBER OF SYMMETRY ADAPTED FUNCTIONS (.LT.2*N7)
C     N10 NUMBER OF COEFF. FOR GAUSSIANS IN SYMM.ADPT.ORBITALS
C     N12 NUMBER OF SYMMETRY FUNCTIONS
C     (NUMBER MEANS MAXIMUM NUMBER)
C
      PARAMETER (N5=6,N6=N5*(N5+1)*(N5+2)/6)
      PARAMETER (MAXECP=5,MAXFUN=MAXECP*(MAXECP+1)*(MAXECP+2)/6)
      PARAMETER (MAXUC=60,MAXATOM=15,MAXCOM=300)
      PARAMETER (N1=100,N2=510,N3=45)
      PARAMETER (N7=550,N8=20000,N9=2*N7,N10=40000,N12=4000)
      PARAMETER (N14=700,N15=15500,N16=3500000)
      PARAMETER (MXBA=300)
      PARAMETER (N16I=160000)
      PARAMETER (NBFST=100)
      PARAMETER (NEX=1500)
C
C     DEFINITION PROGRAM COMMON BLOCKS
C
      COMMON/SBD/NUCOP(N1,48),ITYPOP(3,48),ISN(48,3),INDXX(48,3)
      COMMON/GEOM/XCORD(N1),YCORD(N1),ZCORD(N1)
      COMMON/BASR/ZNUC(N1),RNUC(N1),CTRANA(N10),CTRANB(N10)
      COMMON/BUF/B1(2*N2),B2(2*N2),B3(2*N2)
      COMMON/BASI/INDCOM(N7+1),INDBAS(N14+1),INDSYM(N14+1),INDORB(N12+1)
     $            ,KCOMB(N14),NBSYM1(16),NBSYM2(16),NBSYM(0:16)
     $            ,ICENT(N7),ITYPE(N7),ICOMOP(N7,48),KSYMRP(N12),
     $            LSYMRP(N12),MULTAB(16,16),INDTWO(17),ITRAN(N10),
     $            KSYMF(N12),INDB(N12)
      COMMON/NLM/NR(N6,3)
      COMMON/BAS2/KCBINV(N7,2)
      COMMON/OEC/ALPHA(N15),COEFF(N15)
      COMMON/REG/G(N16)
      COMMON/IG/INTG(N16I)
      COMMON/CON/PI,PIROOT,TWOPI,PITERM,DNORM,ENORM,OVLAPL,OVLAPS
      COMMON/CHAR/NAME,T,D,VERSION,REPN(16)
      COMMON/TWOCOMP/TWOC
      COMMON/GAUSNUC/GNUC
      COMMON/IPRINT/IEIGEN,IKINBL,NAREP
      COMMON/CNT/NEQ1,NEQUIV,NSYMRP,NSYMOP,NNUCL,NCOEFF,INTONE
     $           ,NWRDS1,NWRDS2,NWRDS3
      COMMON/R/AR(3),BR(3),CR(3),DR(3)
      COMMON/GAMINC/F0,F1,F2,F3,F4,F5,F6,F7,F8,F9,F10,F11,F12,
     $              X1,X3,X5,X7,X9,X11,X13,X15,X17,X19,X21,X23,X25
C
      LOGICAL TWOC,GNUC
      COMPLEX*16 CTRANA,CTRANB
      CHARACTER*8  NAME*80,T,D*10,VERSION*10,REPN*14
