int __fastcall sub_80F55AC(_BYTE *a1, int a2)
{
  __int16 v2; // r2@1
  _BYTE *v3; // r6@1
  int v4; // r7@1
  signed int v5; // r12@1
  unsigned int v6; // r9@1
  unsigned int v7; // r0@2
  int v8; // r2@6
  int v9; // r3@6
  int v10; // r5@6
  int v12; // [sp+1Ch] [bp-4h]@0

  v2 = gUnknown_083E4890[*a1];
  v3 = a1 + 1;
  *(_WORD *)a2 = 155;
  *(_WORD *)(a2 + 2) = 91 - v2;
  v4 = 64;
  v5 = 0;
  v6 = 1;
  do
  {
    v4 = (v4 + 51) & 0xFF;
    v7 = (v5 << 24) - 0x1000000;
    v5 = v7 >> 24;
    if ( (v7 & 0x80000000) != 0 )
      v5 = 4;
    if ( (char)v5 == 2 )
      v4 = (v4 + 1) & 0xFF;
    v8 = gUnknown_083E4890[*v3++];
    v9 = 4 * (char)v5 + a2;
    v10 = gSineTable[v4 + 64] * v8 >> 8;
    *(_WORD *)v9 = v10 + 155;
    *(_WORD *)(v9 + 2) = 91 - (v8 * gSineTable[v4] >> 8);
    if ( (char)v5 <= 2 && (v8 != 32 || (char)v5 != 2) )
      *(_WORD *)v9 = v10 + 156;
    v6 = (v6 + 1) & 0xFFFF;
  }
  while ( v6 <= 4 );
  return v12;
}
