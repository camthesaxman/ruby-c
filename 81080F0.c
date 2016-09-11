int sub_81080F0()
{
  unsigned int v0; // r0@1
  int v1; // r0@3
  int v3; // [sp+4h] [bp-4h]@0

  v0 = *(_BYTE *)(v2039238 + 1);
  if ( v0 <= 4 )
  {
    switch ( v0 )
    {
      case 1u:
        v1 = *(_BYTE *)(88 * v2024C07 + 0x2024AA1);
        goto _081081B4;
      case 0u:
        v1 = *(_BYTE *)(88 * v2024C08 + 0x2024AA1);
        goto _081081B4;
      case 3u:
        v1 = *(_BYTE *)(88 * v2024C07 + 0x2024AA2);
        goto _081081B4;
      case 2u:
        v1 = *(_BYTE *)(88 * v2024C08 + 0x2024AA2);
        goto _081081B4;
      case 4u:
        v1 = gBattleMoves[12 * v2016802 + 2];
_081081B4:
        v2016808 = v1;
        break;
      default:
        break;
    }
  }
  v2039238 += 2;
  return v3;
}
