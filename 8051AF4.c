int __fastcall sub_8051AF4(_WORD *a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( (signed int)*a1 < 0 )
    ++*a1;
  if ( (signed int)*a1 > 0 )
    --*a1;
  return v2;
}
