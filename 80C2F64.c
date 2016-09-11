int __fastcall sub_80C2F64(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r2@1
  __int16 v3; // r0@1
  __int16 v4; // r0@3
  int *v5; // r1@5
  int v6; // r0@5
  int *v7; // r4@9
  int v9; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4) + 1;
  *((_WORD *)v2 + 4) = v3;
  if ( v3 == 2 )
  {
    *((_WORD *)v2 + 4) = 0;
    if ( *((_WORD *)v2 + 6) )
      v4 = *((_WORD *)v2 + 5) - 1;
    else
      v4 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v4;
    v5 = &dword_3004B20[10 * v1];
    v6 = *((_WORD *)v5 + 5);
    if ( v6 == 16 )
    {
      LOWORD(v6) = 1;
    }
    else if ( *((_WORD *)v5 + 5) )
    {
_080C2FB8:
      v7 = &dword_3004B20[10 * v1];
      BlendPalette(0x6Bu, 1u, *((_BYTE *)v7 + 10), 11998);
      BlendPalette(0x68u, 1u, *((_BYTE *)v7 + 10), 0x7FFF);
      BlendPalette(0x6Eu, 1u, *((_BYTE *)v7 + 10), 30654);
      goto _080C2FE6;
    }
    *((_WORD *)v5 + 6) = v6;
    goto _080C2FB8;
  }
_080C2FE6:
  v201800A = HIWORD(dword_3004B20[10 * v1 + 2]) != 0;
  return v9;
}
