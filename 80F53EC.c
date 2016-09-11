int __fastcall sub_80F53EC(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r7@1
  int v4; // r1@2
  signed int v5; // r5@2
  int v6; // r6@2
  unsigned int v7; // r3@2
  unsigned __int16 v8; // r10@2
  int v9; // r1@4
  signed int v10; // r5@4
  int v11; // r6@4
  unsigned int v12; // r3@4
  int v14; // [sp+28h] [bp-4h]@0

  v2 = a2;
  v3 = 0;
  do
  {
    v4 = *(_WORD *)(4 * v3 + a1);
    v5 = v4 << 8;
    v6 = ((*(_WORD *)(4 * v3 + v2) - v4) << 8) / 10;
    v7 = 0;
    v8 = v3 + 1;
    do
    {
      *(_WORD *)(20 * v7 + 4 * v3 + 0x2009054) = (v5 >> 8) + ((v5 >> 7) & 1);
      v5 += v6;
      v7 = (v7 + 1) & 0xFFFF;
    }
    while ( v7 <= 8 );
    *(_WORD *)(4 * v3 + 20 * v7 + 0x2009054) = *(_WORD *)(4 * v3 + v2);
    v9 = *(_WORD *)(4 * v3 + a1 + 2);
    v10 = v9 << 8;
    v11 = ((*(_WORD *)(4 * v3 + v2 + 2) - v9) << 8) / 10;
    v12 = 0;
    do
    {
      *(_WORD *)(4 * v3 + 20 * v12 + 0x2009056) = (v10 >> 8) + ((v10 >> 7) & 1);
      v10 += v11;
      v12 = (v12 + 1) & 0xFFFF;
    }
    while ( v12 <= 8 );
    *(_WORD *)(4 * v3 + 20 * v12 + 0x2009056) = *(_WORD *)(4 * v3 + v2 + 2);
    v3 = (unsigned __int16)(v3 + 1);
  }
  while ( v8 <= 4u );
  v2009342 = 0;
  return v14;
}
