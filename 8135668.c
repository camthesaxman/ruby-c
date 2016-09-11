int sub_8135668()
{
  int v0; // r4@1
  _BYTE *v1; // r1@3
  char v2; // r0@3
  char v3; // r1@4
  char v4; // r2@4
  char v5; // r0@4
  int v6; // r1@5
  signed int v7; // r0@5
  signed int v8; // r2@9
  _WORD *v9; // r4@16
  _WORD *v10; // r4@17
  unsigned int v11; // r1@17
  int v13; // [sp+8h] [bp-4h]@0

  v0 = v20253F8 & 1;
  if ( v202E8CC <= 0xEu )
  {
    switch ( v202E8CC )
    {
      case 0u:
        v1 = (_BYTE *)(v0 + 33707002);
        v20160FB = *(_BYTE *)((v20253F8 & 1) + 0x20253FA);
        v2 = v202E8CE;
        goto _08135898;
      case 1u:
        v3 = v202E8CE & 1;
        v4 = v20253F8;
        v5 = -2;
        goto _08135810;
      case 2u:
        v6 = 2 * v0;
        v7 = 33707004;
        goto _0813572C;
      case 3u:
        v6 = 2 * v0;
        v7 = 33707008;
_0813572C:
        *(_WORD *)(v6 + v7) = v202E8CE;
        break;
      case 4u:
        v2025408 = v202E8CE;
        break;
      case 5u:
        v8 = 0;
        do
        {
          *(_BYTE *)(v8 + 33707017) = *(_BYTE *)(v8 + 33788528);
          ++v8;
        }
        while ( v8 <= 2 );
        break;
      case 6u:
        if ( v2025408 == 200 )
          sub_81360AC(33706812);
        if ( v2025414 <= 0x270Eu )
          ++v2025414;
        v9 = (_WORD *)(2 * v0 + 33707004);
        ++*v9;
        sub_8135A3C();
        v202E8DC = *v9;
        gStringVar1 = v202E8DC - 95;
        byte_20231CD = -1;
        break;
      case 7u:
        v10 = (_WORD *)(2 * v0 + 33707008);
        v11 = *v10;
        if ( v11 <= 0x595 )
          *v10 = v11 + 1;
        sub_8135A3C();
        v202E8DC = *v10;
        break;
      case 8u:
        v3 = 2 * (v202E8CE & 1);
        v4 = v20253F8;
        v5 = -3;
_08135810:
        v20253F8 = v5 & v4 | v3;
        break;
      case 0xAu:
        sav12_xor_set(0x20u, v2025416);
        break;
      case 0xBu:
        if ( *(_BYTE *)((v20253F8 & 1) + 0x20253FA) != 3 )
          sub_813461C(v20253F8 & 1);
        break;
      case 0xCu:
        *(_BYTE *)((v20253F8 & 1) + 0x20253FA) = v20160FB;
        break;
      case 0xDu:
        *(_WORD *)(2 * v0 + 0x2025418) = sub_8135D3C(v20253F8 & 1);
        break;
      case 0xEu:
        v2 = v20253F8 & 1;
        v1 = (_BYTE *)33707036;
_08135898:
        *v1 = v2;
        break;
      default:
        return v13;
    }
  }
  return v13;
}
