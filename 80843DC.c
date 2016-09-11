signed int __fastcall sub_80843DC(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  signed int result; // r0@2

  v3 = a2;
  v4 = a3;
  if ( FieldEffectActiveListContains(0) << 24 )
  {
    result = 0;
  }
  else
  {
    ++*(_WORD *)(v3 + 8);
    if ( ((*(_BYTE *)(v4 + 6) - 57) & 0xFFu) <= 1 )
      *(_WORD *)(v3 + 8) = 6;
    if ( *(_BYTE *)(v4 + 6) == 63 )
      *(_WORD *)(v3 + 8) = 8;
    result = 1;
  }
  return result;
}
