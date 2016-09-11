int __fastcall sub_80C65C4(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 > 39 )
  {
    if ( !v202FFA0 || v202FFA0 == 2 )
      sub_80BB800();
    *(_WORD *)(v1 + 46) = 0;
    *(_DWORD *)(v1 + 28) = sub_80C65FC;
  }
  return v4;
}
