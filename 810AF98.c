int __fastcall sub_810AF98(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r3@1
  int *v3; // r1@1
  int v4; // r0@1
  int v6; // [sp+0h] [bp-4h]@0

  v2 = a2;
  v3 = &dword_3004B20[10 * a1];
  v4 = *((_BYTE *)v3 + 12);
  if ( v2 == 1 )
  {
    if ( v4 == 11 )
    {
      LOWORD(v4) = 0;
_0810AFD8:
      *((_WORD *)v3 + 9) = v4;
      return v6;
    }
    if ( v4 == 23 )
      *((_WORD *)v3 + 9) = 1;
  }
  else
  {
    if ( v2 != 2 )
      return v6;
    if ( !*((_BYTE *)v3 + 12) )
      goto _0810AFD8;
    if ( v4 == 12 )
    {
      LOWORD(v4) = 1;
      goto _0810AFD8;
    }
  }
  return v6;
}
