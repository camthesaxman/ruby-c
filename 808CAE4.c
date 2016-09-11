int __fastcall sub_808CAE4(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( LOBYTE(dword_3004B20[10 * *((_WORD *)v1 + 4) + 1]) )
  {
    if ( *(_BYTE *)(v202FFB4 + 1610) == 1
      && !(sub_808F250(LOBYTE(dword_3004B20[10 * a1 + 2])) << 24)
      && sub_808E71C() << 24 )
    {
      sub_808F284(v202FFB4 + 4 * *(_WORD *)(v202FFB4 + 1550), *((_BYTE *)v1 + 8));
    }
  }
  else
  {
    v202FFB8 = *(_WORD *)(v202FFB4 + 1550);
    v202FFBA = *(_BYTE *)(v202FFB4 + 1580);
    *v1 = (int)sub_808C608;
  }
  return v3;
}
