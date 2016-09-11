int __fastcall sub_81041AC(int a1)
{
  int v1; // r3@1
  int v2; // r1@1
  signed int v3; // r2@1
  __int16 v4; // r0@7
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 10);
  v3 = 0;
  if ( (signed __int16)v2 == 1 )
  {
    v3 = 1;
  }
  else if ( (signed __int16)v2 == 16 )
  {
    v3 = 2;
  }
  if ( !*(_WORD *)(a1 + 12) )
  {
    *(_WORD *)(((v2 + 2) << 16 >> 15) + 0x600E880) = word_83ECBC6[2 * v3];
    --*(_WORD *)(a1 + 10);
  }
  v4 = *(_WORD *)(a1 + 12) + 1;
  *(_WORD *)(v1 + 12) = v4;
  if ( v4 > 19 )
    *(_WORD *)(v1 + 12) = 0;
  if ( !*(_WORD *)(v1 + 10) )
  {
    *(_WORD *)(v1 + 8) = 0;
    *(_WORD *)(v1 + 38) = 0;
  }
  return v6;
}
