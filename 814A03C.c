int __fastcall sub_814A03C(unsigned __int8 a1)
{
  int *v1; // r2@1
  int v2; // r6@3
  int v3; // r2@7
  int *v4; // r3@7
  int *v5; // r3@13
  int *v6; // r5@17
  int v8; // [sp+14h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 12) )
  {
    *v1 = (int)sub_814A208;
    return v8;
  }
  v2 = 0;
  if ( *((_WORD *)v1 + 9) )
  {
    if ( *((_WORD *)v1 + 8) >= 256 - *((_WORD *)v1 + 10) )
    {
      *((_WORD *)v1 + 8) = 256;
      v2 = 1;
    }
    else
    {
      *((_WORD *)v1 + 8) += *((_WORD *)v1 + 10);
    }
    v3 = 4 * a1;
    v5 = &dword_3004B20[10 * a1];
    if ( *((_WORD *)v5 + 7) > *((_WORD *)v5 + 10) + 16 )
    {
      *((_WORD *)v5 + 7) -= *((_WORD *)v5 + 10);
      goto _0814A102;
    }
    *((_WORD *)v5 + 7) = 16;
  }
  else
  {
    if ( *((_WORD *)v1 + 7) >= 256 - *((_WORD *)v1 + 10) )
    {
      *((_WORD *)v1 + 7) = 256;
      v2 = 1;
    }
    else
    {
      *((_WORD *)v1 + 7) += *((_WORD *)v1 + 10);
    }
    v3 = 4 * a1;
    v4 = &dword_3004B20[10 * a1];
    if ( *((_WORD *)v4 + 8) > *((_WORD *)v4 + 10) + 16 )
    {
      *((_WORD *)v4 + 8) -= *((_WORD *)v4 + 10);
      goto _0814A102;
    }
    *((_WORD *)v4 + 8) = 16;
  }
  v2 = (v2 + 1) & 0xFF;
_0814A102:
  v6 = &dword_3004B20[2 * (v3 + a1)];
  SetOamMatrix(30, 0x10000 / *((_WORD *)v6 + 7), 0, 0, 0x10000 / *((_WORD *)v6 + 7));
  SetOamMatrix(31, 0x10000 / *((_WORD *)v6 + 8), 0, 0, 0x10000 / *((_WORD *)v6 + 8));
  if ( v2 == 2 )
    *v6 = (int)sub_8149FEC;
  return v8;
}
