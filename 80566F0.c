int __fastcall sub_80566F0(unsigned __int8 a1)
{
  signed int v1; // r9@1
  signed int v2; // r8@1
  int v3; // r5@1
  signed int v4; // r7@1
  signed int v5; // r12@1
  int v6; // r1@13
  int v7; // r4@14
  signed int v8; // r3@15
  _WORD *v9; // r2@15
  _WORD *v10; // r1@15
  int v12; // [sp+0h] [bp-28h]@1
  int v13; // [sp+4h] [bp-24h]@1
  int v14; // [sp+24h] [bp-4h]@0

  v12 = dword_3004870;
  v1 = 0;
  v2 = 0;
  v13 = v2025734;
  v3 = v2025736;
  v4 = 15;
  v5 = 14;
  if ( a1 == 2 )
  {
    v3 = v2025736 + 1;
    v5 = 13;
    goto _08056766;
  }
  if ( (signed int)a1 > 2 )
  {
    if ( a1 == 3 )
    {
      v13 = v2025734 + 1;
    }
    else
    {
      if ( a1 != 4 )
        goto _08056766;
      v1 = 1;
    }
    v4 = 14;
    goto _08056766;
  }
  if ( a1 == 1 )
  {
    v2 = 1;
    v5 = 13;
  }
_08056766:
  v6 = 0;
  if ( v5 > 0 )
  {
    do
    {
      v7 = v6 + 1;
      if ( v4 )
      {
        v8 = v4;
        v9 = (_WORD *)(2 * (v13 + v12 * (v6 + v3)) + 33724456);
        v10 = (_WORD *)(2 * (15 * (v6 + v2) + v1) + 33707880);
        do
        {
          *v9 = *v10;
          ++v10;
          ++v9;
          --v8;
        }
        while ( v8 );
      }
      v6 = v7;
    }
    while ( v7 < v5 );
  }
  sav2_mapdata_clear();
  return v14;
}
