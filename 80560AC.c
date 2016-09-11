int __fastcall sub_80560AC(int a1)
{
  int v1; // r6@1
  int v2; // r0@1
  int v3; // r1@1
  int v4; // r5@1
  int v5; // r7@2
  int v6; // r1@3
  int v7; // r2@3
  signed int v8; // r0@3
  char v9; // r0@10
  char v10; // r1@10
  int v12; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v3 = *(_DWORD *)v2;
  v4 = *(_DWORD *)(v2 + 4);
  v202E850 = 0;
  if ( v3 > 0 )
  {
    v5 = v3;
    do
    {
      v6 = mapconnection_get_mapheader(v4);
      v7 = *(_DWORD *)(v4 + 4);
      v8 = *(_BYTE *)v4;
      if ( v8 == 2 )
      {
        sub_8056200(v1, v6, v7);
        v9 = v202E850;
        v10 = 2;
      }
      else if ( v8 > 2 )
      {
        if ( v8 == 3 )
        {
          sub_8056260(v1, v6, v7);
          v9 = v202E850;
          v10 = 4;
        }
        else
        {
          if ( v8 != 4 )
            goto _08056124;
          sub_80562C0(v1, v6, v7);
          v9 = v202E850;
          v10 = 8;
        }
      }
      else
      {
        if ( v8 != 1 )
          goto _08056124;
        sub_8056198(v1, v6, v7);
        v9 = v202E850;
        v10 = 1;
      }
      v202E850 = v9 | v10;
_08056124:
      --v5;
      v4 += 12;
    }
    while ( v5 );
  }
  return v12;
}
