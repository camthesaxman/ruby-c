int __fastcall sub_80CF2D0(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
    v2 = (_BYTE *)33748937;
  else
    v2 = (_BYTE *)33748936;
  sub_80CEF44(*v2, v1);
  *(_WORD *)(v1 + 46) = 0;
  *(_WORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 28) = sub_80CF310;
  return v4;
}
