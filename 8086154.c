int __fastcall sub_8086154(int a1)
{
  int v1; // r1@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) - 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( !v2 )
  {
    ++*(_WORD *)(v1 + 46);
    *(_WORD *)(v1 + 48) = 8;
    *(_WORD *)(v1 + 50) = 0;
    *(_WORD *)(v1 + 52) = 0;
    if ( *(_WORD *)(v1 + 56) )
      fanfare_play(0x170u);
  }
  return v4;
}
