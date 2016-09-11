int __fastcall sub_80C35FC(int a1)
{
  int v1; // r3@1
  int v3; // [sp+0h] [bp-4h]@0

  v2018004 = 2;
  v1 = *(_WORD *)(a1 + 56);
  if ( v1 != 0xFFFF )
  {
    *(_WORD *)(a1 + 56) = v1 - 1;
    if ( (signed __int16)(v1 - 1) == -1 )
      sub_80C3520(*(_WORD *)(a1 + 58));
  }
  return v3;
}
