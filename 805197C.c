int __fastcall sub_805197C(int a1, signed __int16 a2)
{
  int v2; // r1@1
  int v3; // r3@1
  _WORD *v4; // r2@2
  signed int v5; // r0@2
  int v6; // r3@2
  int v7; // r2@5
  _WORD *v8; // r0@8
  int v9; // r1@8
  int v11; // [sp+10h] [bp-4h]@0

  v2 = ((a1 << 6) & 0x3FFFFF) / (unsigned __int16)a2;
  v3 = 0;
  if ( v2 / 8 > 0 )
  {
    v4 = (_WORD *)100687958;
    v5 = 100687872;
    v6 = v2 / 8;
    do
    {
      *(_WORD *)(v5 + 22) = -32279;
      *v4 = -32263;
      ++v4;
      v5 += 2;
      --v6;
    }
    while ( v6 );
    v3 = v2 / 8;
  }
  v7 = v2 % 8;
  if ( v2 != 8 * (v2 / 8) )
  {
    *(_WORD *)(2 * v3 + 0x6006016) = v7 - 32287;
    *(_WORD *)(2 * v3++ + 0x6006056) = v7 - 32271;
  }
  if ( v3 <= 7 )
  {
    v8 = (_WORD *)(2 * v3 + 100687958);
    v9 = 2 * v3 + 100687872;
    do
    {
      *(_WORD *)(v9 + 22) = -32287;
      *v8 = -32271;
      ++v8;
      v9 += 2;
      ++v3;
    }
    while ( v3 <= 7 );
  }
  return v11;
}
