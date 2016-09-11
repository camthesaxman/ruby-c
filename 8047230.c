int __fastcall sub_8047230(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  *(_WORD *)(v1 + 46) = v2 + 1;
  if ( v2 > 24 )
  {
    *(_WORD *)(v1 + 46) = 0;
    *(_DWORD *)(v1 + 28) = sub_8046C78;
  }
  return v4;
}
