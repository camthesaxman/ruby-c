int __fastcall sub_8055340(signed int a1)
{
  _WORD *v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = (_WORD *)(a1 + 6);
  do
  {
    *v1 = 17;
    --v1;
  }
  while ( (signed int)v1 >= a1 );
  return v3;
}
