int __fastcall door_build_blockdef(_WORD *a1, __int16 a2, _BYTE *a3)
{
  __int16 v3; // r5@1
  signed int v4; // r4@1
  _WORD *v5; // r1@1
  int v6; // r3@2
  _WORD *v7; // r1@4
  __int16 v8; // r0@5
  int v10; // [sp+Ch] [bp-4h]@0

  v3 = a2;
  v4 = 0;
  v5 = a1;
  do
  {
    v6 = (*a3++ << 12) & 0xFFFF;
    *v5 = v6 | (v3 + v4);
    ++v5;
    ++v4;
  }
  while ( v4 <= 3 );
  if ( v4 <= 7 )
  {
    v7 = &a1[v4];
    do
    {
      v8 = *a3++;
      *v7 = v8 << 12;
      ++v7;
      ++v4;
    }
    while ( v4 <= 7 );
  }
  return v10;
}
