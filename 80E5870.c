int __fastcall sub_80E5870(unsigned __int8 a1)
{
  unsigned int v1; // r4@1
  int *v2; // r5@1
  int v4; // [sp+8h] [bp-4h]@0

  LOBYTE(v1) = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  if ( !(sub_80E5E70(a1, *((_BYTE *)v2 + 30)) << 24) )
    v1 = (unsigned int)*((_BYTE *)v2 + 24) >> 4;
  sub_805954C(v1);
  return v4;
}
