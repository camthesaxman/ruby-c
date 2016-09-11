int __fastcall sub_80B6274(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_WORD *)(a1 + 10) = 0;
  if ( word_300179E & 1 )
  {
    *(_WORD *)(a1 + 10) = 5;
  }
  else if ( word_300179E & 2 )
  {
    *(_WORD *)(a1 + 10) = 6;
  }
  else if ( word_300179E & 4 )
  {
    *(_WORD *)(a1 + 10) = 8;
  }
  else if ( word_300179E & 8 )
  {
    *(_WORD *)(a1 + 10) = 9;
    sub_80B6878(9);
  }
  else
  {
    sub_80B62CC(a1);
  }
  return v2;
}
