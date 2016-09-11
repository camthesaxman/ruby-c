int sub_80BC300()
{
  int v0; // r10@1
  int v1; // r6@1
  unsigned int v2; // r4@2
  int v3; // r2@4
  unsigned int v4; // r4@6
  int v5; // r8@6
  unsigned int *v6; // r2@6
  int v7; // r2@8
  int v8; // r2@8
  int v9; // r2@8
  unsigned __int16 v11; // [sp+0h] [bp-2Ch]@2
  int v12; // [sp+8h] [bp-24h]@7
  int v13; // [sp+28h] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  do
  {
    v2 = 0;
    v11 = v1 + 1;
    do
    {
      *(_WORD *)(2 * (4 * v1 + v2) + 0x2027188) = 0;
      v2 = (v2 + 1) & 0xFFFF;
    }
    while ( v2 <= 3 );
    *(_WORD *)(2 * v1 + 0x20271B8) = 0;
    *(_WORD *)(2 * v1 + 0x20271C4) = 0;
    *(_BYTE *)(v1 + 33714640) = 0;
    *(_DWORD *)(4 * v1 + 0x2027170) = 0;
    *(_BYTE *)(v1 + 33714646) = 0;
    if ( GetMonData((int)&dword_3004360[25 * v1], 11, 0) && !GetMonData((int)&dword_3004360[25 * v1], 45, v3) )
    {
      v4 = 0;
      v5 = 4 * v0;
      v6 = dword_3004360;
      do
      {
        v12 = (int)v6;
        *(_WORD *)(2 * (v5 + v4) + 0x2027188) = GetMonData((int)&v6[25 * v1], v4 + 13, (int)v6);
        v4 = (v4 + 1) & 0xFFFF;
        v6 = (unsigned int *)v12;
      }
      while ( v4 <= 3 );
      *(_WORD *)(2 * v0 + 0x20271B8) = GetMonData((int)&dword_3004360[25 * v1], 11, v12);
      *(_WORD *)(2 * v0 + 0x20271C4) = GetMonData((int)&dword_3004360[25 * v1], 12, v7);
      *(_BYTE *)(v0 + 33714640) = GetMonData((int)&dword_3004360[25 * v1], 56, 33714628);
      *(_DWORD *)(4 * v0 + 0x2027170) = GetMonData((int)&dword_3004360[25 * v1], 0, v8);
      *(_BYTE *)(v0 + 33714646) = sub_80BC298((int)&dword_3004360[25 * v1], v5 + 33714544, v9);
      v0 = (unsigned __int16)(v0 + 1);
    }
    v1 = (unsigned __int16)(v1 + 1);
  }
  while ( v11 <= 5u );
  return v13;
}
