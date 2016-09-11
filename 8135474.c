int sub_8135474()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( v2025408 == 200 )
  {
    sub_813545C((_WORD *)0x202534C);
  }
  else if ( v2025408 > 0x63u )
  {
    sub_813545C((_WORD *)(164 * v2025408 + 33689584));
  }
  else
  {
    sub_813545C(&word_8402F0C[12 * v2025408]);
  }
  return v1;
}
