int __fastcall sub_80FBAF0(int a1)
{
  int v1; // r1@1
  _BYTE *v2; // r3@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = v20388CC;
  v2 = (_BYTE *)(v20388CC + 122);
  if ( *(_BYTE *)(v20388CC + 122) )
  {
    *(_WORD *)(a1 + 32) += 2 * *(_BYTE *)(v20388CC + 123);
    *(_WORD *)(a1 + 34) += 2 * *(_BYTE *)(v1 + 124);
    --*v2;
  }
  return v4;
}
