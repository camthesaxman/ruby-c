int sub_80492D8()
{
  int v0; // r2@1
  int v1; // r1@3
  int v2; // r2@4
  int v3; // r0@4
  int v4; // r1@6
  int v5; // r0@6
  int v6; // r0@6
  char *v7; // r0@6
  char v8; // r1@6
  int v9; // r1@8
  int v10; // r0@8
  int v11; // r0@8
  int v12; // r0@10
  int v13; // r3@12
  int v14; // r1@18
  int v16; // [sp+10h] [bp-4h]@0

  v0 = dword_3004824;
  if ( *(_BYTE *)(dword_3004824 + 132) && *(_BYTE *)(dword_3004824 + 133) )
  {
    v1 = *(_WORD *)(dword_3004824 + 132);
    if ( v1 != 257 )
    {
      if ( v1 == 513 )
      {
        sub_804AA0C(1);
        v4 = dword_3004824;
        *(_WORD *)(dword_3004824 + 140) = -4404;
        *(_WORD *)(v4 + 142) = 0;
        sub_804AADC(5, 0);
        v5 = dword_3004824;
        *(_BYTE *)(dword_3004824 + 135) = 0;
        *(_BYTE *)(v5 + 134) = 0;
        v6 = dword_3004824;
        *(_BYTE *)(dword_3004824 + 133) = 0;
        *(_BYTE *)(v6 + 132) = 0;
        v7 = (char *)(dword_3004824 + 123);
        v8 = 8;
      }
      else if ( v1 == 258 )
      {
        sub_804AA0C(5);
        v9 = dword_3004824;
        *(_WORD *)(dword_3004824 + 140) = -8722;
        *(_WORD *)(v9 + 142) = 0;
        sub_804AADC(5, 0);
        v10 = dword_3004824;
        *(_BYTE *)(dword_3004824 + 135) = 0;
        *(_BYTE *)(v10 + 134) = 0;
        v11 = dword_3004824;
        *(_BYTE *)(dword_3004824 + 133) = 0;
        *(_BYTE *)(v11 + 132) = 0;
        v7 = (char *)(dword_3004824 + 123);
        v8 = 8;
      }
      else
      {
        if ( v1 != 514 )
          goto _08049420;
        *(_WORD *)(dword_3004824 + 140) = -4421;
        *(_WORD *)(v0 + 142) = 0;
        sub_804AADC(5, 0);
        BeginNormalPaletteFade(-1, 0, 0, 16);
        v12 = dword_3004824;
        *(_BYTE *)(dword_3004824 + 133) = 0;
        *(_BYTE *)(v12 + 132) = 0;
        v7 = (char *)(dword_3004824 + 123);
        v8 = 11;
      }
      *v7 = v8;
      goto _08049420;
    }
    *(_BYTE *)(dword_3004824 + 123) = 6;
    v2 = dword_3004824;
    *(_WORD *)(dword_3004824 + 140) = -8739;
    *(_WORD *)(v2 + 142) = *(_BYTE *)(v2 + 65);
    sub_804AADC(5, 0);
    v3 = dword_3004824;
    *(_BYTE *)(dword_3004824 + 133) = 0;
    *(_BYTE *)(v3 + 132) = 0;
  }
_08049420:
  v13 = dword_3004824;
  if ( *(_BYTE *)(dword_3004824 + 134) && *(_BYTE *)(dword_3004824 + 135) )
  {
    if ( *(_WORD *)(dword_3004824 + 134) == 257 )
    {
      *(_WORD *)(dword_3004824 + 140) = -13091;
      *(_WORD *)(v13 + 142) = 0;
      sub_804AADC(5, 0);
      *(_BYTE *)(dword_3004824 + 134) = 0;
      *(_BYTE *)(dword_3004824 + 135) = 0;
      *(_BYTE *)(dword_3004824 + 123) = 9;
    }
    if ( *(_BYTE *)(dword_3004824 + 134) == 2 || *(_BYTE *)(dword_3004824 + 135) == 2 )
    {
      sub_804AA0C(1);
      v14 = dword_3004824;
      *(_WORD *)(dword_3004824 + 140) = -8722;
      *(_WORD *)(v14 + 142) = 0;
      sub_804AADC(5, 0);
      *(_BYTE *)(dword_3004824 + 134) = 0;
      *(_BYTE *)(dword_3004824 + 135) = 0;
      *(_BYTE *)(dword_3004824 + 123) = 8;
    }
  }
  return v16;
}
