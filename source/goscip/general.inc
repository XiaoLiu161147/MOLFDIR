C
C     DEFINITION GENERAL COMMON BLOCKS GOSCIP
C
      COMMON /DATIN/ NORB,NELEC,IREF,IREFE,NREP,IPRNT
      COMMON /BRINT/ BREIT
      COMMON /DETS/ IDET (N2), NDET
      COMMON /DPTAB/ MULTB(2*N5,0:2*N5),IRPAMO(N1)
      COMMON /CHR/ REPNA(2*N5)
C
      CHARACTER*4 REPNA
      LOGICAL BREIT