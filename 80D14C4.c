int __fastcall sub_80D14C4(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 38) -= 2;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 == 9 )
  {
    *(_WORD *)(v1 + 46) = 16;
    *(_WORD *)(v1 + 48) = 0;
    v4000050 = 16192;
    v4000052 = *(_WORD *)(v1 + 46);
    *(_DWORD *)(v1 + 28) = sub_80D1504;
  }
  return v4;
}
