signed int __fastcall sub_8078718(int a1)
{
  int v1; // r4@1
  int v2; // r0@2
  signed int result; // r0@2

  v1 = a1;
  if ( sub_8078B5C(a1) << 24 )
  {
    result = 1;
  }
  else
  {
    v2 = *(_WORD *)(v1 + 58) + *(_WORD *)(v1 + 60);
    *(_WORD *)(v1 + 60) = v2;
    *(_WORD *)(v1 + 38) += sine((unsigned int)(v2 << 16) >> 24, *(_WORD *)(v1 + 56));
    result = 0;
  }
  return result;
}
