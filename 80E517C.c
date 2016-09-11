int __fastcall sub_80E517C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  int v3; // r0@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  if ( sub_80E5E70(a1, *((_BYTE *)v2 + 30)) << 24 )
  {
    v3 = PlayerTurnInPlace(v1);
    sub_80E6024(v3);
  }
  else
  {
    sub_80E5168(*((_BYTE *)v2 + 24) & 0xF);
  }
  return v5;
}
