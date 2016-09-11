signed int __fastcall sub_80B2C4C(signed int result, int a2)
{
  signed int v2; // r2@8
  signed int v3; // r4@8
  signed int v4; // r3@8
  int v5; // r6@9
  int v6; // r7@9
  int v7; // r1@9
  int v8; // r6@9
  int v9; // r7@9
  int v10; // r1@9
  int v11; // r6@9
  signed int v12; // r2@12
  signed int v13; // r4@12
  signed int v14; // r3@12
  int v15; // r6@13
  int v16; // r7@13
  int v17; // r1@13
  int v18; // r6@13
  int v19; // r7@13
  int v20; // r1@13
  int v21; // r7@13

  result = (unsigned __int8)result;
  a2 = (unsigned __int8)a2;
  if ( (unsigned __int8)result == 2 )
  {
    if ( a2 )
    {
      v2 = 4;
      v3 = 33719696;
      v4 = 33719728;
      do
      {
        v5 = *(_DWORD *)(v3 + 4);
        v6 = *(_DWORD *)(v3 + 8);
        *(_DWORD *)v4 = *(_DWORD *)v3;
        *(_DWORD *)(v4 + 4) = v5;
        *(_DWORD *)(v4 + 8) = v6;
        v7 = v4 + 12;
        v8 = *(_DWORD *)(v3 + 16);
        v9 = *(_DWORD *)(v3 + 20);
        *(_DWORD *)v7 = *(_DWORD *)(v3 + 12);
        *(_DWORD *)(v7 + 4) = v8;
        *(_DWORD *)(v7 + 8) = v9;
        v10 = v4 + 24;
        v11 = *(_DWORD *)(v3 + 28);
        *(_DWORD *)v10 = *(_DWORD *)(v3 + 24);
        *(_DWORD *)(v10 + 4) = v11;
        v3 -= 32;
        v4 -= 32;
        --v2;
      }
      while ( v2 > 2 );
    }
    result = 2;
  }
  else
  {
    if ( result <= 2 )
    {
      if ( result >= 0 )
        return result;
      goto _080B2CD4;
    }
    if ( result != 3 )
    {
_080B2CD4:
      if ( v203869C > 4u )
      {
def_80B2CE4:
        result = 12;
      }
      else
      {
        switch ( v203869C )
        {
          case 0u:
            result = 8;
            break;
          case 1u:
            result = 9;
            break;
          case 2u:
            result = 10;
            break;
          case 3u:
            result = 11;
            break;
          default:
            goto def_80B2CE4;
        }
      }
      return result;
    }
    if ( a2 )
    {
      v12 = 7;
      v13 = 33719792;
      v14 = 33719824;
      do
      {
        v15 = *(_DWORD *)(v13 + 4);
        v16 = *(_DWORD *)(v13 + 8);
        *(_DWORD *)v14 = *(_DWORD *)v13;
        *(_DWORD *)(v14 + 4) = v15;
        *(_DWORD *)(v14 + 8) = v16;
        v17 = v14 + 12;
        v18 = *(_DWORD *)(v13 + 16);
        v19 = *(_DWORD *)(v13 + 20);
        *(_DWORD *)v17 = *(_DWORD *)(v13 + 12);
        *(_DWORD *)(v17 + 4) = v18;
        *(_DWORD *)(v17 + 8) = v19;
        v20 = v14 + 24;
        v21 = *(_DWORD *)(v13 + 28);
        *(_DWORD *)v20 = *(_DWORD *)(v13 + 24);
        *(_DWORD *)(v20 + 4) = v21;
        v13 -= 32;
        v14 -= 32;
        --v12;
      }
      while ( v12 > 5 );
    }
    result = 5;
  }
  return result;
}
