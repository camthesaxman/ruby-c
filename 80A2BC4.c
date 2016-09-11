signed int __fastcall sub_80A2BC4(unsigned int *a1, int a2)
{
  unsigned int *v2; // r7@1
  unsigned int v3; // r1@1
  char v4; // r1@2
  unsigned int v5; // r3@3
  unsigned int v6; // r3@5
  unsigned int v7; // r3@7
  int v8; // r4@9
  _BYTE *v9; // r2@9
  unsigned int v10; // r0@9
  __int16 v11; // r0@9
  char v13; // [sp+0h] [bp-2Ch]@1
  char v14; // [sp+1h] [bp-2Bh]@1
  unsigned __int8 v15; // [sp+4h] [bp-28h]@1
  unsigned int v16; // [sp+8h] [bp-24h]@1

  v2 = a1;
  v3 = a2 << 16;
  v16 = v3 >> 16;
  v13 = v3 >> 16;
  v14 = BYTE3(v3);
  v15 = 0;
  while ( 1 )
  {
    v4 = v15;
    if ( !*(_WORD *)(36 * v15 + 0x20282A0) )
      break;
    ++v15;
    if ( (unsigned __int8)(v4 + 1) > 5u )
      return 255;
  }
  v5 = 0;
  do
  {
    *(_WORD *)(2 * v5 + 36 * v15 + 0x2028280);
    *(_WORD *)(2 * v5 + 36 * v15 + 0x2028280) = -1;
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 8 );
  v6 = 0;
  do
  {
    *(_BYTE *)(v6 + 36 * v15 + 33718930) = *(_BYTE *)(v6 + 33705636);
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 <= 6 );
  *(_BYTE *)(v6 + 36 * v15 + 33718930) = -1;
  sub_814A518(36 * v15 + 33718930, 0);
  v7 = 0;
  do
  {
    *(_BYTE *)(v7 + 36 * v15 + 33718938) = *(_BYTE *)(v7 + 33705646);
    v7 = (v7 + 1) & 0xFF;
  }
  while ( v7 <= 3 );
  v8 = (unsigned __int16)GetBoxMonData(v2, 11, &v15);
  v10 = GetBoxMonData(v2, 0, v9);
  v11 = sub_80A2D44(v8, v10);
  *(_WORD *)(36 * v15 + 0x202829E) = v11;
  *(_WORD *)(36 * v15 + 0x20282A0) = v16;
  SetMonData((int)v2, 64, (int)&v15);
  SetMonData((int)v2, 12, (int)&v13);
  return v15;
}
