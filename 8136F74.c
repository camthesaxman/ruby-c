int __fastcall sub_8136F74(int a1, int a2)
{
  int v2; // r10@1
  int v3; // r3@1
  signed int v4; // r0@2
  int v5; // r2@5
  signed int v6; // r9@5
  int v7; // r6@6
  int v8; // r7@6
  unsigned int v9; // r5@6
  signed int v10; // r0@8
  signed int v11; // r2@8
  int v13; // [sp+1Ch] [bp-4h]@0

  v2 = a2;
  v3 = v2039304;
  *(_WORD *)(v2039304 + 102) = *(_BYTE *)(a1 + 1);
  *(_WORD *)(v3 + 104) = *(_BYTE *)(a1 + 5);
  *(_WORD *)(v3 + 106) = *(_BYTE *)(a1 + 4);
  *(_WORD *)(v3 + 108) = *(_BYTE *)(a1 + 3);
  *(_WORD *)(v3 + 110) = *(_BYTE *)(a1 + 2);
  if ( v2039312 <= 0 )
  {
    if ( v2039312 >= 0 )
      return v13;
    v4 = 255;
  }
  else
  {
    v4 = 1;
  }
  LOBYTE(v5) = 0;
  v6 = v4 << 24;
  do
  {
    v7 = (char)v5;
    v8 = 2 * (char)v5;
    v9 = *(_WORD *)(v2039304 + 102 + v8) / 10 & 0xFF;
    if ( *(_WORD *)(v2039304 + 102 + v8) % 10 > 4 )
      v9 = (unsigned int)((*(_WORD *)(v2039304 + 102 + v8) / 10 << 24) + 0x1000000) >> 24;
    v10 = sub_8040A54(v2, gUnknown_0840612C[(char)v5]) << 24;
    v11 = v10 >> 24;
    if ( v10 == v6 )
      *(_WORD *)(v2039304 + 102 + v8) += (char)v9 * (_WORD)v11;
    v5 = (v7 + 1) & 0xFF;
  }
  while ( (char)(v7 + 1) <= 4 );
  return v13;
}
