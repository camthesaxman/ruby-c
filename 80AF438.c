int sub_80AF438()
{
  unsigned int v0; // r5@1
  int v1; // r3@2
  char v2; // r1@4
  char v3; // r4@4
  char v4; // r2@4
  char v5; // r2@6
  unsigned int v6; // r5@9
  __int16 v7; // r2@10
  int v9; // [sp+1Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = 28 * v0 + 33657440;
    *(_WORD *)(v1 + 2) = 0;
    *(_WORD *)v1 = 0;
    *(_BYTE *)(v1 + 18) = 0;
    if ( *(_BYTE *)(28 * v0 + 0x201926C) & 6 )
      *(_BYTE *)(28 * v0 + 0x201926C) = *(_BYTE *)(28 * v0 + 0x201926C) & 0xF9 | 2
                                                                               * ((((unsigned int)*(_BYTE *)(28 * v0 + 0x201926C) << 29 >> 30)
                                                                                 - 1) & 3);
    *(_BYTE *)(28 * v0 + 0x201926E) = 0;
    v2 = *(_BYTE *)(28 * v0 + 0x2019270) & 0xFE;
    *(_BYTE *)(28 * v0 + 0x201926F) = 0;
    v3 = *(_BYTE *)(28 * v0 + 0x201926C) & 0xFE;
    *(_BYTE *)(28 * v0 + 0x201926C) = v3;
    *(_BYTE *)(28 * v0 + 0x2019273) = -1;
    *(_BYTE *)(28 * v0 + 0x2019274) = -1;
    *(_BYTE *)(28 * v0 + 0x2019270) = v2 & 0xC1;
    *(_BYTE *)(28 * v0 + 0x2019275) = (*(_BYTE *)(28 * v0 + 0x2019275) & 0xFB | 4
                                                                              * (*(_BYTE *)(28 * v0 + 0x2019275) & 1)) & 0xFE;
    v4 = *(_BYTE *)(28 * v0 + 0x2019271) & 0xDC;
    *(_BYTE *)(28 * v0 + 0x2019271) = v4;
    if ( v4 & 4 )
    {
      *(_BYTE *)(28 * v0 + 0x201926C) = v3 & 0xF9 | 2;
      *(_BYTE *)(28 * v0 + 0x2019271) = v4 & 0xFB;
    }
    v5 = *(_BYTE *)(28 * v0 + 0x2019271);
    if ( *(_BYTE *)(28 * v0 + 0x2019271) & 8 )
    {
      *(_BYTE *)(28 * v0 + 0x201926B) |= 0x80u;
      *(_BYTE *)(28 * v0 + 0x2019271) = v5 & 0xF7;
    }
    *(_BYTE *)(28 * v0 + 0x2019271) &= 0xEFu;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 3 );
  v6 = 0;
  do
  {
    v7 = *(_WORD *)(28 * v6 + 0x2019266);
    *(_WORD *)(28 * v6 + 0x2019268) = v7;
    *(_WORD *)(2 * v6 + 8 * v2019205 + 0x2019220) = v7;
    *(_BYTE *)(v6 + 4 * v2019205 + 33657416) = contest_get_move_excitement(*(_WORD *)(28 * v6 + 0x2019266));
    *(_WORD *)(28 * v6 + 0x2019266) = 0;
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 <= 3 );
  v2019329 &= 0xFEu;
  return v9;
}
