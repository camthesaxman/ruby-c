int __fastcall sub_80A2FF4(unsigned __int8 a1)
{
  int v1; // r1@1
  int *v2; // r4@1
  signed int v3; // r2@1
  int v4; // r0@8
  __int16 v5; // r0@10
  __int16 v6; // r0@12
  int v8; // [sp+8h] [bp-4h]@0

  v1 = 10 * a1;
  v2 = &dword_3004B20[v1];
  v3 = LOWORD(dword_3004B20[v1 + 2]);
  if ( v3 == 1 )
  {
    v5 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v5;
    if ( v5 > 120 )
    {
      *((_WORD *)v2 + 5) = 0;
      *((_WORD *)v2 + 4) = 2;
    }
    goto _080A3092;
  }
  if ( v3 <= 1 )
  {
    if ( !LOWORD(dword_3004B20[v1 + 2]) )
    {
      v4 = *((_WORD *)v2 + 6) - 2;
      *((_WORD *)v2 + 6) = v4;
      if ( v4 << 16 <= 0 )
      {
        *((_WORD *)v2 + 4) = 1;
        HIWORD(dword_3004B20[10 * v2038538 + 2]) = 0;
      }
    }
    goto _080A3092;
  }
  if ( v3 == 2 )
  {
    v6 = *((_WORD *)v2 + 6) + 2;
    *((_WORD *)v2 + 6) = v6;
    if ( v6 > 31 )
    {
      if ( !*((_WORD *)v2 + 7) )
      {
        *((_WORD *)v2 + 4) = 4;
        return v8;
      }
      sub_80A30E0();
      *((_WORD *)v2 + 4) = 0;
      *((_WORD *)v2 + 7) = 0;
    }
_080A3092:
    v4000012 = *((_WORD *)v2 + 6);
    return v8;
  }
  if ( v3 != 4 )
    goto _080A3092;
  HideMapNamePopUpWindow(8);
  return v8;
}
