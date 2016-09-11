int __fastcall sub_80B39D0(int a1, signed int a2, int a3)
{
  signed int v3; // r6@1
  int v4; // r5@1
  char v5; // r4@6
  int v6; // r4@10
  int v8; // [sp+Ch] [bp-4h]@0

  v3 = a2;
  v4 = a3;
  while ( 1 )
  {
    v5 = a1;
    if ( (unsigned __int8)a1 > v3
      || (unsigned __int8)byte_3000713 + (unsigned __int8)a1 >= (unsigned __int8)byte_3000710 )
    {
      break;
    }
    if ( byte_3000714 )
      sub_80B3930(
        *(_WORD *)(2 * ((unsigned __int8)byte_3000713 + (unsigned __int8)a1) + dword_300070C),
        (unsigned int)((a1 << 25) + 0x2000000) >> 24,
        v4);
    else
      sub_80B389C(
        *(_WORD *)(2 * ((unsigned __int8)byte_3000713 + (unsigned __int8)a1) + dword_300070C),
        (unsigned int)((a1 << 25) + 0x2000000) >> 24,
        v4);
    LOBYTE(a1) = v5 + 1;
  }
  if ( (unsigned __int8)a1 != 8 && (unsigned __int8)byte_3000713 + (unsigned __int8)a1 == (unsigned __int8)byte_3000710 )
  {
    v6 = (2 * (unsigned __int8)a1 + 2) & 0xFF;
    MenuFillWindowRectWithBlankTile(0xEu, 2 * a1 + 2, 0x1Cu, 2 * a1 + 3);
    MenuPrint((int)&OtherText_Cancel2, 14, v6);
  }
  return v8;
}
