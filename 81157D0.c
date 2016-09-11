int __fastcall sub_81157D0(unsigned __int8 a1)
{
  unsigned int v1; // r4@1
  int v3; // [sp+18h] [bp-4h]@0

  v1 = a1;
  if ( a1 > 0xFu )
  {
def_81157E4:
    sub_8124DDC(gBG2TilemapBuffer, 0, 14, 7);
    sub_8124E2C(
      gBG2TilemapBuffer,
      33655328,
      (3 * (v1 % 5 & 0xFF) + 14) & 0xFF,
      (3 * ((signed int)(v1 - 1) / 5) + 7) & 0xFF);
  }
  else
  {
    switch ( a1 )
    {
      case 0u:
        sub_8124DDC(gBG2TilemapBuffer, 0, 14, 7);
        break;
      case 1u:
      case 2u:
      case 3u:
      case 4u:
        sub_8124DDC(gBG2TilemapBuffer, 0, 14, 7);
        sub_8124E2C(gBG2TilemapBuffer, 33655346, (3 * v1 + 14) & 0xFF, 7);
        break;
      case 5u:
      case 0xAu:
      case 0xFu:
        sub_8124DDC(gBG2TilemapBuffer, 0, 14, 7);
        sub_8124E2C(gBG2TilemapBuffer, 33655424, 14, (3 * ((signed int)(v1 - 1) / 5) + 10) & 0xFF);
        break;
      default:
        goto def_81157E4;
    }
  }
  return v3;
}
