signed int DoHandshake()
{
  unsigned int v0; // r5@1
  unsigned int v1; // r6@1
  signed __int16 v2; // r2@2
  unsigned int v3; // r4@4
  unsigned int v4; // r3@5
  char v6; // r0@18

  v0 = 0;
  v1 = 0xFFFF;
  if ( byte_300307E == 1 )
    v2 = -28673;
  else
    v2 = -18016;
  v400012A = v2;
  dword_3003074 = v4000120;
  dword_3003078 = v4000124;
  v4000120 = 0;
  v4000124 = 0;
  byte_300307E = 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = *((_WORD *)&dword_3003074 + v3);
    if ( (v4 & 0xFFFFFFFC) != 47520 && v4 != 36863 )
      break;
    v0 = (v0 + 1) & 0xFF;
    if ( v1 > v4 && *((_WORD *)&dword_3003074 + v3) )
      v1 = *((_WORD *)&dword_3003074 + v3);
    v3 = (v3 + 1) & 0xFF;
    if ( v3 > 3 )
      goto LABEL_13;
  }
  if ( v4 != 0xFFFF )
    v0 = 0;
LABEL_13:
  byte_3003073 = v0;
  if ( v0 <= 1 )
    goto LABEL_23;
  if ( v0 == (unsigned __int8)sHandshakePlayerCount && (unsigned __int16)dword_3003074 == 36863 )
    return 1;
  if ( (unsigned __int8)byte_3003073 <= 1u )
LABEL_23:
    v6 = 0;
  else
    v6 = (v1 & 3) + 1;
  byte_300307F = v6;
  sHandshakePlayerCount = byte_3003073;
  return 0;
}
