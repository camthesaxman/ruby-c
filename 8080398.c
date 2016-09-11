int __fastcall sub_8080398(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 52) - 1;
  *(_WORD *)(v1 + 52) = v2;
  if ( v2 == -1 )
    *(_DWORD *)(v1 + 28) = sub_80803BC;
  return v4;
}
