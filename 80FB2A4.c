int __fastcall sub_80FB2A4(__int16 a1, __int16 a2)
{
  __int16 v2; // r4@1
  __int16 v3; // r5@1
  int v4; // r2@1
  int v5; // r1@1
  int v7; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  sub_80FB170(a1, a2, 56, 72, 0x100u, 0x100u, 0);
  sub_80FB260();
  v4 = v20388CC;
  v5 = *(_DWORD *)(v20388CC + 32);
  if ( v5 )
  {
    *(_WORD *)(v5 + 36) = -v2;
    *(_WORD *)(*(_DWORD *)(v4 + 32) + 38) = -v3;
  }
  return v7;
}
