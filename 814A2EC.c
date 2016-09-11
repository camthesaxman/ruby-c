int __fastcall sub_814A2EC(int a1, int a2, unsigned __int16 a3)
{
  int v3; // r6@1
  int v4; // r9@1
  int v5; // r2@1
  int v6; // r3@1
  signed int v7; // r7@1
  int v8; // r0@2
  int v9; // r1@3
  int v10; // r5@5
  int v11; // r4@5
  int result; // r0@6

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = a1 + 24;
  v7 = 5;
  do
  {
    *(_WORD *)v6 = *(_BYTE *)v5;
    v8 = *(_BYTE *)v5;
    if ( v8 != 255 )
    {
      v9 = *(_BYTE *)(v5 + 1) + gUnknown_084170F4[v8];
      *(_WORD *)(v6 + 2) = v9;
      *(_WORD *)(v6 + 6) = *(_WORD *)(v5 + 4);
      *(_WORD *)(v3 + 4) += v9;
    }
    v5 += 8;
    v6 += 8;
    --v7;
  }
  while ( v7 >= 0 );
  v10 = 0;
  v11 = v3;
  do
  {
    result = sub_814A2B8(v4 + 30, v10);
    *(_WORD *)(v11 + 28) = result;
    v11 += 8;
    ++v10;
  }
  while ( v10 < 6 );
  ++*(_BYTE *)v3;
  *(_BYTE *)(v3 + 1) = 0;
  *(_BYTE *)(v3 + 2) = 0;
  *(_BYTE *)(v3 + 3) = 0;
  *(_WORD *)(v3 + 10) = 0;
  return result;
}
