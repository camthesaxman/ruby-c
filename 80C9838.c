int __fastcall sub_80C9838(unsigned __int8 a1, __int16 a2, unsigned __int16 a3)
{
  __int16 v3; // r7@1
  int v4; // r12@1
  _BYTE *v5; // r3@1
  int v6; // r0@3
  int v7; // r4@4
  int v8; // r0@6
  int v9; // r2@7
  int v10; // r6@10
  int v11; // r0@13
  int v12; // r4@15
  int v13; // r1@15
  int v14; // r0@15
  int v16; // [sp+18h] [bp-4h]@0

  v3 = a2;
  v4 = a3;
  v5 = &byte_3004B28[40 * a1];
  if ( *((_WORD *)v5 + 2) )
  {
    v6 = *(_WORD *)v5;
    if ( v6 >= 0 )
      LOWORD(v7) = *(_WORD *)v5;
    else
      v7 = 0xFFFF * v6 & 0xFFFF;
    v8 = *((_WORD *)v5 + 1);
    if ( v8 >= 0 )
      LOWORD(v9) = *((_WORD *)v5 + 1);
    else
      v9 = 0xFFFF * v8 & 0xFFFF;
    if ( a2 >= 0 )
      LOWORD(v10) = a2;
    else
      v10 = 0xFFFF * a2 & 0xFFFF;
    if ( (signed __int16)v4 >= 0 )
      v11 = v4 << 16;
    else
      v11 = -65536 * (signed __int16)v4;
    v9 = (signed __int16)v9;
    v12 = (signed __int16)v7 + (signed __int16)v9;
    v13 = SHIWORD(v11);
    v14 = (signed __int16)v10 + SHIWORD(v11);
    if ( v12 <= v14 )
    {
      if ( v12 == v14 && (v9 > v13 || v9 == v13 && *((_WORD *)v5 + 1) << 16 < v4 << 16) )
      {
        *(_WORD *)v5 = v3;
        *((_WORD *)v5 + 1) = v4;
      }
    }
    else
    {
      *(_WORD *)v5 = v3;
      *((_WORD *)v5 + 1) = v4;
    }
  }
  else
  {
    *(_WORD *)v5 = a2;
    *((_WORD *)v5 + 1) = a3;
    *((_WORD *)v5 + 2) = 1;
  }
  return v16;
}
