int __fastcall sub_80B64D4(unsigned __int8 a1)
{
  int *v1; // r4@1
  unsigned __int16 v2; // r0@3
  int v3; // r1@3
  __int16 v4; // r1@5
  __int16 v5; // r2@5
  int v7; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 4) != 3 )
  {
    if ( *((_WORD *)v1 + 6) )
    {
      v2 = sub_80B654C((unsigned __int8)*((_WORD *)v1 + 4));
      sub_8085C7C(v2, *((_BYTE *)v1 + 14), *((_BYTE *)v1 + 14), *((_BYTE *)v1 + 14));
      v3 = *((_WORD *)v1 + 9);
      if ( !*((_WORD *)v1 + 9) || (*((_WORD *)v1 + 9) = v3 - 1, !((v3 - 1) << 16)) )
      {
        *((_WORD *)v1 + 9) = 2;
        v4 = *((_WORD *)v1 + 8);
        v5 = *((_WORD *)v1 + 7);
        *((_WORD *)v1 + 7) = v4 + v5;
        if ( (signed __int16)(v4 + v5) == 16 )
        {
_080B653C:
          *((_WORD *)v1 + 8) = -v4;
          return v7;
        }
        if ( !(v4 + v5) )
        {
          *((_WORD *)v1 + 6) = *((_WORD *)v1 + 5);
          goto _080B653C;
        }
      }
    }
  }
  return v7;
}
