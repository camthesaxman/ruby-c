int sub_81358A4()
{
  int v0; // r4@1
  _BYTE *v1; // r1@3
  unsigned int v2; // r0@4
  int v3; // r0@5
  signed int v4; // r4@5
  int v6; // [sp+4h] [bp-4h]@0

  v0 = v20253F8 & 1;
  if ( v202E8CC <= 0xEu )
  {
    switch ( v202E8CC )
    {
      case 0u:
        v1 = (_BYTE *)(v0 + 33707002);
        goto _0813596A;
      case 1u:
        v2 = v20253F8 << 31;
        goto _08135982;
      case 2u:
        v3 = 2 * v0;
        v4 = 1368;
        goto _08135952;
      case 3u:
        v3 = 2 * v0;
        v4 = 1372;
_08135952:
        v202E8DC = *(_WORD *)(v3 + v4 + 33705636);
        break;
      case 4u:
        v1 = (_BYTE *)33707016;
_0813596A:
        v202E8DC = *v1;
        break;
      case 8u:
        v2 = v20253F8 << 30;
_08135982:
        v202E8DC = v2 >> 31;
        break;
      case 9u:
        v202E8DC = sub_8135D3C(v20253F8 & 1);
        break;
      case 0xAu:
        sav12_xor_set(0x20u, v2025416);
        break;
      case 0xBu:
        sub_813461C(v20253F8 & 1);
        break;
      case 0xCu:
        *(_BYTE *)((v20253F8 & 1) + 0x20253FA) = v20160FB;
        break;
      case 0xDu:
        *(_WORD *)(2 * v0 + 0x2025418) = sub_8135D3C(v20253F8 & 1);
        break;
      case 0xEu:
        v202541C = v20253F8 & 1;
        break;
      default:
        return v6;
    }
  }
  return v6;
}
